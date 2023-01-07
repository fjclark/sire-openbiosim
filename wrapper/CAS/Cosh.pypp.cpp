// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Cosh.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "complexvalues.h"

#include "exp.h"

#include "expression.h"

#include "hyperbolicfuncs.h"

#include "identities.h"

#include "trigfuncs.h"

#include "hyperbolicfuncs.h"

SireCAS::Cosh __copy__(const SireCAS::Cosh &other){ return SireCAS::Cosh(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_Cosh_class(){

    { //::SireCAS::Cosh
        typedef bp::class_< SireCAS::Cosh, bp::bases< SireCAS::SingleFunc, SireCAS::ExBase > > Cosh_exposer_t;
        Cosh_exposer_t Cosh_exposer = Cosh_exposer_t( "Cosh", "Hyperbolic cosine", bp::init< >("Null constructor") );
        bp::scope Cosh_scope( Cosh_exposer );
        Cosh_exposer.def( bp::init< SireCAS::Expression const & >(( bp::arg("ex") ), "Construct cos(expression)") );
        Cosh_exposer.def( bp::init< SireCAS::Cosh const & >(( bp::arg("other") ), "Create cos(cos(expression))") );
        { //::SireCAS::Cosh::evaluate

            typedef double ( ::SireCAS::Cosh::*evaluate_function_type)( ::SireCAS::Values const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Cosh::evaluate );

            Cosh_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Evaluate this function" );

        }
        { //::SireCAS::Cosh::evaluate

            typedef ::SireMaths::Complex ( ::SireCAS::Cosh::*evaluate_function_type)( ::SireCAS::ComplexValues const & ) const;
            evaluate_function_type evaluate_function_value( &::SireCAS::Cosh::evaluate );

            Cosh_exposer.def(
                "evaluate"
                , evaluate_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "Complex evaluation" );

        }
        Cosh_exposer.def( bp::self == bp::other< SireCAS::ExBase >() );
        { //::SireCAS::Cosh::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireCAS::Cosh::typeName );

            Cosh_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireCAS::Cosh::what

            typedef char const * ( ::SireCAS::Cosh::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireCAS::Cosh::what );

            Cosh_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Cosh_exposer.staticmethod( "typeName" );
        Cosh_exposer.def( "__copy__", &__copy__);
        Cosh_exposer.def( "__deepcopy__", &__copy__);
        Cosh_exposer.def( "clone", &__copy__);
        Cosh_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireCAS::Cosh >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Cosh_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireCAS::Cosh >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Cosh_exposer.def_pickle(sire_pickle_suite< ::SireCAS::Cosh >());
        Cosh_exposer.def( "__str__", &__str__< ::SireCAS::Cosh > );
        Cosh_exposer.def( "__repr__", &__str__< ::SireCAS::Cosh > );
        Cosh_exposer.def( "__hash__", &::SireCAS::Cosh::hash );
    }

}
