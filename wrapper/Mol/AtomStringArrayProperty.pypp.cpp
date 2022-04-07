// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "AtomStringArrayProperty.pypp.hpp"

namespace bp = boost::python;

#include "atompropertylist.h"

#include "atompropertylist.h"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::AtomProperty<SireBase::StringArrayProperty> __copy__(const SireMol::AtomProperty<SireBase::StringArrayProperty> &other){ return SireMol::AtomProperty<SireBase::StringArrayProperty>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/len.hpp"

void register_AtomStringArrayProperty_class(){

    { //::SireMol::AtomProperty< SireBase::StringArrayProperty >
        typedef bp::class_< SireMol::AtomProperty< SireBase::StringArrayProperty >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomStringArrayProperty_exposer_t;
        AtomStringArrayProperty_exposer_t AtomStringArrayProperty_exposer = AtomStringArrayProperty_exposer_t( "AtomStringArrayProperty", "", bp::init< >("") );
        bp::scope AtomStringArrayProperty_scope( AtomStringArrayProperty_exposer );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfo const &, SireBase::StringArrayProperty const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::MoleculeView const &, SireBase::StringArrayProperty const & >(( bp::arg("molview"), bp::arg("default_value") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireBase::StringArrayProperty const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireBase::StringArrayProperty const & >(( bp::arg("value") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireBase::PackedArray2D< SireBase::StringArrayProperty > const & >(( bp::arg("values") ), "") );
        AtomStringArrayProperty_exposer.def( bp::init< SireMol::AtomProperty< SireBase::StringArrayProperty > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::array
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::StringArrayProperty > const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::array );
            
            AtomStringArrayProperty_exposer.def( 
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::assertCanConvert
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::assertCanConvert );
            
            AtomStringArrayProperty_exposer.def( 
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::assignFrom
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::assignFrom );
            
            AtomStringArrayProperty_exposer.def( 
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::at
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::StringArrayProperty >::Array const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::at );
            
            AtomStringArrayProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::at
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::StringArrayProperty const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::at );
            
            AtomStringArrayProperty_exposer.def( 
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::canConvert
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::canConvert );
            
            AtomStringArrayProperty_exposer.def( 
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::copyFrom
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*copyFrom_function_type)( ::QVector< SireBase::StringArrayProperty > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::copyFrom );
            
            AtomStringArrayProperty_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::copyFrom
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*copyFrom_function_type)( ::QVector< SireBase::StringArrayProperty > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::copyFrom );
            
            AtomStringArrayProperty_exposer.def( 
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::count
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::count );
            
            AtomStringArrayProperty_exposer.def( 
                "count"
                , count_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::divide
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::divide );
            
            AtomStringArrayProperty_exposer.def( 
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::divideByResidue
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::divideByResidue );
            
            AtomStringArrayProperty_exposer.def( 
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::fromVariant
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::StringArrayProperty > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::fromVariant );
            
            AtomStringArrayProperty_exposer.def( 
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::get
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::StringArrayProperty >::Array const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::get );
            
            AtomStringArrayProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::get
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::StringArrayProperty const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::get );
            
            AtomStringArrayProperty_exposer.def( 
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::isCompatibleWith );
            
            AtomStringArrayProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::isCompatibleWith
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::isCompatibleWith );
            
            AtomStringArrayProperty_exposer.def( 
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::isEmpty
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::isEmpty );
            
            AtomStringArrayProperty_exposer.def( 
                "isEmpty"
                , isEmpty_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::matchToSelection
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::StringArrayProperty > ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::matchToSelection );
            
            AtomStringArrayProperty_exposer.def( 
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::merge
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::merge );
            
            AtomStringArrayProperty_exposer.def( 
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::nAtoms
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::nAtoms );
            
            AtomStringArrayProperty_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::nAtoms
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::nAtoms );
            
            AtomStringArrayProperty_exposer.def( 
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::nCutGroups
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::nCutGroups );
            
            AtomStringArrayProperty_exposer.def( 
                "nCutGroups"
                , nCutGroups_function_value
                , "" );
        
        }
        AtomStringArrayProperty_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::operator=
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::StringArrayProperty > & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*assign_function_type)( ::SireMol::AtomProperty< SireBase::StringArrayProperty > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::operator= );
            
            AtomStringArrayProperty_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );
        
        }
        AtomStringArrayProperty_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireBase::StringArrayProperty >::Array const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::operator[] );
            
            AtomStringArrayProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::operator[]
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireBase::StringArrayProperty const & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::operator[] );
            
            AtomStringArrayProperty_exposer.def( 
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::set
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::StringArrayProperty > & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireBase::StringArrayProperty const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::set );
            
            AtomStringArrayProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::set
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< SireBase::StringArrayProperty > & ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireBase::StringArrayProperty > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::set );
            
            AtomStringArrayProperty_exposer.def( 
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::size
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::size );
            
            AtomStringArrayProperty_exposer.def( 
                "size"
                , size_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::toString
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::toString );
            
            AtomStringArrayProperty_exposer.def( 
                "toString"
                , toString_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::toVariant
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::toVariant );
            
            AtomStringArrayProperty_exposer.def( 
                "toVariant"
                , toVariant_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::toVector
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::QVector< SireBase::StringArrayProperty > ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::toVector );
            
            AtomStringArrayProperty_exposer.def( 
                "toVector"
                , toVector_function_value
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::toVector
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef ::QVector< SireBase::StringArrayProperty > ( ::SireMol::AtomProperty< SireBase::StringArrayProperty >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::toVector );
            
            AtomStringArrayProperty_exposer.def( 
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , "" );
        
        }
        { //::SireMol::AtomProperty< SireBase::StringArrayProperty >::typeName
        
            typedef SireMol::AtomProperty< SireBase::StringArrayProperty > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireBase::StringArrayProperty >::typeName );
            
            AtomStringArrayProperty_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        AtomStringArrayProperty_exposer.staticmethod( "fromVariant" );
        AtomStringArrayProperty_exposer.staticmethod( "typeName" );
        AtomStringArrayProperty_exposer.def( "__copy__", &__copy__);
        AtomStringArrayProperty_exposer.def( "__deepcopy__", &__copy__);
        AtomStringArrayProperty_exposer.def( "clone", &__copy__);
        AtomStringArrayProperty_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireBase::StringArrayProperty> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomStringArrayProperty_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireBase::StringArrayProperty> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomStringArrayProperty_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireBase::StringArrayProperty> >());
        AtomStringArrayProperty_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireBase::StringArrayProperty> > );
        AtomStringArrayProperty_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireBase::StringArrayProperty> > );
        AtomStringArrayProperty_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireBase::StringArrayProperty> > );
    }

}
