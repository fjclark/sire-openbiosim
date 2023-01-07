// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "MatchAll_SegID_.pypp.hpp"

namespace bp = boost::python;

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "atom.h"

#include "chain.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "groupatomids.h"

#include "groupgroupids.h"

#include "moleculegroup.h"

#include "moleculegroups.h"

#include "molecules.h"

#include "molinfo.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segid.h"

#include "segidentifier.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include "segid.h"

SireID::MatchAll<SireMol::SegID> __copy__(const SireID::MatchAll<SireMol::SegID> &other){ return SireID::MatchAll<SireMol::SegID>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_MatchAll_SegID__class(){

    { //::SireID::MatchAll< SireMol::SegID >
        typedef bp::class_< SireID::MatchAll< SireMol::SegID >, bp::bases< SireMol::SegID, SireID::ID > > MatchAll_SegID__exposer_t;
        MatchAll_SegID__exposer_t MatchAll_SegID__exposer = MatchAll_SegID__exposer_t( "MatchAll_SegID_", "", bp::init< >("") );
        bp::scope MatchAll_SegID__scope( MatchAll_SegID__exposer );
        MatchAll_SegID__exposer.def( bp::init< SireID::MatchAll< SireMol::SegID > const & >(( bp::arg("other") ), "") );
        { //::SireID::MatchAll< SireMol::SegID >::hash

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef ::uint ( ::SireID::MatchAll< SireMol::SegID >::*hash_function_type)(  ) const;
            hash_function_type hash_function_value( &::SireID::MatchAll< SireMol::SegID >::hash );

            MatchAll_SegID__exposer.def(
                "hash"
                , hash_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::MatchAll< SireMol::SegID >::isNull

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef bool ( ::SireID::MatchAll< SireMol::SegID >::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireID::MatchAll< SireMol::SegID >::isNull );

            MatchAll_SegID__exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::MatchAll< SireMol::SegID >::map

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef ::QList< SireMol::SegIdx > ( ::SireID::MatchAll< SireMol::SegID >::*map_function_type)( ::SireMol::SegID::SearchObject const & ) const;
            map_function_type map_function_value( &::SireID::MatchAll< SireMol::SegID >::map );

            MatchAll_SegID__exposer.def(
                "map"
                , map_function_value
                , ( bp::arg("obj") )
                , bp::release_gil_policy()
                , "" );

        }
        MatchAll_SegID__exposer.def( bp::self != bp::self );
        MatchAll_SegID__exposer.def( bp::self != bp::other< SireID::ID >() );
        { //::SireID::MatchAll< SireMol::SegID >::operator=

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef ::SireID::MatchAll< SireMol::SegID > & ( ::SireID::MatchAll< SireMol::SegID >::*assign_function_type)( ::SireID::MatchAll< SireMol::SegID > const & ) ;
            assign_function_type assign_function_value( &::SireID::MatchAll< SireMol::SegID >::operator= );

            MatchAll_SegID__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        MatchAll_SegID__exposer.def( bp::self == bp::self );
        MatchAll_SegID__exposer.def( bp::self == bp::other< SireID::ID >() );
        { //::SireID::MatchAll< SireMol::SegID >::toString

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef ::QString ( ::SireID::MatchAll< SireMol::SegID >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireID::MatchAll< SireMol::SegID >::toString );

            MatchAll_SegID__exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::MatchAll< SireMol::SegID >::typeName

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireID::MatchAll< SireMol::SegID >::typeName );

            MatchAll_SegID__exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireID::MatchAll< SireMol::SegID >::what

            typedef SireID::MatchAll< SireMol::SegID > exported_class_t;
            typedef char const * ( ::SireID::MatchAll< SireMol::SegID >::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireID::MatchAll< SireMol::SegID >::what );

            MatchAll_SegID__exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        MatchAll_SegID__exposer.staticmethod( "typeName" );
        MatchAll_SegID__exposer.def( "__copy__", &__copy__);
        MatchAll_SegID__exposer.def( "__deepcopy__", &__copy__);
        MatchAll_SegID__exposer.def( "clone", &__copy__);
        MatchAll_SegID__exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireID::MatchAll<SireMol::SegID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MatchAll_SegID__exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireID::MatchAll<SireMol::SegID> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        MatchAll_SegID__exposer.def_pickle(sire_pickle_suite< ::SireID::MatchAll<SireMol::SegID> >());
        MatchAll_SegID__exposer.def( "__str__", &__str__< ::SireID::MatchAll<SireMol::SegID> > );
        MatchAll_SegID__exposer.def( "__repr__", &__str__< ::SireID::MatchAll<SireMol::SegID> > );
        MatchAll_SegID__exposer.def( "__hash__", &::SireID::MatchAll<SireMol::SegID>::hash );
    }

}
