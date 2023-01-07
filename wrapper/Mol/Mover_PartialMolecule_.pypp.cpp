// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Mover_PartialMolecule_.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMol/errors.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "chain.h"

#include "cutgroup.h"

#include "editor.hpp"

#include "evaluator.h"

#include "molecule.h"

#include "mover.hpp"

#include "partialmolecule.h"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "tostring.h"

#include <QDebug>

#include "partialmolecule.h"

#include "SireMaths/align.h"

#include "SireMaths/axisset.h"

#include "SireMaths/matrix.h"

#include "SireMaths/quaternion.h"

#include "SireMaths/rotate.h"

#include "SireMaths/vectorproperty.h"

#include "SireMol/errors.h"

#include "SireUnits/units.h"

#include "SireVol/coordgroup.h"

#include "SireVol/space.h"

#include "angleid.h"

#include "atomcoords.h"

#include "atommatcher.h"

#include "atommatchers.h"

#include "bondid.h"

#include "connectivity.h"

#include "dihedralid.h"

#include "improperid.h"

#include "mover.h"

#include "tostring.h"

#include "weightfunction.h"

#include "mover.h"

SireMol::Mover<SireMol::PartialMolecule> __copy__(const SireMol::Mover<SireMol::PartialMolecule> &other){ return SireMol::Mover<SireMol::PartialMolecule>(other); }

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Mover_PartialMolecule__class(){

    { //::SireMol::Mover< SireMol::PartialMolecule >
        typedef bp::class_< SireMol::Mover< SireMol::PartialMolecule >, bp::bases< SireMol::MoverBase, SireMol::PartialMolecule, SireMol::MoleculeView, SireBase::Property > > Mover_PartialMolecule__exposer_t;
        Mover_PartialMolecule__exposer_t Mover_PartialMolecule__exposer = Mover_PartialMolecule__exposer_t( "Mover_PartialMolecule_", "", bp::init< >("") );
        bp::scope Mover_PartialMolecule__scope( Mover_PartialMolecule__exposer );
        Mover_PartialMolecule__exposer.def( bp::init< SireMol::PartialMolecule const & >(( bp::arg("view") ), "") );
        Mover_PartialMolecule__exposer.def( bp::init< SireMol::PartialMolecule const &, SireMol::AtomSelection const & >(( bp::arg("view"), bp::arg("movable_atoms") ), "") );
        Mover_PartialMolecule__exposer.def( bp::init< SireMol::Mover< SireMol::PartialMolecule > const & >(( bp::arg("other") ), "") );
        { //::SireMol::Mover< SireMol::PartialMolecule >::align

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::align );

            Mover_PartialMolecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::align

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::align );

            Mover_PartialMolecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::align

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::align );

            Mover_PartialMolecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::align

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::align );

            Mover_PartialMolecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::change

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::change );

            Mover_PartialMolecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::change

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*change_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::change );

            Mover_PartialMolecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("angle"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::change

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*change_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::change );

            Mover_PartialMolecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("dihedral"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::change

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::change );

            Mover_PartialMolecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::change

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*change_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::change );

            Mover_PartialMolecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("improper"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::changeFrame

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*changeFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::changeFrame );

            Mover_PartialMolecule__exposer.def(
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("from_frame"), bp::arg("to_frame"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::commit

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::PartialMolecule ( ::SireMol::Mover< SireMol::PartialMolecule >::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::commit );

            Mover_PartialMolecule__exposer.def(
                "commit"
                , commit_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::mapInto

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*mapInto_function_type)( ::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            mapInto_function_type mapInto_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::mapInto );

            Mover_PartialMolecule__exposer.def(
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("axes"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::operator=

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*assign_function_type)( ::SireMol::Mover< SireMol::PartialMolecule > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::operator= );

            Mover_PartialMolecule__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::operator=

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*assign_function_type)( ::SireMol::PartialMolecule const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::operator= );

            Mover_PartialMolecule__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::rotate

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::rotate );

            Mover_PartialMolecule__exposer.def(
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::rotate

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::rotate );

            Mover_PartialMolecule__exposer.def(
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::set

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*set_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::set );

            Mover_PartialMolecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("bond"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::set

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*set_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::set );

            Mover_PartialMolecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("angle"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::set

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*set_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::set );

            Mover_PartialMolecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::set

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*set_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::set );

            Mover_PartialMolecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("improper"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::setAll

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*setAll_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            setAll_function_type setAll_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::setAll );

            Mover_PartialMolecule__exposer.def(
                "setAll"
                , setAll_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::toString

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::QString ( ::SireMol::Mover< SireMol::PartialMolecule >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::toString );

            Mover_PartialMolecule__exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::transform

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*transform_function_type)( ::SireMaths::Transform const &,::SireBase::PropertyMap const & ) ;
            transform_function_type transform_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::transform );

            Mover_PartialMolecule__exposer.def(
                "transform"
                , transform_function_value
                , ( bp::arg("transform"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::translate

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::PartialMolecule > & ( ::SireMol::Mover< SireMol::PartialMolecule >::*translate_function_type)( ::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            translate_function_type translate_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::translate );

            Mover_PartialMolecule__exposer.def(
                "translate"
                , translate_function_value
                , ( bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::PartialMolecule >::typeName

            typedef SireMol::Mover< SireMol::PartialMolecule > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Mover< SireMol::PartialMolecule >::typeName );

            Mover_PartialMolecule__exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Mover_PartialMolecule__exposer.staticmethod( "typeName" );
        Mover_PartialMolecule__exposer.def( "__copy__", &__copy__);
        Mover_PartialMolecule__exposer.def( "__deepcopy__", &__copy__);
        Mover_PartialMolecule__exposer.def( "clone", &__copy__);
        Mover_PartialMolecule__exposer.def( "__str__", &__str__< ::SireMol::Mover<SireMol::PartialMolecule> > );
        Mover_PartialMolecule__exposer.def( "__repr__", &__str__< ::SireMol::Mover<SireMol::PartialMolecule> > );
        Mover_PartialMolecule__exposer.def( "__len__", &__len_size< ::SireMol::Mover<SireMol::PartialMolecule> > );
    }

}
