// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "CGProp.pypp.hpp"

namespace bp = boost::python;

#include "cgproperty.hpp"

#include "cgproperty.hpp"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_CGProp_class(){

    { //::SireMol::CGProp
        typedef bp::class_< SireMol::CGProp, bp::bases< SireMol::MolViewProperty, SireBase::Property >, boost::noncopyable > CGProp_exposer_t;
        CGProp_exposer_t CGProp_exposer = CGProp_exposer_t( "CGProp", "Small class used to provide a common base for all CGProperty types", bp::no_init );
        bp::scope CGProp_scope( CGProp_exposer );
        { //::SireMol::CGProp::assertCanConvert

            typedef void ( ::SireMol::CGProp::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::CGProp::assertCanConvert );

            CGProp_exposer.def(
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::CGProp::assignFrom

            typedef void ( ::SireMol::CGProp::*assignFrom_function_type)( ::SireMol::CGProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::CGProp::assignFrom );

            CGProp_exposer.def(
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::CGProp::canConvert

            typedef bool ( ::SireMol::CGProp::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::CGProp::canConvert );

            CGProp_exposer.def(
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::CGProp::getAsProperty

            typedef ::SireBase::PropertyPtr ( ::SireMol::CGProp::*getAsProperty_function_type)( ::SireMol::CGIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::CGProp::getAsProperty );

            CGProp_exposer.def(
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::CGProp::getAsVariant

            typedef ::QVariant ( ::SireMol::CGProp::*getAsVariant_function_type)( ::SireMol::CGIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::CGProp::getAsVariant );

            CGProp_exposer.def(
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::CGProp::toVariant

            typedef ::SireMol::CGProperty< QVariant > ( ::SireMol::CGProp::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::CGProp::toVariant );

            CGProp_exposer.def(
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );

        }
        CGProp_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::CGProp >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGProp_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::CGProp >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        CGProp_exposer.def_pickle(sire_pickle_suite< ::SireMol::CGProp >());
        CGProp_exposer.def( "__str__", &__str__< ::SireMol::CGProp > );
        CGProp_exposer.def( "__repr__", &__str__< ::SireMol::CGProp > );
    }

}
