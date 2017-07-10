/********************************************\
  *
  *  Sire - Molecular Simulation Framework
  *
  *  Copyright (C) 2017  Christopher Woods
  *
  *  This program is free software; you can redistribute it and/or modify
  *  it under the terms of the GNU General Public License as published by
  *  the Free Software Foundation; either version 2 of the License, or
  *  (at your option) any later version.
  *
  *  This program is distributed in the hope that it will be useful,
  *  but WITHOUT ANY WARRANTY; without even the implied warranty of
  *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  *  GNU General Public License for more details.
  *
  *  You should have received a copy of the GNU General Public License
  *  along with this program; if not, write to the Free Software
  *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
  *
  *  For full details of the license please see the COPYING file
  *  that should have come with this distribution.
  *
  *  You can contact the authors via the developer's mailing list
  *  at http://siremol.org
  *
\*********************************************/

#include "SireIO/amberrst7.h"
#include "SireIO/amberformat.h"

#include "SireSystem/system.h"

#include "SireMol/mgname.h"
#include "SireMol/molidx.h"
#include "SireMol/molecule.h"
#include "SireMol/atomcoords.h"
#include "SireMol/atomvelocities.h"
#include "SireMol/moleditor.h"

#include "SireVol/periodicbox.h"

#include "SireUnits/dimensions.h"
#include "SireUnits/units.h"

#include "SireBase/parallel.h"
#include "SireBase/stringproperty.h"

#include "SireIO/errors.h"

#include "SireStream/shareddatastream.h"

using namespace SireIO;
using namespace SireIO::detail;
using namespace SireMaths;
using namespace SireMol;
using namespace SireBase;
using namespace SireSystem;
using namespace SireUnits;
using namespace SireStream;

static const RegisterMetaType<AmberRst7> r_rst;

QDataStream SIREIO_EXPORT &operator<<(QDataStream &ds, const AmberRst7 &rst)
{
    writeHeader(ds, r_rst, 1);
    
    SharedDataStream sds(ds);
    
    sds << rst.ttle << rst.current_time
        << rst.coords << rst.vels
        << rst.box_dims << rst.box_angs
        << static_cast<const MoleculeParser&>(rst);
    
    return ds;
}

QDataStream SIREIO_EXPORT &operator>>(QDataStream &ds, AmberRst7 &rst)
{
    VersionID v = readHeader(ds, r_rst);
    
    if (v == 1)
    {
        SharedDataStream sds(ds);
        
        sds >> rst.ttle >> rst.current_time
            >> rst.coords >> rst.vels
            >> rst.box_dims >> rst.box_angs
            >> static_cast<MoleculeParser&>(rst);
    }
    else
        throw version_error(v, "1", r_rst, CODELOC);
    
    return ds;
}

static Vector cubic_angs(90,90,90);

SIRE_REGISTER_PARSER( rst, AmberRst7 );
SIRE_REGISTER_PARSER( rst7, AmberRst7 );
SIRE_REGISTER_PARSER( crd, AmberRst7 );

/** Constructor */
AmberRst7::AmberRst7()
         : ConcreteProperty<AmberRst7,MoleculeParser>(),
           current_time(0), box_dims(0), box_angs(cubic_angs)
{}

/** Private function used to read in the box data from the line with passed index */
void AmberRst7::readBoxInfo(int boxidx)
{
    if (boxidx < 0 or boxidx >= lines().count())
        return;
    
    const QString &line = lines().constData()[boxidx];
    
    QStringList local_errors;
    
    if (line.length() >= 36)
    {
        //we can get the box dimensions
        bool x_ok = true;
        bool y_ok = true;
        bool z_ok = true;
        
        const double x = line.midRef(0,12).toDouble(&x_ok);
        const double y = line.midRef(12,12).toDouble(&y_ok);
        const double z = line.midRef(24,12).toDouble(&z_ok);
        
        if (not (x_ok and y_ok and z_ok))
        {
            local_errors.append( QObject::tr(
                "Cannot read the box dimensions "
                "there was a formatting issue with line number %1. (%2,%3,%4)")
                    .arg(boxidx+1).arg(x_ok).arg(y_ok).arg(z_ok) );
        }
        else
            box_dims = Vector(x,y,z);
    }

    if (line.length() >= 72)
    {
        //we can get the box dimensions
        bool x_ok = true;
        bool y_ok = true;
        bool z_ok = true;
        
        const double x = line.midRef(36,12).toDouble(&x_ok);
        const double y = line.midRef(48,12).toDouble(&y_ok);
        const double z = line.midRef(60,12).toDouble(&z_ok);
        
        if (not (x_ok and y_ok and z_ok))
        {
            local_errors.append( QObject::tr(
                "Cannot read the box angles "
                "there was a formatting issue with line number %1. (%2,%3,%4)")
                    .arg(boxidx+1).arg(x_ok).arg(y_ok).arg(z_ok) );
        }
        else
            box_angs = Vector(x,y,z);
    }
}

/** Return the format name that is used to identify this file format within Sire */
QString AmberRst7::formatName() const
{
    return "RST7";
}

/** Parse the data contained in the lines - this clears any pre-existing
    data in this object */
void AmberRst7::parse(const PropertyMap &map)
{
    if (lines().count() < 2)
        //there is nothing in the file
        return;
    
    double score = 0;
    
    // read in the title FORMAT(20A4)
    ttle = lines()[0].simplified();
    score += 1;
    
    // read in the number of atoms and time (two space-separated words)
    QStringList words = lines()[1].split(" ", QString::SkipEmptyParts);
    
    if (words.isEmpty())
        throw SireIO::parse_error( QObject::tr(
                "Could not read the number of atoms from the first word of the "
                "restart file. Please check that the file is ok."), CODELOC );
    
    bool ok = true;
    int natoms = words[0].toInt(&ok);
    
    if (not ok)
        throw SireIO::parse_error( QObject::tr(
                "Could not read the number of atoms from the first five columns of "
                "the restart file. Please check that the file is ok."), CODELOC );

    if (words.count() >= 2)
    {
        current_time = words[1].toDouble(&ok);
        
        if (not ok)
        {
            //we can't read the current time - this is annoying, but some
            //crd files don't contain this information - in this case,
            //the natoms information may also be misformed
            current_time = 0;
        }
    }
    score += 1;

    //now make sure that that the file is large enough!
    if (lines().count() < (2 + (natoms/2)))
    {
        throw SireIO::parse_error( QObject::tr(
                "There is a problem with this restart file. The number of atoms is "
                "%1, but the number of lines in the file is too small (%2). The number "
                "of lines needs to be at least %3 to give all of the information.")
                    .arg(natoms)
                    .arg(lines().count())
                    .arg(2 + (natoms/2)), CODELOC );
    }
 
    //now read in all of the coordinates
    QMutex mutex;
    coords = QVector<Vector>(natoms, Vector(0));
    Vector *coords_array = coords.data();
    QStringList global_errors;
    
    //get a pointer to the array of lines
    const QString *l = lines().constData();

    auto parse_coords = [&](int i, QStringList &errors)
    {
        //coordinates written as 6F12.7, two atoms per line
        const int linenum = 2 + (i / 2);
        const int column = (i % 2) * 36;

        //we have already validated that there are enough lines
        const QString &line = l[linenum];
        
        if (line.length() < column+36)
        {
            errors.append( QObject::tr(
                    "Cannot read the coordinates for the atom at index %1 as "
                    "the line at line number %2 is too short.")
                        .arg(i+1).arg(linenum+1) );
            
            return;
        }
        
        bool x_ok = true;
        bool y_ok = true;
        bool z_ok = true;
        
        const double x = line.midRef(column,12).toDouble(&x_ok);
        const double y = line.midRef(column+12,12).toDouble(&y_ok);
        const double z = line.midRef(column+24,12).toDouble(&z_ok);
        
        if (not (x_ok and y_ok and z_ok))
        {
            errors.append( QObject::tr(
                "Cannot read the coordinates for the atom at index %1 as "
                "there was a formatting issue with line number %2. (%3,%4,%5)")
                    .arg(i+1).arg(linenum+1).arg(x_ok).arg(y_ok).arg(z_ok) );
            return;
        }
        
        coords_array[i] = Vector(x,y,z);
    };
    
    if (usesParallel())
    {
        tbb::parallel_for( tbb::blocked_range<int>(0,natoms),
                           [&](tbb::blocked_range<int> r)
        {
            QStringList local_errors;
            
            for (int i=r.begin(); i<r.end(); ++i)
            {
                parse_coords(i, local_errors);
            }
            
            if (not local_errors.isEmpty())
            {
                QMutexLocker lkr(&mutex);
                global_errors += local_errors;
            }
        });
    }
    else
    {
        for (int i=0; i<natoms; ++i)
        {
            parse_coords(i, global_errors);
        }
    }
    
    if (not global_errors.isEmpty())
    {
        throw SireIO::parse_error( QObject::tr(
                "There were some problems reading in the coordinate data "
                "from the restart file.\n%1")
                    .arg(global_errors.join("\n")), CODELOC );
    }

    score += natoms/2;

    //now read in all of the velocities
    if (lines().count() < (2 + ((natoms+1)/2) + ((natoms+1)/2)))
    {
        //there are no velocities - see if there is periodic box information
        int boxidx = 2 + (natoms/2);
        
        if (boxidx < lines().count())
        {
            //there is - read in the box information
            this->readBoxInfo(boxidx);
            score += 1;
        }

        this->setScore(score);
        return;
    }

    vels = QVector<Vector>(natoms, Vector(0));
    Vector *vels_array = vels.data();

    auto parse_vels = [&](int i, QStringList &errors)
    {
        //coordinates written as 6F12.7, two atoms per line
        const int linenum = 2 + (i / 2) + ((natoms+1) / 2);
        const int column = (i % 2) * 36;

        //we have already validated that there are enough lines
        const QString &line = l[linenum];
        
        if (line.length() < column+36)
        {
            errors.append( QObject::tr(
                    "Cannot read the velocities for the atom at index %1 as "
                    "the line at line number %2 is too short.")
                        .arg(i+1).arg(linenum+1) );
            
            return;
        }
        
        bool x_ok = true;
        bool y_ok = true;
        bool z_ok = true;
        
        const double x = line.midRef(column,12).toDouble(&x_ok);
        const double y = line.midRef(column+12,12).toDouble(&y_ok);
        const double z = line.midRef(column+24,12).toDouble(&z_ok);
        
        if (not (x_ok and y_ok and z_ok))
        {
            errors.append( QObject::tr(
                "Cannot read the velocities for the atom at index %1 as "
                "there was a formatting issue with line number %2. (%3,%4,%5)")
                    .arg(i+1).arg(linenum+1).arg(x_ok).arg(y_ok).arg(z_ok) );
            return;
        }
        
        // format is (units: Angstroms per 1/20.455 ps)
        vels_array[i] = Vector(x,y,z);
    };

    if (usesParallel())
    {
        tbb::parallel_for( tbb::blocked_range<int>(0,natoms),
                           [&](tbb::blocked_range<int> r)
        {
            QStringList local_errors;
            
            for (int i=r.begin(); i<r.end(); ++i)
            {
                parse_vels(i, local_errors);
            }
            
            if (not local_errors.isEmpty())
            {
                QMutexLocker lkr(&mutex);
                global_errors += local_errors;
            }
        });
    }
    else
    {
        for (int i=0; i<natoms; ++i)
        {
            parse_vels(i, global_errors);
        }
    }

    if (not global_errors.isEmpty())
    {
        throw SireIO::parse_error( QObject::tr(
                "There were some problems reading in the velocity data "
                "from the restart file.\n%1")
                    .arg(global_errors.join("\n")), CODELOC );
    }

    score += (natoms/2);

    //see if there is periodic box information
    int boxidx = 2 + ((natoms+1)/2) + ((natoms+1)/2);

    if (boxidx < lines().count())
    {
        //there is - read in the box information
        this->readBoxInfo(boxidx);
        score += 1;
    }

    this->setScore(score);
}

/** Construct by parsing the passed file */
AmberRst7::AmberRst7(const QString &filename, const PropertyMap &map)
         : ConcreteProperty<AmberRst7,MoleculeParser>(filename, map),
           current_time(0), box_dims(0), box_angs(cubic_angs)
{
    this->parse(map);
}

/** Construct by parsing the data in the passed text lines */
AmberRst7::AmberRst7(const QStringList &lines, const PropertyMap &map)
         : ConcreteProperty<AmberRst7,MoleculeParser>(lines, map),
           current_time(0), box_dims(0), box_angs(cubic_angs)
{
    this->parse(map);
}

/** Construct by extracting the necessary data from the passed System */
AmberRst7::AmberRst7(const System &system, const PropertyMap &map)
         : ConcreteProperty<AmberRst7,MoleculeParser>(),
           current_time(0), box_dims(0), box_angs(cubic_angs)
{
    //DO SOMETHING
}

/** Copy constructor */
AmberRst7::AmberRst7(const AmberRst7 &other)
         : ConcreteProperty<AmberRst7,MoleculeParser>(other),
           ttle(other.ttle), current_time(other.current_time),
           coords(other.coords), vels(other.vels),
           box_dims(other.box_dims), box_angs(other.box_angs)
{}

/** Destructor */
AmberRst7::~AmberRst7()
{}

AmberRst7& AmberRst7::operator=(const AmberRst7 &other)
{
    if (this != &other)
    {
        ttle = other.ttle;
        current_time = other.current_time;
        coords = other.coords;
        vels = other.vels;
        box_dims = other.box_dims;
        box_angs = other.box_angs;
    
        MoleculeParser::operator=(other);
    }

    return *this;
}

bool AmberRst7::operator==(const AmberRst7 &other) const
{
    return MoleculeParser::operator==(other);
}

bool AmberRst7::operator!=(const AmberRst7 &other) const
{
    return MoleculeParser::operator!=(other);
}

const char* AmberRst7::typeName()
{
    return QMetaType::typeName( qMetaTypeId<AmberRst7>() );
}

const char* AmberRst7::what() const
{
    return AmberRst7::typeName();
}

QString AmberRst7::toString() const
{
    if (coords.isEmpty())
    {
        return QObject::tr("AmberRst7::null");
    }
    else if (vels.isEmpty())
    {
        return QObject::tr("AmberRst7( title() = %1, nAtoms() = %2, hasVelocities() = false )")
                .arg(title()).arg(nAtoms());
    }
    else
    {
        return QObject::tr("AmberRst7( title() = %1, nAtoms() = %2, hasVelocities() = true )")
                .arg(title()).arg(nAtoms());
    }
}

/** Parse from the passed file */
AmberRst7 AmberRst7::parse(const QString &filename)
{
    return AmberRst7(filename);
}

/** Internal function used to add the data from this parser into the passed System */
void AmberRst7::addToSystem(System &system, const PropertyMap &map) const
{
    //first, we are going to work with the group of all molecules, which should
    //be called "all". We have to assume that the molecules are ordered in "all"
    //in the same order as they are in this restart file, with the data
    //in MolIdx/AtomIdx order (this should be the default for all parsers!)
    MoleculeGroup allmols = system[MGName("all")];

    const int nmols = allmols.nMolecules();

    QVector<int> atom_pointers(nmols+1, -1);
    
    int natoms = 0;
    
    for (int i=0; i<nmols; ++i)
    {
        atom_pointers[i] = natoms;
        const int nats = allmols[MolIdx(i)].data().info().nAtoms();
        natoms += nats;
    }
    
    atom_pointers[nmols] = natoms;
    
    if (natoms != this->nAtoms())
        throw SireIO::parse_error( QObject::tr(
                "Incompatibility between the files, as this restart file contains data "
                "for %1 atom(s), while the other file(s) have created a system with "
                "%2 atom(s)").arg(this->nAtoms()).arg(natoms), CODELOC );
    
    //next, copy the coordinates and optionally the velocities into the molecules
    QVector<Molecule> mols(nmols);
    Molecule *mols_array = mols.data();
    const Vector *coords_array = this->coordinates().constData();
    
    const PropertyName coords_property = map["coordinates"];
    
    if (this->hasVelocities())
    {
        const PropertyName vels_property = map["velocity"];
        const Vector *vels_array = this->velocities().constData();
    
        auto add_coords_and_vels = [&](int i)
        {
            const int atom_start_idx = atom_pointers.constData()[i];
            auto mol = allmols[MolIdx(i)].molecule();
            const auto molinfo = mol.data().info();
            
            //create space for the coordinates and velocities
            auto coords = QVector< QVector<Vector> >(molinfo.nCutGroups());
            auto vels = AtomVelocities(molinfo);

            for (int j=0; j<molinfo.nCutGroups(); ++j)
            {
                coords[j] = QVector<Vector>(molinfo.nAtoms(CGIdx(j)));
            }
            
            for (int j=0; j<mol.nAtoms(); ++j)
            {
                auto cgatomidx = molinfo.cgAtomIdx(AtomIdx(j));
                
                const int atom_idx = atom_start_idx + j;
                
                coords[cgatomidx.cutGroup()][cgatomidx.atom()] = coords_array[atom_idx];

                //velocity is Angstroms per 1/20.455 ps
                const auto vel_unit = (1.0 / 20.455) * angstrom / picosecond;
                
                const Vector &vel = vels_array[atom_idx];
                vels.set(cgatomidx, Velocity3D(vel.x() * vel_unit,
                                               vel.y() * vel_unit,
                                               vel.z() * vel_unit));
            }
            
            mols_array[i] = mol.edit()
                            .setProperty(vels_property, vels)
                            .setProperty(coords_property,
                                         AtomCoords(CoordGroupArray(coords)))
                            .commit();
        };
    
        if (usesParallel())
        {
            tbb::parallel_for( tbb::blocked_range<int>(0,nmols),
                               [&](tbb::blocked_range<int> r)
            {
                for (int i=r.begin(); i<r.end(); ++i)
                {
                    add_coords_and_vels(i);
                }
            });
        }
        else
        {
            for (int i=0; i<nmols; ++i)
            {
                add_coords_and_vels(i);
            }
        }
    }
    else
    {
        auto add_coords = [&](int i)
        {
            const int atom_start_idx = atom_pointers.constData()[i];
            auto mol = system[MolIdx(i)].molecule();
            const auto molinfo = mol.data().info();
            
            //create space for the coordinates
            auto coords = QVector< QVector<Vector> >(molinfo.nCutGroups());

            for (int j=0; j<molinfo.nCutGroups(); ++j)
            {
                coords[j] = QVector<Vector>(molinfo.nAtoms(CGIdx(j)));
            }
            
            for (int j=0; j<mol.nAtoms(); ++j)
            {
                auto cgatomidx = molinfo.cgAtomIdx(AtomIdx(j));
                
                const int atom_idx = atom_start_idx + j;
                
                coords[cgatomidx.cutGroup()][cgatomidx.atom()] = coords_array[atom_idx];
            }
            
            mols_array[i] = mol.edit()
                            .setProperty(coords_property,
                                         AtomCoords(CoordGroupArray(coords)))
                            .commit();
        };
    
        if (usesParallel())
        {
            tbb::parallel_for( tbb::blocked_range<int>(0,nmols),
                               [&](tbb::blocked_range<int> r)
            {
                for (int i=r.begin(); i<r.end(); ++i)
                {
                    add_coords(i);
                }
            });
        }
        else
        {
            for (int i=0; i<nmols; ++i)
            {
                add_coords(i);
            }
        }
    }
    
    system.update( Molecules(mols) );

    PropertyName space_property = map["space"];
    if (space_property.hasValue())
    {
        system.setProperty("space", space_property.value());
    }
    else if (box_dims != Vector(0) and space_property.hasSource())
    {
        if (box_angs != cubic_angs)
        {
            throw SireIO::parse_error( QObject::tr(
                    "Sire cannot currently support a non-cubic periodic box! %1")
                        .arg(box_angs.toString()), CODELOC );
        }
        
        
        system.setProperty( space_property.source(), SireVol::PeriodicBox(box_dims) );
    }
    
    //update the System fileformat property to record that it includes
    //data from this file format
    QString fileformat = this->formatName();
    
    try
    {
        QString last_format = system.property("fileformat").asA<StringProperty>();
        fileformat = QString("%1,%2").arg(last_format,fileformat);
    }
    catch(...)
    {}
    
    system.setProperty( "fileformat", StringProperty(fileformat) );
}

/** Return the title of the file */
QString AmberRst7::title() const
{
    return ttle;
}

/** Return the current time of the simulation from which this restart
    file was written */
double AmberRst7::time() const
{
    return current_time;
}

/** Return the number of atoms whose coordinates are contained in this restart file */
int AmberRst7::nAtoms() const
{
    return coords.count();
}

/** Return whether or not this restart file also provides velocities */
bool AmberRst7::hasVelocities() const
{
    return not vels.isEmpty();
}

/** Return the parsed coordinate data */
QVector<SireMaths::Vector> AmberRst7::coordinates() const
{
    return coords;
}

/** Return the parsed coordinate data */
QVector<SireMaths::Vector> AmberRst7::velocities() const
{
    return vels;
}

/** Return the parsed box dimensions */
SireMaths::Vector AmberRst7::boxDimensions() const
{
    return box_dims;
}

/** Return the parsed box angles */
SireMaths::Vector AmberRst7::boxAngles() const
{
    return box_angs;
}

