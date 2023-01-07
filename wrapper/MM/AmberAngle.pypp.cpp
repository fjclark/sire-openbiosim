// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "AmberAngle.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/errors.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireCAS/expression.h"

#include "SireCAS/sum.h"

#include "SireCAS/symbol.h"

#include "SireCAS/trigfuncs.h"

#include "SireCAS/values.h"

#include "SireError/errors.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/gromacsparams.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/angleid.h"

#include "SireMol/atomidx.h"

#include "SireMol/bondid.h"

#include "SireMol/connectivity.h"

#include "SireMol/dihedralid.h"

#include "SireMol/improperid.h"

#include "SireMol/molecule.h"

#include "SireMol/partialmolecule.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireUnits/units.h"

#include "amberparams.h"

#include <QDebug>

#include "amberparams.h"

SireMM::AmberAngle __copy__(const SireMM::AmberAngle &other){ return SireMM::AmberAngle(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_AmberAngle_class(){

    { //::SireMM::AmberAngle
        typedef bp::class_< SireMM::AmberAngle > AmberAngle_exposer_t;
        AmberAngle_exposer_t AmberAngle_exposer = AmberAngle_exposer_t( "AmberAngle", "This simple class holds Amber parameters for an angle", bp::init< bp::optional< double, double > >(( bp::arg("k")=0, bp::arg("theta0")=0 ), "") );
        bp::scope AmberAngle_scope( AmberAngle_exposer );
        AmberAngle_exposer.def( bp::init< SireCAS::Expression const &, SireCAS::Symbol const & >(( bp::arg("eqn"), bp::arg("THETA") ), "") );
        AmberAngle_exposer.def( bp::init< SireMM::AmberAngle const & >(( bp::arg("other") ), "") );
        { //::SireMM::AmberAngle::energy

            typedef double ( ::SireMM::AmberAngle::*energy_function_type)( double ) const;
            energy_function_type energy_function_value( &::SireMM::AmberAngle::energy );

            AmberAngle_exposer.def(
                "energy"
                , energy_function_value
                , ( bp::arg("theta") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::AmberAngle::hash

            typedef ::uint ( ::SireMM::AmberAngle::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireMM::AmberAngle::hash );

            AmberAngle_exposer.def(
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::AmberAngle::k

            typedef double ( ::SireMM::AmberAngle::*k_function_type)(  ) const;
            k_function_type k_function_value( &::SireMM::AmberAngle::k );

            AmberAngle_exposer.def(
                "k"
                , k_function_value
                , bp::release_gil_policy()
                , "" );

        }
        AmberAngle_exposer.def( bp::self != bp::self );
        AmberAngle_exposer.def( bp::self < bp::self );
        AmberAngle_exposer.def( bp::self <= bp::self );
        { //::SireMM::AmberAngle::operator=

            typedef ::SireMM::AmberAngle & ( ::SireMM::AmberAngle::*assign_function_type)( ::SireMM::AmberAngle const & ) ;
            assign_function_type assign_function_value( &::SireMM::AmberAngle::operator= );

            AmberAngle_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        AmberAngle_exposer.def( bp::self == bp::self );
        AmberAngle_exposer.def( bp::self > bp::self );
        AmberAngle_exposer.def( bp::self >= bp::self );
        { //::SireMM::AmberAngle::operator[]

            typedef double ( ::SireMM::AmberAngle::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMM::AmberAngle::operator[] );

            AmberAngle_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );

        }
        { //::SireMM::AmberAngle::theta0

            typedef double ( ::SireMM::AmberAngle::*theta0_function_type)(  ) const;
            theta0_function_type theta0_function_value( &::SireMM::AmberAngle::theta0 );

            AmberAngle_exposer.def(
                "theta0"
                , theta0_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::AmberAngle::toExpression

            typedef ::SireCAS::Expression ( ::SireMM::AmberAngle::*toExpression_function_type)( ::SireCAS::Symbol const & ) const;
            toExpression_function_type toExpression_function_value( &::SireMM::AmberAngle::toExpression );

            AmberAngle_exposer.def(
                "toExpression"
                , toExpression_function_value
                , ( bp::arg("THETA") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::AmberAngle::toString

            typedef ::QString ( ::SireMM::AmberAngle::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::AmberAngle::toString );

            AmberAngle_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::AmberAngle::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::AmberAngle::typeName );

            AmberAngle_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMM::AmberAngle::what

            typedef char const * ( ::SireMM::AmberAngle::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireMM::AmberAngle::what );

            AmberAngle_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        AmberAngle_exposer.staticmethod( "typeName" );
        AmberAngle_exposer.def( "__copy__", &__copy__);
        AmberAngle_exposer.def( "__deepcopy__", &__copy__);
        AmberAngle_exposer.def( "clone", &__copy__);
        AmberAngle_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::AmberAngle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberAngle_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::AmberAngle >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AmberAngle_exposer.def_pickle(sire_pickle_suite< ::SireMM::AmberAngle >());
        AmberAngle_exposer.def( "__str__", &__str__< ::SireMM::AmberAngle > );
        AmberAngle_exposer.def( "__repr__", &__str__< ::SireMM::AmberAngle > );
        AmberAngle_exposer.def( "__hash__", &::SireMM::AmberAngle::hash );
    }

}
