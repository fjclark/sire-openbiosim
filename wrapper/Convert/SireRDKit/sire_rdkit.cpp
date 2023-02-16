
#include "sire_rdkit.h"

#include <GraphMol/MolOps.h>
#include <GraphMol/PeriodicTable.h>
#include <GraphMol/SmilesParse/SmilesParse.h>
#include <GraphMol/SmilesParse/SmilesWrite.h>
#include <GraphMol/ForceFieldHelpers/UFF/uff.h>
#include <GraphMol/DistGeomHelpers/embedder.h>

#include "SireStream/datastream.h"
#include "SireStream/shareddatastream.h"

#include "SireMol/core.h"
#include "SireMol/moleditor.h"
#include "SireMol/atomelements.h"
#include "SireMol/atomcharges.h"
#include "SireMol/atomcoords.h"
#include "SireMol/atommasses.h"
#include "SireMol/atomproperty.hpp"
#include "SireMol/connectivity.h"
#include "SireMol/bondid.h"

#include "SireMM/selectorbond.h"

#include "SireMaths/vector.h"

#include "SireBase/parallel.h"
#include "SireBase/propertylist.h"
#include "SireBase/stringproperty.h"

#include "SireUnits/units.h"

#include "tostring.h"

#include <map>

#include <QDebug>

using RDKit::ROMOL_SPTR;
using RDKit::RWMOL_SPTR;
using SireBase::PropertyMap;
using SireMol::Molecule;
using SireMol::SelectorMol;

namespace SireRDKit
{
    bool use_parallel(int n, const SireBase::PropertyMap &map)
    {
        if (n <= 16)
            return false;

        if (map["parallel"].hasValue())
        {
            return map["parallel"].value().asABoolean();
        }

        return true;
    }

    RDKit::Atom::ChiralType string_to_chiral(const QString &typ)
    {
        const static std::map<QString, RDKit::Atom::ChiralType> types = {
            {"CHI_UNSPECIFIED", RDKit::Atom::CHI_UNSPECIFIED},
            {"CHI_TETRAHEDRAL_CW", RDKit::Atom::CHI_TETRAHEDRAL_CW},
            {"CHI_TETRAHEDRAL_CCW", RDKit::Atom::CHI_TETRAHEDRAL_CCW},
            {"CHI_OTHER", RDKit::Atom::CHI_OTHER},
            // These don't seem to be supported on older RDKits?
            //  {"CHI_TETRAHEDRAL", RDKit::Atom::CHI_OTHER},
            //  {"CHI_ALLENE", RDKit::Atom::CHI_ALLENE},
            //  {"CHI_SQUAREPLANAR", RDKit::Atom::CHI_SQUAREPLANAR},
            //  {"CHI_TRIGONALBIPYRAMIDAL", RDKit::Atom::CHI_TRIGONALBIPYRAMIDAL},
            //  {"CHI_OCTAHEDRAL", RDKit::Atom::CHI_OCTAHEDRAL},
            {"CHI_UNKNOWN", RDKit::Atom::CHI_UNSPECIFIED}};

        auto it = types.find(typ);

        if (it == types.end())
            return RDKit::Atom::CHI_UNSPECIFIED;
        else
            return it->second;
    }

    QString chiral_to_string(RDKit::Atom::ChiralType typ)
    {
        switch (typ)
        {
        case RDKit::Atom::CHI_UNSPECIFIED:
            return "CHI_UNSPECIFIED";
        case RDKit::Atom::CHI_TETRAHEDRAL_CW:
            return "CHI_TETRAHEDRAL_CW";
        case RDKit::Atom::CHI_TETRAHEDRAL_CCW:
            return "CHI_TETRAHEDRAL_CCW";
        case RDKit::Atom::CHI_OTHER:
            return "CHI_OTHER";
            // These don't seem to be supported on older RDKits?
            //   case RDKit::Atom::CHI_TETRAHEDRAL:
            //       return "CHI_TETRAHEDRAL";
            //   case RDKit::Atom::CHI_ALLENE:
            //       return "CHI_ALLENE";
            //   case RDKit::Atom::CHI_SQUAREPLANAR:
            //       return "CHI_SQUAREPLANAR";
            //   case RDKit::Atom::CHI_TRIGONALBIPYRAMIDAL:
            //       return "CHI_TRIGONALBIPYRAMIDAL";
            //   case RDKit::Atom::CHI_OCTAHEDRAL:
            //       return "CHI_OCTAHEDRAL";
        default:
            return "CHI_UNKNOWN";
        }
    }

    RDKit::Atom::HybridizationType string_to_hybridization(const QString &typ)
    {
        const static std::map<QString, RDKit::Atom::HybridizationType> types = {
            {"UNSPECIFIED", RDKit::Atom::UNSPECIFIED},
            {"S", RDKit::Atom::S},
            {"SP", RDKit::Atom::SP},
            {"SP2", RDKit::Atom::SP2},
            // These don't seem to be supported on older RDKits?
            // {"SP2D", RDKit::Atom::SP2D},
            {"SP3D", RDKit::Atom::SP3D},
            {"SP3D2", RDKit::Atom::SP3D2},
            {"OTHER", RDKit::Atom::OTHER},
            {"UNKNOWN", RDKit::Atom::UNSPECIFIED}};

        auto it = types.find(typ);

        if (it == types.end())
            return RDKit::Atom::UNSPECIFIED;
        else
            return it->second;
    }

    QString hybridization_to_string(RDKit::Atom::HybridizationType typ)
    {
        switch (typ)
        {
        case RDKit::Atom::UNSPECIFIED:
            return "UNSPECIFIED";
        case RDKit::Atom::S:
            return "S";
        case RDKit::Atom::SP:
            return "SP";
        case RDKit::Atom::SP2:
            return "SP2";
            // These don't seem to be supported on older RDKits?
            //    case RDKit::Atom::SP2D:
            //        return "SP2D";
        case RDKit::Atom::SP3D:
            return "SP3D";
        case RDKit::Atom::SP3D2:
            return "SP3D2";
        case RDKit::Atom::OTHER:
            return "OTHER";
        default:
            return "UNKNOWN";
        }
    }

    QString bondtype_to_string(RDKit::Bond::BondType typ)
    {
        switch (typ)
        {
        case RDKit::Bond::UNSPECIFIED:
            return "UNSPECIFIED";
        case RDKit::Bond::SINGLE:
            return "SINGLE";
        case RDKit::Bond::DOUBLE:
            return "DOUBLE";
        case RDKit::Bond::TRIPLE:
            return "TRIPLE";
        case RDKit::Bond::QUADRUPLE:
            return "QUADRUPLE";
        case RDKit::Bond::QUINTUPLE:
            return "QUINTUPLE";
        case RDKit::Bond::HEXTUPLE:
            return "HEXTUPLE";
        case RDKit::Bond::ONEANDAHALF:
            return "ONEANDAHALF";
        case RDKit::Bond::TWOANDAHALF:
            return "TWOANDAHALF";
        case RDKit::Bond::THREEANDAHALF:
            return "THREEANDAHALF";
        case RDKit::Bond::FOURANDAHALF:
            return "FOURANDAHALF";
        case RDKit::Bond::FIVEANDAHALF:
            return "FIVEANDAHALF";
        case RDKit::Bond::AROMATIC:
            return "AROMATIC";
        case RDKit::Bond::IONIC:
            return "IONIC";
        case RDKit::Bond::HYDROGEN:
            return "HYDROGEN";
        case RDKit::Bond::THREECENTER:
            return "THREECENTER";
        case RDKit::Bond::DATIVEONE:
            return "DATIVEONE";
        case RDKit::Bond::DATIVE:
            return "DATIVEONE";
        case RDKit::Bond::DATIVEL:
            return "DATIVEL";
        case RDKit::Bond::DATIVER:
            return "DATIVER";
        case RDKit::Bond::OTHER:
            return "OTHER";
        case RDKit::Bond::ZERO:
            return "ZERO";
        default:
            return "UNSPECIFIED";
        }
    }

    RDKit::Bond::BondType order_to_bondtype(int order)
    {
        switch (order)
        {
        case 0:
            return RDKit::Bond::ZERO;
        case 1:
            return RDKit::Bond::SINGLE;
        case 2:
            return RDKit::Bond::DOUBLE;
        case 3:
            return RDKit::Bond::TRIPLE;
        case 4:
            return RDKit::Bond::QUADRUPLE;
        case 5:
            return RDKit::Bond::HEXTUPLE;
        default:
            return RDKit::Bond::OTHER;
        }
    }

    RDKit::Bond::BondType string_to_bondtype(const QString &typ)
    {
        const static std::map<QString, RDKit::Bond::BondType> types = {
            {"UNSPECIFIED", RDKit::Bond::UNSPECIFIED},
            {"SINGLE", RDKit::Bond::SINGLE},
            {"DOUBLE", RDKit::Bond::DOUBLE},
            {"TRIPLE", RDKit::Bond::TRIPLE},
            {"QUADRUPLE", RDKit::Bond::QUADRUPLE},
            {"QUINTUPLE", RDKit::Bond::QUINTUPLE},
            {"HEXTUPLE", RDKit::Bond::HEXTUPLE},
            {"ONEANDAHALF", RDKit::Bond::ONEANDAHALF},
            {"TWOANDAHALF", RDKit::Bond::TWOANDAHALF},
            {"THREEANDAHALF", RDKit::Bond::THREEANDAHALF},
            {"FOURANDAHALF", RDKit::Bond::FOURANDAHALF},
            {"FIVEANDAHALF", RDKit::Bond::FIVEANDAHALF},
            {"AROMATIC", RDKit::Bond::AROMATIC},
            {"IONIC", RDKit::Bond::IONIC},
            {"HYDROGEN", RDKit::Bond::HYDROGEN},
            {"THREECENTER", RDKit::Bond::THREECENTER},
            {"DATIVEONE", RDKit::Bond::DATIVEONE},
            {"DATIVE", RDKit::Bond::DATIVE},
            {"DATIVEL", RDKit::Bond::DATIVEL},
            {"DATIVER", RDKit::Bond::DATIVER},
            {"OTHER", RDKit::Bond::OTHER},
            {"ZERO", RDKit::Bond::ZERO}};

        auto it = types.find(typ);

        if (it == types.end())
            return RDKit::Bond::UNSPECIFIED;
        else
            return it->second;
    }

    template <class T, class V>
    void set_prop(T &atom, const QString &key, const V &value,
                  const PropertyMap &map)
    {
        const auto name = map[key];

        if (name.hasSource())
            atom.setProperty(name.source(), value);
    }

    /**
     *
        """Calculate the number of unpaired electrons (NUE) of an atom

        Parameters
        ----------
        atom: rdkit.Chem.rdchem.Atom
            The atom for which the NUE will be computed

        Returns
        -------
        nue : list
            The NUE for each possible valence of the atom
        """

    */
    QVector<int> get_nb_unpaired_electrons(const RDKit::Atom &atom)
    {
        const RDKit::PeriodicTable *PERIODIC_TABLE = RDKit::PeriodicTable::getTable();

        auto expected_vs = PERIODIC_TABLE->getValenceList(atom.getAtomicNum());

        auto current_v = atom.getTotalValence() - atom.getFormalCharge();

        QVector<int> ret;
        ret.reserve(expected_vs.size());

        for (int i = 0; i < expected_vs.size(); ++i)
        {
            ret.append(expected_vs[i] - current_v);
        }

        return ret;
    }

    /** Infer the bond info and charge state for all atoms of 'molecule'.
     *  This is heavily based on _infer_bond_info from MDAnalysis,
     *  as described here:
     *  https://blog.matteoferla.com/2020/02/guess-bond-order-in-rdkit-by-number-of.html
     *
     *  https://docs.mdanalysis.org/2.0.0/_modules/MDAnalysis/converters/RDKit.html#_infer_bo_and_charges
     *
     *  MDAnalysis code was written by Matteo Ferla and was released
     *  under the GPL. This is a C++ port of the original python code
     *
     *  The molecule is edited in place and must have all hydrogens added.
     *  Quoting the MDAnalysis docs
     *
        Since most MD topology files don't explicitly retain information on bond
        orders or charges, it has to be guessed from the topology. This is done by
        looping over each atom and comparing its expected valence to the current
        valence to get the Number of Unpaired Electrons (NUE).
        If an atom has a negative NUE, it needs a positive formal charge (-NUE).
        If two neighbouring atoms have UEs, the bond between them most
        likely has to be increased by the value of the smallest NUE.
        If after this process, an atom still has UEs, it needs a negative formal
        charge of -NUE.

        Parameters
        ----------
        mol : rdkit.Chem.rdchem.RWMol
            The molecule is modified inplace and must have all hydrogens added

        Notes
        -----
        This algorithm is order dependant. For example, for a carboxylate group
        R-C(-O)-O the first oxygen read will receive a double bond and the other
        one will be charged. It will also affect more complex conjugated systems.
     *
     */
    void infer_bond_info(RDKit::RWMol &molecule)
    {
        // get all the atoms
        QList<std::pair<QVector<int>, RDKit::Atom *>> atoms;

        for (auto atom : molecule.atoms())
        {
            atoms.append(std::make_pair(get_nb_unpaired_electrons(*atom),
                                        atom));
        }

        // sort these atoms so that the ones with most unpaired electrons
        // come first
        std::sort(atoms.begin(), atoms.end(),
                  [](const std::pair<QVector<int>, RDKit::Atom *> &atom0,
                     const std::pair<QVector<int>, RDKit::Atom *> &atom1)
                  {
                      return std::get<0>(atom0).at(0) > std::get<0>(atom1).at(0);
                  });

        for (const auto &p : atoms)
        {
            // number of unpaired electrons
            auto nue = std::get<0>(p);

            // for this atom...
            RDKit::Atom *atom = std::get<1>(p);

            // if there's only one possible valence state and the corresponding
            // nue is negative, it means we can only add a positive charge to
            // the atom
            if (nue.count() == 1 and nue[0] < 0)
            {
                atom->setFormalCharge(-nue[0]);
                molecule.updatePropertyCache(false);
            }

            if (nue.count() == 1 and nue[0] <= 0)
            {
                // go to the next atom if above case or atom has
                // no unpaired electrons
                continue;
            }

            // get the neighbors
            QList<std::pair<QVector<int>, RDKit::Atom *>> neighbors;

            for (auto n : molecule.atomNeighbors(atom))
            {
                neighbors.append(std::make_pair(get_nb_unpaired_electrons(*n),
                                                n));
            }

            std::sort(neighbors.begin(), neighbors.end(),
                      [](const std::pair<QVector<int>, RDKit::Atom *> &atom0,
                         const std::pair<QVector<int>, RDKit::Atom *> &atom1)
                      {
                          return std::get<0>(atom0).at(0) > std::get<0>(atom1).at(0);
                      });

            int min_nue = 0;

            for (const auto n : nue)
            {
                if (n > 0)
                {
                    if (min_nue == 0 or n < min_nue)
                        min_nue = n;
                }
            }

            for (int i = 0; i < neighbors.count(); ++i)
            {
                const auto na_nue = std::get<0>(neighbors.at(i));
                auto neighbor = std::get<1>(neighbors.at(i));

                int min_na_nue = 0;

                for (const auto n : na_nue)
                {
                    if (n > 0)
                    {
                        if (min_na_nue == 0 or n < min_na_nue)
                            min_na_nue = n;
                    }
                }

                // check if one of the neighbors has a common nue
                auto common_nue = std::min(min_nue, min_na_nue);

                // a common nue of 0 means we don't need to do anything
                if (common_nue != 0)
                {
                    auto bond = molecule.getBondBetweenAtoms(
                        atom->getIdx(), neighbor->getIdx());

                    int order = common_nue + 1;
                    bond->setBondType(order_to_bondtype(order));
                    molecule.updatePropertyCache(false);

                    if (i < neighbors.count())
                    {
                        // recalculate the nue for this atom
                        nue = get_nb_unpaired_electrons(*atom);
                    }
                }
            }

            // recalculate the nue for this atom
            nue = get_nb_unpaired_electrons(*atom);

            if (nue[0] > 0)
            {
                // transform it to a negative charge
                atom->setFormalCharge(-nue[0]);
                atom->setNumRadicalElectrons(0);
                molecule.updatePropertyCache(false);
            }
        }
    }

    ROMOL_SPTR sire_to_rdkit(const Molecule &mol, const PropertyMap &map)
    {
        RDKit::RWMol molecule;
        molecule.beginBatchEdit();

        molecule.setProp<std::string>("_Name", mol.name().value().toStdString());

        const auto atoms = mol.atoms();

        QList<SireMol::Element> elements;

        for (int i = 0; i < atoms.count(); ++i)
        {
            const auto atom = atoms(i);

            molecule.addAtom(true);
            auto a = molecule.getActiveAtom();

            const auto element = atom.property<SireMol::Element>(map["element"]);

            a->setAtomicNum(element.nProtons());

            // don't automatically add hydrogens to this atom
            a->setNoImplicit(true);

            elements.append(element);

            try
            {
                a->setFormalCharge(atom.property<SireUnits::Dimension::Charge>(map["formal_charge"]).to(SireUnits::mod_electron));
            }
            catch (...)
            {
            }

            try
            {
                a->setIsAromatic(atom.property<qint64>(map["is_aromatic"]) != 0);
            }
            catch (...)
            {
            }

            try
            {
                a->setIsotope(atom.property<qint64>(map["isotope"]));
            }
            catch (...)
            {
            }

            try
            {
                a->setChiralTag(string_to_chiral(atom.property<QString>(map["chiral_tag"])));
            }
            catch (...)
            {
            }

            try
            {
                a->setHybridization(string_to_hybridization(atom.property<QString>(map["hybridization"])));
            }
            catch (...)
            {
            }
        }

        const auto bonds = SireMM::SelectorBond(mol, map);

        bool has_bond_info = false;

        for (int i = 0; i < bonds.count(); ++i)
        {
            const auto bond = bonds(i);

            RDKit::Bond::BondType bondtype = RDKit::Bond::SINGLE;

            try
            {
                bondtype = string_to_bondtype(bond.property(map["bondtype"]).asAString());

                // one bond has bond info, so assume that all do
                has_bond_info = false;
            }
            catch (...)
            {
            }

            const auto atom0 = bond.atom0().index().value();
            const auto atom1 = bond.atom1().index().value();

            if (elements.at(atom0).nProtons() == 0 or
                elements.at(atom1).nProtons() == 0)
            {
                // bonds involving dummy atoms
                bondtype = RDKit::Bond::ZERO;
            }
            else if (elements.at(atom0).nProtons() == 1 and
                     elements.at(atom1).nProtons() == 1 and
                     bonds.count() > 1)
            {
                // H-H bonds in molecules containing more
                // bonds than just hydrogens...
                bondtype = RDKit::Bond::ZERO;
            }

            molecule.addBond(bond.atom0().index().value(),
                             bond.atom1().index().value(),
                             bondtype);
        }

        molecule.commitBatchEdit();
        molecule.updatePropertyCache(false);

        if (atoms.count() > 1 and (not has_bond_info))
            // we need to infer the bond information
            infer_bond_info(molecule);

        // try each sanitisation step in turn, skipping failed
        try
        {
            RDKit::MolOps::cleanUp(molecule);
        }
        catch (...)
        {
        }

        try
        {
            molecule.updatePropertyCache();
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::symmetrizeSSSR(molecule);
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::Kekulize(molecule);
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::assignRadicals(molecule);
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::setAromaticity(molecule);
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::setConjugation(molecule);
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::setHybridization(molecule);
        }
        catch (...)
        {
        }

        try
        {
            RDKit::MolOps::cleanupChirality(molecule);
        }
        catch (...)
        {
        }

        return ROMOL_SPTR(new RDKit::ROMol(molecule));
    }

    Molecule rdkit_to_sire(const ROMOL_SPTR &mol, const PropertyMap &map)
    {
        if (mol.get() == 0)
            return Molecule();

        QString molname;

        if (mol->hasProp("_Name"))
        {
            molname = QString::fromStdString(mol->getProp<std::string>("_Name"));
        }

        auto cg = Molecule().edit().rename(molname).add(SireMol::CGName("0"));
        auto res = cg.molecule().add(SireMol::ResNum(1));
        res.rename(SireMol::ResName("LIG"));

        int n = 0;

        QHash<const RDKit::Atom *, SireMol::AtomIdx> atom_to_idx;

        QHash<SireMol::Element, int> element_count;

        for (const auto &atom : mol->atoms())
        {
            atom_to_idx[atom] = n;
            n += 1;
            auto a = cg.add(SireMol::AtomNum(n));
            a.reparent(res.number());
            a.rename(SireMol::AtomName(
                QString("%1%2")
                    .arg(QString::fromStdString(atom->getSymbol()))
                    .arg(n)));

            set_prop(a, "element", SireMol::Element(atom->getAtomicNum()), map);
            set_prop(a, "formal_charge", atom->getFormalCharge() * SireUnits::mod_electron, map);
            set_prop(a, "is_aromatic", qint64(atom->getIsAromatic()), map);
            set_prop(a, "mass", atom->getMass() * SireUnits::g_per_mol, map);
            set_prop(a, "isotope", qint64(atom->getIsotope()), map);
            set_prop(a, "chiral_tag", chiral_to_string(atom->getChiralTag()), map);
            set_prop(a, "hybridization", hybridization_to_string(atom->getHybridization()), map);
        }

        // we've built the main structure now - just need to add other
        // properties
        auto molecule = cg.molecule().commit().edit();

        if (map["connectivity"].hasSource())
        {
            auto connectivity = SireMol::Connectivity(molecule.info()).edit();

            const auto bondtype_as_double = map["bondtype_as_double"];
            const auto bondtype = map["bondtype"];

            for (const auto &bond : mol->bonds())
            {
                const auto atom0 = atom_to_idx[bond->getBeginAtom()];
                const auto atom1 = atom_to_idx[bond->getEndAtom()];

                connectivity.connect(atom0, atom1);

                const auto b = SireMol::BondID(atom0, atom1);

                if (bondtype_as_double.hasSource())
                    connectivity.setProperty(b, bondtype_as_double.source(),
                                             SireBase::wrap(bond->getBondTypeAsDouble()));

                if (bondtype.hasSource())
                    connectivity.setProperty(b, bondtype.source(),
                                             SireBase::wrap(bondtype_to_string(bond->getBondType())));
            }

            molecule.setProperty(map["connectivity"], connectivity.commit());
        }

        if (map["coordinates"].hasSource())
        {
            const int nconformers = mol->getNumConformers();

            if (nconformers > 0)
            {
                const auto &conformer = mol->getConformer(0);

                SireMol::AtomCoords coords(molecule.info());

                for (int i = 0; i < molecule.nAtoms(); ++i)
                {
                    const auto pos = conformer.getAtomPos(i);
                    coords.set(molecule.info().cgAtomIdx(SireMol::AtomIdx(i)),
                               SireMaths::Vector(pos.x, pos.y, pos.z));
                }

                molecule.setProperty(map["coordinates"].source(), coords);
            }
        }

        return molecule.commit();
    }

    SelectorMol rdkit_to_sire(const QList<ROMOL_SPTR> &mols, const PropertyMap &map)
    {
        QList<Molecule> sire_mols;

        for (const auto &mol : mols)
        {
            sire_mols.append(rdkit_to_sire(mol, map));
        }

        return sire_mols;
    }

    QList<ROMOL_SPTR> sire_to_rdkit(const SelectorMol &mols, const PropertyMap &map)
    {
        const int nmols = mols.count();

        if (nmols == 0)
            return QList<ROMOL_SPTR>();

        QVector<ROMOL_SPTR> rdkit_mols(mols.count());

        ROMOL_SPTR *rdkit_mols_data = rdkit_mols.data();

        if (use_parallel(nmols, map))
        {
            tbb::parallel_for(tbb::blocked_range<int>(0, nmols), [&](tbb::blocked_range<int> r)
                              {
            for (int i=r.begin(); i<r.end(); ++i)
            {
                rdkit_mols_data[i] = sire_to_rdkit(mols[i], map);
            } });
        }
        else
        {
            for (int i = 0; i < nmols; ++i)
            {
                rdkit_mols_data[i] = sire_to_rdkit(mols[i], map);
            }
        }

        return QList<ROMOL_SPTR>(rdkit_mols.constBegin(), rdkit_mols.constEnd());
    }

    ROMOL_SPTR smiles_to_rdkit(const QString &smiles,
                               const QString &label,
                               const PropertyMap &map)
    {
        RDKit::SmilesParserParams params;
        params.debugParse = 0;
        params.sanitize = true;
        params.removeHs = false;
        params.parseName = false;

        RWMOL_SPTR rdkit_mol;

        try
        {
            rdkit_mol.reset(RDKit::SmilesToMol(smiles.toStdString(), params));
        }
        catch (...)
        {
        }

        if (rdkit_mol.get() == 0)
            return ROMOL_SPTR();

        rdkit_mol->setProp<std::string>("_Name", label.toStdString());

        bool add_hydrogens = true;
        bool generate_coordinates = true;

        if (map["add_hydrogens"].hasValue())
            add_hydrogens = map["add_hydrogens"].value().asABoolean();

        if (map["generate_coordinates"].hasValue())
            generate_coordinates = map["generate_coordinates"].value().asABoolean();

        if (add_hydrogens or generate_coordinates)
        {
            try
            {

                RDKit::MolOps::addHs(*rdkit_mol);
            }
            catch (...)
            {
                // could not add hydrogens, so also can't generate coords
                generate_coordinates = false;
            }
        }

        if (generate_coordinates)
        {
            try
            {
                RDKit::DGeomHelpers::EmbedMolecule(*rdkit_mol);
                RDKit::UFF::UFFOptimizeMolecule(*rdkit_mol);
            }
            catch (...)
            {
                // ignore errors
            }
        }

        return rdkit_mol;
    }

    QList<ROMOL_SPTR> smiles_to_rdkit(const QStringList &smiles,
                                      const QStringList &labels,
                                      const PropertyMap &map)
    {
        if (smiles.count() != labels.count())
            throw SireError::invalid_arg(QObject::tr(
                                             "The number of smiles strings (%1) must match the "
                                             "number of labels (%2)")
                                             .arg(smiles.count())
                                             .arg(labels.count()),
                                         CODELOC);

        const int n = smiles.count();

        if (n == 0)
            return QList<ROMOL_SPTR>();

        QVector<ROMOL_SPTR> ret(n);
        ROMOL_SPTR *ret_data = ret.data();

        if (use_parallel(n, map))
        {
            tbb::parallel_for(tbb::blocked_range<int>(0, n), [&](tbb::blocked_range<int> r)
                              {
                for (int i=r.begin(); i<r.end(); ++i)
                {
                    ret_data[i] = smiles_to_rdkit(smiles[i], labels[i], map);
                } });
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                ret_data[i] = smiles_to_rdkit(smiles[i], labels[i], map);
            }
        }

        return QList<ROMOL_SPTR>(ret.constBegin(), ret.constEnd());
    }

    QString rdkit_to_smiles(const ROMOL_SPTR &mol,
                            const PropertyMap &map)
    {
        if (mol.get() == 0)
            return QString();

        try
        {
            return QString::fromStdString(RDKit::MolToSmiles(*mol));
        }
        catch (...)
        {
            // ignore errors
            return QString();
        }
    }

    QStringList rdkit_to_smiles(const QList<ROMOL_SPTR> &mols,
                                const PropertyMap &map)
    {
        if (mols.isEmpty())
            return QStringList();

        const int nmols = mols.count();

        QVector<QString> smiles(nmols);
        QString *smiles_data = smiles.data();

        if (use_parallel(nmols, map))
        {
            tbb::parallel_for(tbb::blocked_range<int>(0, nmols), [&](tbb::blocked_range<int> r)
                              {
            for (int i=r.begin(); i<r.end(); ++i)
            {
                smiles_data[i] = rdkit_to_smiles(mols[i], map);
            } });
        }
        else
        {
            for (int i = 0; i < mols.count(); ++i)
            {
                smiles_data[i] = rdkit_to_smiles(mols[i], map);
            }
        }

        return QStringList(smiles.constBegin(), smiles.constEnd());
    }

    ROMOL_SPTR rdkit_remove_hydrogens(const ROMOL_SPTR &mol,
                                      const PropertyMap &map)
    {
        if (mol.get() == 0)
            return mol;

        // really important not to print warnings as these
        // can deadlock jupyter if this is called in parallel!
        RDKit::MolOps::RemoveHsParameters params;
        params.showWarnings = false;

        try
        {
            return ROMOL_SPTR(RDKit::MolOps::removeHs(*mol, params));
        }
        catch (...)
        {
            // ignore errors
            return mol;
        }
    }

    QList<ROMOL_SPTR> rdkit_remove_hydrogens(const QList<ROMOL_SPTR> &mols,
                                             const PropertyMap &map)
    {
        if (mols.isEmpty())
            return QList<ROMOL_SPTR>();

        const int nmols = mols.count();

        QVector<ROMOL_SPTR> ret(nmols);
        ROMOL_SPTR *ret_data = ret.data();

        if (use_parallel(nmols, map))
        {
            tbb::parallel_for(tbb::blocked_range<int>(0, nmols), [&](tbb::blocked_range<int> r)
                              {
            for (int i=r.begin(); i<r.end(); ++i)
            {
                ret_data[i] = rdkit_remove_hydrogens(mols[i], map);
            } });
        }
        else
        {
            for (int i = 0; i < mols.count(); ++i)
            {
                ret_data[i] = rdkit_remove_hydrogens(mols[i], map);
            }
        }

        return QList<ROMOL_SPTR>(ret.constBegin(), ret.constEnd());
    }

} // end of namespace SireRDKit
