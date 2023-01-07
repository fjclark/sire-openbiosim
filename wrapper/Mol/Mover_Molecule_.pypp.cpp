// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Mover_Molecule_.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "atom.h"

#include "chain.h"

#include "core.h"

#include "cutgroup.h"

#include "evaluator.h"

#include "molecule.h"

#include "moleculeinfo.h"

#include "moleditor.h"

#include "molviewproperty.h"

#include "mover.hpp"

#include "residue.h"

#include "segment.h"

#include "selector.hpp"

#include "selectormol.h"

#include <QDebug>

#include "molecule.h"

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

SireMol::Mover<SireMol::Molecule> __copy__(const SireMol::Mover<SireMol::Molecule> &other){ return SireMol::Mover<SireMol::Molecule>(other); }

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_Mover_Molecule__class(){

    { //::SireMol::Mover< SireMol::Molecule >
        typedef bp::class_< SireMol::Mover< SireMol::Molecule >, bp::bases< SireMol::MoverBase, SireMol::Molecule, SireMol::MoleculeView, SireBase::Property > > Mover_Molecule__exposer_t;
        Mover_Molecule__exposer_t Mover_Molecule__exposer = Mover_Molecule__exposer_t( "Mover_Molecule_", "", bp::init< >("") );
        bp::scope Mover_Molecule__scope( Mover_Molecule__exposer );
        Mover_Molecule__exposer.def( bp::init< SireMol::Molecule const & >(( bp::arg("view") ), "") );
        Mover_Molecule__exposer.def( bp::init< SireMol::Molecule const &, SireMol::AtomSelection const & >(( bp::arg("view"), bp::arg("movable_atoms") ), "") );
        Mover_Molecule__exposer.def( bp::init< SireMol::Mover< SireMol::Molecule > const & >(( bp::arg("other") ), "") );
        { //::SireMol::Mover< SireMol::Molecule >::align

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::Molecule >::align );

            Mover_Molecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::align

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::Molecule >::align );

            Mover_Molecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::align

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::Molecule >::align );

            Mover_Molecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::align

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*align_function_type)( ::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const &,::SireBase::PropertyMap const & ) ;
            align_function_type align_function_value( &::SireMol::Mover< SireMol::Molecule >::align );

            Mover_Molecule__exposer.def(
                "align"
                , align_function_value
                , ( bp::arg("other"), bp::arg("matcher"), bp::arg("map0"), bp::arg("map1") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::change

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::Molecule >::change );

            Mover_Molecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::change

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*change_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::Molecule >::change );

            Mover_Molecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("angle"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::change

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*change_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::Molecule >::change );

            Mover_Molecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("dihedral"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::change

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*change_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::Molecule >::change );

            Mover_Molecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("bond"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::change

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*change_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            change_function_type change_function_value( &::SireMol::Mover< SireMol::Molecule >::change );

            Mover_Molecule__exposer.def(
                "change"
                , change_function_value
                , ( bp::arg("improper"), bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::changeFrame

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*changeFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireMol::Mover< SireMol::Molecule >::changeFrame );

            Mover_Molecule__exposer.def(
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("from_frame"), bp::arg("to_frame"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::commit

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Molecule ( ::SireMol::Mover< SireMol::Molecule >::*commit_function_type)(  ) const;
            commit_function_type commit_function_value( &::SireMol::Mover< SireMol::Molecule >::commit );

            Mover_Molecule__exposer.def(
                "commit"
                , commit_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::mapInto

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*mapInto_function_type)( ::SireMaths::AxisSet const &,::SireBase::PropertyMap const & ) ;
            mapInto_function_type mapInto_function_value( &::SireMol::Mover< SireMol::Molecule >::mapInto );

            Mover_Molecule__exposer.def(
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("axes"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::operator=

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*assign_function_type)( ::SireMol::Mover< SireMol::Molecule > const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMol::Molecule >::operator= );

            Mover_Molecule__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::operator=

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*assign_function_type)( ::SireMol::Molecule const & ) ;
            assign_function_type assign_function_value( &::SireMol::Mover< SireMol::Molecule >::operator= );

            Mover_Molecule__exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::rotate

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMol::Molecule >::rotate );

            Mover_Molecule__exposer.def(
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::rotate

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::Mover< SireMol::Molecule >::rotate );

            Mover_Molecule__exposer.def(
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("point"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::set

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*set_function_type)( ::SireMol::BondID const &,::SireUnits::Dimension::Length,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::Molecule >::set );

            Mover_Molecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("bond"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::set

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*set_function_type)( ::SireMol::AngleID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::Molecule >::set );

            Mover_Molecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("angle"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::set

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*set_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::Molecule >::set );

            Mover_Molecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::set

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*set_function_type)( ::SireMol::ImproperID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            set_function_type set_function_value( &::SireMol::Mover< SireMol::Molecule >::set );

            Mover_Molecule__exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("improper"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::setAll

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*setAll_function_type)( ::SireMol::DihedralID const &,::SireUnits::Dimension::Angle,::SireBase::PropertyMap const & ) ;
            setAll_function_type setAll_function_value( &::SireMol::Mover< SireMol::Molecule >::setAll );

            Mover_Molecule__exposer.def(
                "setAll"
                , setAll_function_value
                , ( bp::arg("dihedral"), bp::arg("value"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::toString

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::QString ( ::SireMol::Mover< SireMol::Molecule >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::Mover< SireMol::Molecule >::toString );

            Mover_Molecule__exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::transform

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*transform_function_type)( ::SireMaths::Transform const &,::SireBase::PropertyMap const & ) ;
            transform_function_type transform_function_value( &::SireMol::Mover< SireMol::Molecule >::transform );

            Mover_Molecule__exposer.def(
                "transform"
                , transform_function_value
                , ( bp::arg("transform"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::translate

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef ::SireMol::Mover< SireMol::Molecule > & ( ::SireMol::Mover< SireMol::Molecule >::*translate_function_type)( ::SireMaths::Vector const &,::SireBase::PropertyMap const & ) ;
            translate_function_type translate_function_value( &::SireMol::Mover< SireMol::Molecule >::translate );

            Mover_Molecule__exposer.def(
                "translate"
                , translate_function_value
                , ( bp::arg("delta"), bp::arg("map")=SireBase::PropertyMap() )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::Mover< SireMol::Molecule >::typeName

            typedef SireMol::Mover< SireMol::Molecule > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::Mover< SireMol::Molecule >::typeName );

            Mover_Molecule__exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        Mover_Molecule__exposer.staticmethod( "typeName" );
        Mover_Molecule__exposer.def( "__copy__", &__copy__);
        Mover_Molecule__exposer.def( "__deepcopy__", &__copy__);
        Mover_Molecule__exposer.def( "clone", &__copy__);
        Mover_Molecule__exposer.def( "__str__", &__str__< ::SireMol::Mover<SireMol::Molecule> > );
        Mover_Molecule__exposer.def( "__repr__", &__str__< ::SireMol::Mover<SireMol::Molecule> > );
        Mover_Molecule__exposer.def( "__len__", &__len_size< ::SireMol::Mover<SireMol::Molecule> > );
    }

}
