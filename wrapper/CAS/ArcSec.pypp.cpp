// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ArcSec.pypp.hpp"

namespace bp = boost::python;

#include "SireMaths/errors.h"

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "identities.h"

#include "invtrigfuncs.h"

#include "trigfuncs.h"

#include "invtrigfuncs.h"

SireCAS::ArcSec __copy__(const SireCAS::ArcSec &other){ return SireCAS::ArcSec(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ArcSec_class(){

    { //::SireCAS::ArcSec
        typedef bp::class_< SireCAS::ArcSec, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > ArcSec_exposer_t;
        ArcSec_exposer_t ArcSec_exposer = ArcSec_exposer_t( "ArcSec", "Inverse-secant", bp::init< >("Null constructor") );
        bp::scope ArcSec_scope( ArcSec_exposer );
        ArcSec_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") ), "Construct cos(expression)") );
        ArcSec_exposer.def( bp::init< SireCAS::ArcSec const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireCAS::ArcSec::evaluate

            typedef double ( ::SireCAS::ArcSec::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcSec::evaluate );

            ArcSec_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this function" );

        }
        { //::SireCAS::ArcSec::evaluate

            typedef ::SireMaths::Complex ( ::SireCAS::ArcSec::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::ArcSec::evaluate );

            ArcSec_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Complex evaluation" );

        }
        ArcSec_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::ArcSec::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::ArcSec::typeName );

            ArcSec_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCAS::ArcSec::what

            typedef char const * ( ::SireCAS::ArcSec::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::ArcSec::what );

            ArcSec_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ArcSec_exposer.staticmethod( "typeName" );
        ArcSec_exposer.def( "__copy__", &__copy__);
        ArcSec_exposer.def( "__deepcopy__", &__copy__);
        ArcSec_exposer.def( "clone", &__copy__);
        ArcSec_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::ArcSec >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcSec_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::ArcSec >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ArcSec_exposer.def_pickle(sire_pickle_suite< ::SireCAS::ArcSec >());
        ArcSec_exposer.def( "__str__", &__str__< ::SireCAS::ArcSec > );
        ArcSec_exposer.def( "__repr__", &__str__< ::SireCAS::ArcSec > );
        ArcSec_exposer.def( "__hash__", &::SireCAS::ArcSec::hash );
    }

}
