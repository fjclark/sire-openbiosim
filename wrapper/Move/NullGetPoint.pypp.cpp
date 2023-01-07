// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "NullGetPoint.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/vector.h"

#include "SireMol/atom.h"

#include "SireMol/atomcoords.h"

#include "SireMol/evaluator.h"

#include "SireMol/moleculeview.h"

#include "SireMol/mover.hpp"

#include "SireMol/selector.hpp"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "getpoint.h"

#include <QDebug>

#include "getpoint.h"

SireMove::NullGetPoint __copy__(const SireMove::NullGetPoint &other){ return SireMove::NullGetPoint(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_NullGetPoint_class(){

    { //::SireMove::NullGetPoint
        typedef bp::class_< SireMove::NullGetPoint, bp::bases< SireMove::GetPoint, SireBase::Property > > NullGetPoint_exposer_t;
        NullGetPoint_exposer_t NullGetPoint_exposer = NullGetPoint_exposer_t( "NullGetPoint", "This is the null GetPoint function - this just returns\nthe point (0,0,0) for all passed molecule views\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope NullGetPoint_scope( NullGetPoint_exposer );
        NullGetPoint_exposer.def( bp::init< SireMove::NullGetPoint const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMove::NullGetPoint::getPoint

            typedef ::SireMaths::Vector ( ::SireMove::NullGetPoint::*getPoint_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) const;
            getPoint_function_type getPoint_function_value( &::SireMove::NullGetPoint::getPoint );

            NullGetPoint_exposer.def(
                "getPoint"
                , getPoint_function_value
                , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
                , "" );

        }
        NullGetPoint_exposer.def( bp::self != bp::self );
        { //::SireMove::NullGetPoint::operator=

            typedef ::SireMove::NullGetPoint & ( ::SireMove::NullGetPoint::*assign_function_type)( ::SireMove::NullGetPoint const & ) ;
            assign_function_type assign_function_value( &::SireMove::NullGetPoint::operator= );

            NullGetPoint_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        NullGetPoint_exposer.def( bp::self == bp::self );
        { //::SireMove::NullGetPoint::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMove::NullGetPoint::typeName );

            NullGetPoint_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        NullGetPoint_exposer.staticmethod( "typeName" );
        NullGetPoint_exposer.def( "__copy__", &__copy__);
        NullGetPoint_exposer.def( "__deepcopy__", &__copy__);
        NullGetPoint_exposer.def( "clone", &__copy__);
        NullGetPoint_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMove::NullGetPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullGetPoint_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMove::NullGetPoint >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        NullGetPoint_exposer.def_pickle(sire_pickle_suite< ::SireMove::NullGetPoint >());
        NullGetPoint_exposer.def( "__str__", &__str__< ::SireMove::NullGetPoint > );
        NullGetPoint_exposer.def( "__repr__", &__str__< ::SireMove::NullGetPoint > );
    }

}
