// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Amber.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/findexe.h"

#include "SireBase/tempdir.h"

#include "SireCAS/trigfuncs.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireMM/atomljs.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/internalff.h"

#include "SireMM/ljparameter.h"

#include "SireMaths/maths.h"

#include "SireMol/amberparameters.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcutting.h"

#include "SireMol/atomeditor.h"

#include "SireMol/atomelements.h"

#include "SireMol/atomidx.h"

#include "SireMol/atommasses.h"

#include "SireMol/cgatomidx.h"

#include "SireMol/connectivity.h"

#include "SireMol/element.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireMol/molidx.h"

#include "SireMol/reseditor.h"

#include "SireMol/residuecutting.h"

#include "SireMol/selector.hpp"

#include "SireMove/flexibility.h"

#include "SireMove/internalmove.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "SireVol/cartesian.h"

#include "SireVol/periodicbox.h"

#include "SireVol/triclinicbox.h"

#include "amber.h"

#include <QFile>

#include <QHash>

#include <QTextStream>

#include "amber.h"

SireIO::Amber __copy__(const SireIO::Amber &other){ return SireIO::Amber(other); }

#include "Qt/qdatastream.hpp"

const char* pvt_get_name(const SireIO::Amber&){ return "SireIO::Amber";}

#include "Helpers/release_gil_policy.hpp"

void register_Amber_class(){

    { //::SireIO::Amber
        typedef bp::class_< SireIO::Amber > Amber_exposer_t;
        Amber_exposer_t Amber_exposer = Amber_exposer_t( "Amber", "This class is used to read in an AMBER top file and crd file\n\nAuthor: Julien Michel\n", bp::init< >("Constructor") );
        bp::scope Amber_scope( Amber_exposer );
        Amber_exposer.def( bp::init< SireIO::Amber const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::Amber::coulomb14Factor

            typedef double ( ::SireIO::Amber::*coulomb14Factor_function_type)(  ) const;
            coulomb14Factor_function_type coulomb14Factor_function_value( &::SireIO::Amber::coulomb14Factor );

            Amber_exposer.def(
                "coulomb14Factor"
                , coulomb14Factor_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireIO::Amber::lj14Factor

            typedef double ( ::SireIO::Amber::*lj14Factor_function_type)(  ) const;
            lj14Factor_function_type lj14Factor_function_value( &::SireIO::Amber::lj14Factor );

            Amber_exposer.def(
                "lj14Factor"
                , lj14Factor_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Amber_exposer.def( bp::self != bp::self );
        { //::SireIO::Amber::operator=

            typedef ::SireIO::Amber & ( ::SireIO::Amber::*assign_function_type)( ::SireIO::Amber const & ) ;
            assign_function_type assign_function_value( &::SireIO::Amber::operator= );

            Amber_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        Amber_exposer.def( bp::self == bp::self );
        { //::SireIO::Amber::readCrdTop

            typedef ::boost::tuples::tuple< SireMol::MoleculeGroup, SireBase::PropPtr< SireVol::Space >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireIO::Amber::*readCrdTop_function_type)( ::QString const &,::QString const &,::QString ) const;
            readCrdTop_function_type readCrdTop_function_value( &::SireIO::Amber::readCrdTop );

            Amber_exposer.def(
                "readCrdTop"
                , readCrdTop_function_value
                , ( bp::arg("crdfile"), bp::arg("topfile"), bp::arg("flag_cutting")="perresidue" )
                , "Reads the contents of a topfile and associated crdfile and returns a molecule group" );

        }
        { //::SireIO::Amber::set14Factors

            typedef void ( ::SireIO::Amber::*set14Factors_function_type)( double,double ) ;
            set14Factors_function_type set14Factors_function_value( &::SireIO::Amber::set14Factors );

            Amber_exposer.def(
                "set14Factors"
                , set14Factors_function_value
                , ( bp::arg("coul_14"), bp::arg("lj_14") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireIO::Amber::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::Amber::typeName );

            Amber_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireIO::Amber::what

            typedef char const * ( ::SireIO::Amber::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::Amber::what );

            Amber_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireIO::Amber::writeCrd

            typedef void ( ::SireIO::Amber::*writeCrd_function_type)( ::SireMol::MoleculeGroup const &,::SireVol::Space const &,::QString const &,::SireBase::PropertyMap const & ) const;
            writeCrd_function_type writeCrd_function_value( &::SireIO::Amber::writeCrd );

            Amber_exposer.def(
                "writeCrd"
                , writeCrd_function_value
                , ( bp::arg("mols"), bp::arg("space"), bp::arg("crdfile"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );

        }
        Amber_exposer.staticmethod( "typeName" );
        Amber_exposer.def( "__copy__", &__copy__);
        Amber_exposer.def( "__deepcopy__", &__copy__);
        Amber_exposer.def( "clone", &__copy__);
        Amber_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::Amber >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Amber_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::Amber >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Amber_exposer.def_pickle(sire_pickle_suite< ::SireIO::Amber >());
        Amber_exposer.def( "__str__", &pvt_get_name);
        Amber_exposer.def( "__repr__", &pvt_get_name);
    }

}
