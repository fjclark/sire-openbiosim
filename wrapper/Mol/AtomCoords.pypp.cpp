// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "AtomCoords.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/console.h"

#include "SireBase/quickcopy.hpp"

#include "SireBase/slice.h"

#include "SireMaths/align.h"

#include "SireMaths/vectorproperty.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/space.h"

#include "atomcoords.h"

#include "atomcoords.h"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

#include "SireMol/atomidxmapping.h"

#include "SireMaths/quaternion.h"

#include "SireMaths/matrix.h"

#include "SireVol/aabox.h"

#include "SireMaths/axisset.h"

SireMol::AtomProperty<SireMaths::Vector> __copy__(const SireMol::AtomProperty<SireMaths::Vector> &other){ return SireMol::AtomProperty<SireMaths::Vector>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_AtomCoords_class(){

    { //::SireMol::AtomProperty< SireMaths::Vector >
        typedef bp::class_< SireMol::AtomProperty< SireMaths::Vector >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomCoords_exposer_t;
        AtomCoords_exposer_t AtomCoords_exposer = AtomCoords_exposer_t( "AtomCoords", "", bp::init< >("") );
        bp::scope AtomCoords_scope( AtomCoords_exposer );
        AtomCoords_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomCoords_exposer.def( bp::init< SireVol::CoordGroup const & >(( bp::arg("cgroup") ), "") );
        AtomCoords_exposer.def( bp::init< SireVol::CoordGroupArray const & >(( bp::arg("cgroups") ), "") );
        AtomCoords_exposer.def( bp::init< SireMol::AtomProperty< SireMaths::Vector > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireMaths::Vector >::array
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireVol::CoordGroupArray const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::array );
            
            AtomCoords_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::assertCanConvert );
            
            AtomCoords_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::assignFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::assignFrom );
            
            AtomCoords_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireVol::CoordGroup const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::at );
            
            AtomCoords_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::at );
            
            AtomCoords_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::at
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::at );
            
            AtomCoords_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::canConvert
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::canConvert );
            
            AtomCoords_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::changeFrame
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*changeFrame_function_type)( ::SireMaths::AxisSet const &,::SireMaths::AxisSet const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::changeFrame );
            
            AtomCoords_exposer.def( 
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("from_frame"), bp::arg("to_frame") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::changeFrame
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*changeFrame_function_type)( ::SireMol::CGIdx,::SireMaths::AxisSet const &,::SireMaths::AxisSet const & ) ;
            changeFrame_function_type changeFrame_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::changeFrame );
            
            AtomCoords_exposer.def( 
                "changeFrame"
                , changeFrame_function_value
                , ( bp::arg("cgidx"), bp::arg("from_frame"), bp::arg("to_frame") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::copyFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*copyFrom_function_type)( ::QVector< SireMaths::Vector > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::copyFrom );
            
            AtomCoords_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::copyFrom
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*copyFrom_function_type)( ::QVector< SireMaths::Vector > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::copyFrom );
            
            AtomCoords_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::count
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::count );
            
            AtomCoords_exposer.def( 
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::divide
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::divide );
            
            AtomCoords_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::divideByResidue
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::divideByResidue );
            
            AtomCoords_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::fromVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::fromVariant );
            
            AtomCoords_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireVol::CoordGroup const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::get );
            
            AtomCoords_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::get );
            
            AtomCoords_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::get
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::get );
            
            AtomCoords_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::getAsProperty
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector >::*getAsProperty_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::getAsProperty );
            
            AtomCoords_exposer.def( 
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::getAsVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QVariant ( ::SireMol::AtomProperty< SireMaths::Vector >::*getAsVariant_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::getAsVariant );
            
            AtomCoords_exposer.def( 
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::isCompatibleWith );
            
            AtomCoords_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::isEmpty
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMaths::Vector >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::isEmpty );
            
            AtomCoords_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::mapInto
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*mapInto_function_type)( ::SireMaths::AxisSet const & ) ;
            mapInto_function_type mapInto_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::mapInto );
            
            AtomCoords_exposer.def( 
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("axes") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::mapInto
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*mapInto_function_type)( ::SireMol::CGIdx,::SireMaths::AxisSet const & ) ;
            mapInto_function_type mapInto_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::mapInto );
            
            AtomCoords_exposer.def( 
                "mapInto"
                , mapInto_function_value
                , ( bp::arg("cgidx"), bp::arg("axes") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::merge
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMaths::Vector >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::merge );
            
            AtomCoords_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::merge
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireBase::PropertyList ( ::SireMol::AtomProperty< SireMaths::Vector >::*merge_function_type)( ::SireMol::MolViewProperty const &,::SireMol::AtomIdxMapping const &,::QString const &,::SireBase::PropertyMap const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::merge );
            
            AtomCoords_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("other"), bp::arg("mapping"), bp::arg("ghost")=::QString( ), bp::arg("map")=SireBase::PropertyMap() )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::nAtoms
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::nAtoms );
            
            AtomCoords_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::nAtoms
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::nAtoms );
            
            AtomCoords_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::nCutGroups
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::nCutGroups );
            
            AtomCoords_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomCoords_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireMaths::Vector >::operator=
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector > & ( ::SireMol::AtomProperty< SireMaths::Vector >::*assign_function_type)( ::SireMol::AtomProperty< SireMaths::Vector > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::operator= );
            
            AtomCoords_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomCoords_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireMaths::Vector >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireVol::CoordGroup const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector >::operator[] );
            
            AtomCoords_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector >::operator[] );
            
            AtomCoords_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMaths::Vector const & ( ::SireMol::AtomProperty< SireMaths::Vector >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector >::operator[] );
            
            AtomCoords_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QList< SireMaths::Vector > ( ::SireMol::AtomProperty< SireMaths::Vector >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector >::operator[] );
            
            AtomCoords_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::operator[]
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QList< SireMaths::Vector > ( ::SireMol::AtomProperty< SireMaths::Vector >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMaths::Vector >::operator[] );
            
            AtomCoords_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::rotate
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*rotate_function_type)( ::SireMaths::Quaternion const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::rotate );
            
            AtomCoords_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("quat"), bp::arg("point") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::rotate
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*rotate_function_type)( ::SireMaths::Matrix const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::rotate );
            
            AtomCoords_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("rotmat"), bp::arg("point") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::rotate
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*rotate_function_type)( ::SireMol::CGIdx,::SireMaths::Quaternion const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::rotate );
            
            AtomCoords_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("cgidx"), bp::arg("quat"), bp::arg("point") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::rotate
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*rotate_function_type)( ::SireMol::CGIdx,::SireMaths::Matrix const &,::SireMaths::Vector const & ) ;
            rotate_function_type rotate_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::rotate );
            
            AtomCoords_exposer.def( 
                "rotate"
                , rotate_function_value
                , ( bp::arg("cgidx"), bp::arg("rotmat"), bp::arg("point") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector > & ( ::SireMol::AtomProperty< SireMaths::Vector >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMaths::Vector const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::set );
            
            AtomCoords_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector > & ( ::SireMol::AtomProperty< SireMaths::Vector >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireMaths::Vector > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::set );
            
            AtomCoords_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector > & ( ::SireMol::AtomProperty< SireMaths::Vector >::*set_function_type)( ::SireMol::CGIdx,::SireVol::CoordGroup const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::set );
            
            AtomCoords_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("cgroup") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::set
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMaths::Vector > & ( ::SireMol::AtomProperty< SireMaths::Vector >::*set_function_type)( int,::SireMaths::Vector const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::set );
            
            AtomCoords_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("i"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::size
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMaths::Vector >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::size );
            
            AtomCoords_exposer.def( 
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::toList
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QList< SireMaths::Vector > ( ::SireMol::AtomProperty< SireMaths::Vector >::*toList_function_type)(  ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::toList );
            
            AtomCoords_exposer.def( 
                "toList"
                , toList_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::toList
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QList< SireMaths::Vector > ( ::SireMol::AtomProperty< SireMaths::Vector >::*toList_function_type)( ::SireMol::AtomSelection const & ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::toList );
            
            AtomCoords_exposer.def( 
                "toList"
                , toList_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::toString
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireMaths::Vector >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::toString );
            
            AtomCoords_exposer.def( 
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::toVariant
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireMaths::Vector >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::toVariant );
            
            AtomCoords_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::toVector
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QVector< SireMaths::Vector > ( ::SireMol::AtomProperty< SireMaths::Vector >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::toVector );
            
            AtomCoords_exposer.def( 
                "toVector"
                , toVector_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::toVector
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef ::QVector< SireMaths::Vector > ( ::SireMol::AtomProperty< SireMaths::Vector >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::toVector );
            
            AtomCoords_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::transform
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*transform_function_type)( ::SireMaths::Transform const & ) ;
            transform_function_type transform_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::transform );
            
            AtomCoords_exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("t") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::transform
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*transform_function_type)( ::SireMol::CGIdx,::SireMaths::Transform const & ) ;
            transform_function_type transform_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::transform );
            
            AtomCoords_exposer.def( 
                "transform"
                , transform_function_value
                , ( bp::arg("cgidx"), bp::arg("t") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::translate
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*translate_function_type)( ::SireMaths::Vector const & ) ;
            translate_function_type translate_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::translate );
            
            AtomCoords_exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("delta") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::translate
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMaths::Vector >::*translate_function_type)( ::SireMol::CGIdx,::SireMaths::Vector const & ) ;
            translate_function_type translate_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::translate );
            
            AtomCoords_exposer.def( 
                "translate"
                , translate_function_value
                , ( bp::arg("cgidx"), bp::arg("delta") )
                , bp::release_gil_policy()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireMaths::Vector >::typeName
        
            typedef SireMol::AtomProperty< SireMaths::Vector > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireMaths::Vector >::typeName );
            
            AtomCoords_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        AtomCoords_exposer.staticmethod( "fromVariant" );
        AtomCoords_exposer.staticmethod( "typeName" );
        AtomCoords_exposer.def( "__copy__", &__copy__);
        AtomCoords_exposer.def( "__deepcopy__", &__copy__);
        AtomCoords_exposer.def( "clone", &__copy__);
        AtomCoords_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireMaths::Vector> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomCoords_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireMaths::Vector> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomCoords_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireMaths::Vector> >());
        AtomCoords_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireMaths::Vector> > );
        AtomCoords_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireMaths::Vector> > );
        AtomCoords_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireMaths::Vector> > );
    }

}
