// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "Helpers/clone_const_reference.hpp"
#include "AtomBeads.pypp.hpp"

namespace bp = boost::python;

#include "atombeads.h"

#include "atombeads.h"

#include "SireMaths/vector.h"

#include "SireMol/moleculeview.h"

SireMol::AtomProperty<SireMol::BeadNum> __copy__(const SireMol::AtomProperty<SireMol::BeadNum> &other){ return SireMol::AtomProperty<SireMol::BeadNum>(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_AtomBeads_class(){

    { //::SireMol::AtomProperty< SireMol::BeadNum >
        typedef bp::class_< SireMol::AtomProperty< SireMol::BeadNum >, bp::bases< SireMol::AtomProp, SireMol::MolViewProperty, SireBase::Property > > AtomBeads_exposer_t;
        AtomBeads_exposer_t AtomBeads_exposer = AtomBeads_exposer_t( "AtomBeads", "", bp::init< >("") );
        bp::scope AtomBeads_scope( AtomBeads_exposer );
        AtomBeads_exposer.def( bp::init< SireMol::MoleculeInfo const & >(( bp::arg("molinfo") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::MoleculeInfo const &, SireMol::BeadNum const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::MoleculeView const & >(( bp::arg("molview") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::MoleculeView const &, SireMol::BeadNum const & >(( bp::arg("molview"), bp::arg("default_value") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::MoleculeInfoData const &, SireMol::BeadNum const & >(( bp::arg("molinfo"), bp::arg("default_value") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::BeadNum const & >(( bp::arg("value") ), "") );
        AtomBeads_exposer.def( bp::init< SireBase::PackedArray2D< SireMol::BeadNum > const & >(( bp::arg("values") ), "") );
        AtomBeads_exposer.def( bp::init< SireMol::AtomProperty< SireMol::BeadNum > const & >(( bp::arg("other") ), "") );
        { //::SireMol::AtomProperty< SireMol::BeadNum >::array

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::BeadNum > const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*array_function_type)(  ) const;
            array_function_type array_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::array );

            AtomBeads_exposer.def(
                "array"
                , array_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::assertCanConvert

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::BeadNum >::*assertCanConvert_function_type)( ::QVariant const & ) const;
            assertCanConvert_function_type assertCanConvert_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::assertCanConvert );

            AtomBeads_exposer.def(
                "assertCanConvert"
                , assertCanConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::assignFrom

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::BeadNum >::*assignFrom_function_type)( ::SireMol::AtomProperty< QVariant > const & ) ;
            assignFrom_function_type assignFrom_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::assignFrom );

            AtomBeads_exposer.def(
                "assignFrom"
                , assignFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::at

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::BeadNum >::Array const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*at_function_type)( ::SireMol::CGIdx ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::at );

            AtomBeads_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::at

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::BeadNum const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::at );

            AtomBeads_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::at

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::BeadNum const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*at_function_type)( ::SireMol::CGAtomIdx const & ) const;
            at_function_type at_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::at );

            AtomBeads_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::canConvert

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::BeadNum >::*canConvert_function_type)( ::QVariant const & ) const;
            canConvert_function_type canConvert_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::canConvert );

            AtomBeads_exposer.def(
                "canConvert"
                , canConvert_function_value
                , ( bp::arg("value") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::copyFrom

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::BeadNum >::*copyFrom_function_type)( ::QVector< SireMol::BeadNum > const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::copyFrom );

            AtomBeads_exposer.def(
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::copyFrom

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef void ( ::SireMol::AtomProperty< SireMol::BeadNum >::*copyFrom_function_type)( ::QVector< SireMol::BeadNum > const &,::SireMol::AtomSelection const & ) ;
            copyFrom_function_type copyFrom_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::copyFrom );

            AtomBeads_exposer.def(
                "copyFrom"
                , copyFrom_function_value
                , ( bp::arg("values"), bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::count

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::BeadNum >::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::count );

            AtomBeads_exposer.def(
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::divide

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::BeadNum >::*divide_function_type)( ::QVector< SireMol::AtomSelection > const & ) const;
            divide_function_type divide_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::divide );

            AtomBeads_exposer.def(
                "divide"
                , divide_function_value
                , ( bp::arg("beads") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::divideByResidue

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::BeadNum >::*divideByResidue_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            divideByResidue_function_type divideByResidue_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::divideByResidue );

            AtomBeads_exposer.def(
                "divideByResidue"
                , divideByResidue_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::fromVariant

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::BeadNum > ( *fromVariant_function_type )( ::SireMol::AtomProperty< QVariant > const & );
            fromVariant_function_type fromVariant_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::fromVariant );

            AtomBeads_exposer.def(
                "fromVariant"
                , fromVariant_function_value
                , ( bp::arg("variant") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::get

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::BeadNum >::Array const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*get_function_type)( ::SireMol::CGIdx ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::get );

            AtomBeads_exposer.def(
                "get"
                , get_function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::get

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::BeadNum const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*get_function_type)( int ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::get );

            AtomBeads_exposer.def(
                "get"
                , get_function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::get

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::BeadNum const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*get_function_type)( ::SireMol::CGAtomIdx const & ) const;
            get_function_type get_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::get );

            AtomBeads_exposer.def(
                "get"
                , get_function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::getAsProperty

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::BeadNum >::*getAsProperty_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsProperty_function_type getAsProperty_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::getAsProperty );

            AtomBeads_exposer.def(
                "getAsProperty"
                , getAsProperty_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::getAsVariant

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QVariant ( ::SireMol::AtomProperty< SireMol::BeadNum >::*getAsVariant_function_type)( ::SireMol::CGAtomIdx const & ) const;
            getAsVariant_function_type getAsVariant_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::getAsVariant );

            AtomBeads_exposer.def(
                "getAsVariant"
                , getAsVariant_function_value
                , ( bp::arg("cgatomidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::isCompatibleWith

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::BeadNum >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::isCompatibleWith );

            AtomBeads_exposer.def(
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::isCompatibleWith

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::BeadNum >::*isCompatibleWith_function_type)( ::SireMol::MoleculeInfo const & ) const;
            isCompatibleWith_function_type isCompatibleWith_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::isCompatibleWith );

            AtomBeads_exposer.def(
                "isCompatibleWith"
                , isCompatibleWith_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::isEmpty

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef bool ( ::SireMol::AtomProperty< SireMol::BeadNum >::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::isEmpty );

            AtomBeads_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::matchToSelection

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*matchToSelection_function_type)( ::SireMol::AtomSelection const & ) const;
            matchToSelection_function_type matchToSelection_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::matchToSelection );

            AtomBeads_exposer.def(
                "matchToSelection"
                , matchToSelection_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::merge

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PropertyPtr ( ::SireMol::AtomProperty< SireMol::BeadNum >::*merge_function_type)( ::SireMol::MoleculeInfoData const & ) const;
            merge_function_type merge_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::merge );

            AtomBeads_exposer.def(
                "merge"
                , merge_function_value
                , ( bp::arg("molinfo") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::nAtoms

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::BeadNum >::*nAtoms_function_type)(  ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::nAtoms );

            AtomBeads_exposer.def(
                "nAtoms"
                , nAtoms_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::nAtoms

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::BeadNum >::*nAtoms_function_type)( ::SireMol::CGIdx ) const;
            nAtoms_function_type nAtoms_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::nAtoms );

            AtomBeads_exposer.def(
                "nAtoms"
                , nAtoms_function_value
                , ( bp::arg("cgidx") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::nCutGroups

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::BeadNum >::*nCutGroups_function_type)(  ) const;
            nCutGroups_function_type nCutGroups_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::nCutGroups );

            AtomBeads_exposer.def(
                "nCutGroups"
                , nCutGroups_function_value
                , bp::release_gil_policy()
                , "" );

        }
        AtomBeads_exposer.def( bp::self != bp::self );
        { //::SireMol::AtomProperty< SireMol::BeadNum >::operator=

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::BeadNum > & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*assign_function_type)( ::SireMol::AtomProperty< SireMol::BeadNum > const & ) ;
            assign_function_type assign_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::operator= );

            AtomBeads_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        AtomBeads_exposer.def( bp::self == bp::self );
        { //::SireMol::AtomProperty< SireMol::BeadNum >::operator[]

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireBase::PackedArray2D< SireMol::BeadNum >::Array const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*__getitem___function_type)( ::SireMol::CGIdx ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::operator[] );

            AtomBeads_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgidx") )
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::operator[]

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::BeadNum const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::operator[] );

            AtomBeads_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::operator[]

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::BeadNum const & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*__getitem___function_type)( ::SireMol::CGAtomIdx const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::operator[] );

            AtomBeads_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("cgatomidx") )
                , bp::return_value_policy<bp::clone_const_reference, bp::release_gil_policy>()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::operator[]

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QList< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*__getitem___function_type)( ::QList< long long > const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::operator[] );

            AtomBeads_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("idxs") )
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::operator[]

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QList< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*__getitem___function_type)( ::SireBase::Slice const & ) const;
            __getitem___function_type __getitem___function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::operator[] );

            AtomBeads_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("slice") )
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::set

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::BeadNum > & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*set_function_type)( ::SireMol::CGAtomIdx const &,::SireMol::BeadNum const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::set );

            AtomBeads_exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("cgatomidx"), bp::arg("value") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::set

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::AtomProperty< SireMol::BeadNum > & ( ::SireMol::AtomProperty< SireMol::BeadNum >::*set_function_type)( ::SireMol::CGIdx,::QVector< SireMol::BeadNum > const & ) ;
            set_function_type set_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::set );

            AtomBeads_exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("cgidx"), bp::arg("values") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::size

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef int ( ::SireMol::AtomProperty< SireMol::BeadNum >::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::size );

            AtomBeads_exposer.def(
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::toList

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QList< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*toList_function_type)(  ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::toList );

            AtomBeads_exposer.def(
                "toList"
                , toList_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::toList

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QList< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*toList_function_type)( ::SireMol::AtomSelection const & ) const;
            toList_function_type toList_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::toList );

            AtomBeads_exposer.def(
                "toList"
                , toList_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::toString

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QString ( ::SireMol::AtomProperty< SireMol::BeadNum >::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::toString );

            AtomBeads_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::toVariant

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::SireMol::AtomProperty< QVariant > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*toVariant_function_type)(  ) const;
            toVariant_function_type toVariant_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::toVariant );

            AtomBeads_exposer.def(
                "toVariant"
                , toVariant_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::toVector

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QVector< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*toVector_function_type)(  ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::toVector );

            AtomBeads_exposer.def(
                "toVector"
                , toVector_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::toVector

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef ::QVector< SireMol::BeadNum > ( ::SireMol::AtomProperty< SireMol::BeadNum >::*toVector_function_type)( ::SireMol::AtomSelection const & ) const;
            toVector_function_type toVector_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::toVector );

            AtomBeads_exposer.def(
                "toVector"
                , toVector_function_value
                , ( bp::arg("selection") )
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireMol::AtomProperty< SireMol::BeadNum >::typeName

            typedef SireMol::AtomProperty< SireMol::BeadNum > exported_class_t;
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMol::AtomProperty< SireMol::BeadNum >::typeName );

            AtomBeads_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        AtomBeads_exposer.staticmethod( "fromVariant" );
        AtomBeads_exposer.staticmethod( "typeName" );
        AtomBeads_exposer.def( "__copy__", &__copy__);
        AtomBeads_exposer.def( "__deepcopy__", &__copy__);
        AtomBeads_exposer.def( "clone", &__copy__);
        AtomBeads_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMol::AtomProperty<SireMol::BeadNum> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomBeads_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMol::AtomProperty<SireMol::BeadNum> >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        AtomBeads_exposer.def_pickle(sire_pickle_suite< ::SireMol::AtomProperty<SireMol::BeadNum> >());
        AtomBeads_exposer.def( "__str__", &__str__< ::SireMol::AtomProperty<SireMol::BeadNum> > );
        AtomBeads_exposer.def( "__repr__", &__str__< ::SireMol::AtomProperty<SireMol::BeadNum> > );
        AtomBeads_exposer.def( "__len__", &__len_size< ::SireMol::AtomProperty<SireMol::BeadNum> > );
    }

}
