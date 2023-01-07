// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ThreeAtomFunctions.pypp.hpp"

namespace bp = boost::python;

#include "SireCAS/symbols.h"

#include "SireMol/atommatcher.h"

#include "SireMol/atomselection.h"

#include "SireMol/errors.h"

#include "SireMol/moleculeinfodata.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "sireglobal.h"

#include "threeatomfunctions.h"

#include "threeatomfunctions.h"

#include "SireMol/moleculedata.h"

SireMM::ThreeAtomFunctions __copy__(const SireMM::ThreeAtomFunctions &other){ return SireMM::ThreeAtomFunctions(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_ThreeAtomFunctions_class(){

    { //::SireMM::ThreeAtomFunctions
        typedef bp::class_< SireMM::ThreeAtomFunctions, bp::bases< SireMM::AtomFunctions, SireMol::MoleculeProperty, SireMol::MolViewProperty, SireBase::Property > > ThreeAtomFunctions_exposer_t;
        ThreeAtomFunctions_exposer_t ThreeAtomFunctions_exposer = ThreeAtomFunctions_exposer_t( "ThreeAtomFunctions", "This class holds the set of ThreeAtomFunction potentials that\nact between the atoms in a molecule\n\nAuthor: Christopher Woods\n", bp::init< >("Constructor") );
        bp::scope ThreeAtomFunctions_scope( ThreeAtomFunctions_exposer );
        ThreeAtomFunctions_exposer.def( bp::init< SireMol::MoleculeData const & >(( bp::arg("moldata") ), "Construct the container to hold the set of three-atom functions\nfor the molecule whose data is in moldata") );
        ThreeAtomFunctions_exposer.def( bp::init< SireMol::MoleculeInfoData const & >(( bp::arg("molinfo") ), "Construct the container to hold the set of three-atom functions\nfor the molecule whose layout information is in molinfo") );
        ThreeAtomFunctions_exposer.def( bp::init< SireMM::ThreeAtomFunctions const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireMM::ThreeAtomFunctions::clear

            typedef void ( ::SireMM::ThreeAtomFunctions::*clear_function_type)( ::SireMol::AtomIdx ) ;
            clear_function_type clear_function_value( &::SireMM::ThreeAtomFunctions::clear );

            ThreeAtomFunctions_exposer.def(
                "clear"
                , clear_function_value
                , ( bp::arg("atom") )
                , bp::release_gil_policy()
                , "Clear all functions that involve the atom atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::clear

            typedef void ( ::SireMM::ThreeAtomFunctions::*clear_function_type)( ::SireMol::AtomID const & ) ;
            clear_function_type clear_function_value( &::SireMM::ThreeAtomFunctions::clear );

            ThreeAtomFunctions_exposer.def(
                "clear"
                , clear_function_value
                , ( bp::arg("atom") )
                , bp::release_gil_policy()
                , "Clear any function that acts on the atoms identified by atom\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::clear

            typedef void ( ::SireMM::ThreeAtomFunctions::*clear_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx,::SireMol::AtomIdx ) ;
            clear_function_type clear_function_value( &::SireMM::ThreeAtomFunctions::clear );

            ThreeAtomFunctions_exposer.def(
                "clear"
                , clear_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") )
                , bp::release_gil_policy()
                , "Clear any function that acts between the atoms atom0 to atom2\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::clear

            typedef void ( ::SireMM::ThreeAtomFunctions::*clear_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireMol::AtomID const & ) ;
            clear_function_type clear_function_value( &::SireMM::ThreeAtomFunctions::clear );

            ThreeAtomFunctions_exposer.def(
                "clear"
                , clear_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") )
                , bp::release_gil_policy()
                , "Clear any function that acts between the atoms atom0 to atom2\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::clear

            typedef void ( ::SireMM::ThreeAtomFunctions::*clear_function_type)( ::SireMol::AngleID const & ) ;
            clear_function_type clear_function_value( &::SireMM::ThreeAtomFunctions::clear );

            ThreeAtomFunctions_exposer.def(
                "clear"
                , clear_function_value
                , ( bp::arg("angleid") )
                , bp::release_gil_policy()
                , "Clear the potential that acts over the angle identified by angleid\nThis clears both 1-2-3 and 3-2-1\nThrow: SireMol::missing_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::clear

            typedef void ( ::SireMM::ThreeAtomFunctions::*clear_function_type)(  ) ;
            clear_function_type clear_function_value( &::SireMM::ThreeAtomFunctions::clear );

            ThreeAtomFunctions_exposer.def(
                "clear"
                , clear_function_value
                , bp::release_gil_policy()
                , "Completely clear all of the functions from this set" );

        }
        { //::SireMM::ThreeAtomFunctions::force

            typedef ::SireCAS::Expression ( ::SireMM::ThreeAtomFunctions::*force_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx,::SireMol::AtomIdx,::SireCAS::Symbol const & ) const;
            force_function_type force_function_value( &::SireMM::ThreeAtomFunctions::force );

            ThreeAtomFunctions_exposer.def(
                "force"
                , force_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force (derivative of the potential with respect to symbol)\nbetween the atoms atom0 to atom2\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::force

            typedef ::SireCAS::Expression ( ::SireMM::ThreeAtomFunctions::*force_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireMol::AtomID const &,::SireCAS::Symbol const & ) const;
            force_function_type force_function_value( &::SireMM::ThreeAtomFunctions::force );

            ThreeAtomFunctions_exposer.def(
                "force"
                , force_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force (derivative of the potential with respect to symbol)\nbetween the atoms atom0 to atom2\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::force

            typedef ::SireCAS::Expression ( ::SireMM::ThreeAtomFunctions::*force_function_type)( ::SireMol::AngleID const &,::SireCAS::Symbol const & ) const;
            force_function_type force_function_value( &::SireMM::ThreeAtomFunctions::force );

            ThreeAtomFunctions_exposer.def(
                "force"
                , force_function_value
                , ( bp::arg("angleid"), bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force (derivative of the potential with respect to symbol)\non the angle identified by angleid\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::forces

            typedef ::QVector< SireMM::ThreeAtomFunction > ( ::SireMM::ThreeAtomFunctions::*forces_function_type)( ::SireCAS::Symbol const & ) const;
            forces_function_type forces_function_value( &::SireMM::ThreeAtomFunctions::forces );

            ThreeAtomFunctions_exposer.def(
                "forces"
                , forces_function_value
                , ( bp::arg("symbol") )
                , bp::release_gil_policy()
                , "Return the force functions acting between the identified\ntriples of atoms, for the given symbol" );

        }
        { //::SireMM::ThreeAtomFunctions::includeOnly

            typedef ::SireMM::ThreeAtomFunctions ( ::SireMM::ThreeAtomFunctions::*includeOnly_function_type)( ::SireMol::AtomSelection const &,bool ) const;
            includeOnly_function_type includeOnly_function_value( &::SireMM::ThreeAtomFunctions::includeOnly );

            ThreeAtomFunctions_exposer.def(
                "includeOnly"
                , includeOnly_function_value
                , ( bp::arg("selected_atoms"), bp::arg("isstrict")=(bool)(true) )
                , "Return the set of functions where only functions that involve the\natoms in selected_atoms are included. If isstrict is true, then\nonly include functions where all of the atoms are in selected_atoms,\nwhile if isstrict is false, include functions where at least one\natom is in selected_atoms" );

        }
        { //::SireMM::ThreeAtomFunctions::isEmpty

            typedef bool ( ::SireMM::ThreeAtomFunctions::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireMM::ThreeAtomFunctions::isEmpty );

            ThreeAtomFunctions_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is empty (has no potentials for any internals)" );

        }
        { //::SireMM::ThreeAtomFunctions::nFunctions

            typedef int ( ::SireMM::ThreeAtomFunctions::*nFunctions_function_type)(  ) const;
            nFunctions_function_type nFunctions_function_value( &::SireMM::ThreeAtomFunctions::nFunctions );

            ThreeAtomFunctions_exposer.def(
                "nFunctions"
                , nFunctions_function_value
                , bp::release_gil_policy()
                , "Return the number of functions in this set" );

        }
        ThreeAtomFunctions_exposer.def( bp::self != bp::self );
        { //::SireMM::ThreeAtomFunctions::operator=

            typedef ::SireMM::ThreeAtomFunctions & ( ::SireMM::ThreeAtomFunctions::*assign_function_type)( ::SireMM::ThreeAtomFunctions const & ) ;
            assign_function_type assign_function_value( &::SireMM::ThreeAtomFunctions::operator= );

            ThreeAtomFunctions_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        ThreeAtomFunctions_exposer.def( bp::self == bp::self );
        { //::SireMM::ThreeAtomFunctions::potential

            typedef ::SireCAS::Expression ( ::SireMM::ThreeAtomFunctions::*potential_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx,::SireMol::AtomIdx ) const;
            potential_function_type potential_function_value( &::SireMM::ThreeAtomFunctions::potential );

            ThreeAtomFunctions_exposer.def(
                "potential"
                , potential_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") )
                , bp::release_gil_policy()
                , "Return the function acting between the atoms atom0 to atom2.\nThis returns an empty expression if there is no expression between\nthese atoms\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_atom\n" );

        }
        { //::SireMM::ThreeAtomFunctions::potential

            typedef ::SireCAS::Expression ( ::SireMM::ThreeAtomFunctions::*potential_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireMol::AtomID const & ) const;
            potential_function_type potential_function_value( &::SireMM::ThreeAtomFunctions::potential );

            ThreeAtomFunctions_exposer.def(
                "potential"
                , potential_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2") )
                , bp::release_gil_policy()
                , "Return the function acting between the atoms atom0 to atom2.\nThis returns an empty expression if there is no expression between\nthese atoms\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::potential

            typedef ::SireCAS::Expression ( ::SireMM::ThreeAtomFunctions::*potential_function_type)( ::SireMol::AngleID const & ) const;
            potential_function_type potential_function_value( &::SireMM::ThreeAtomFunctions::potential );

            ThreeAtomFunctions_exposer.def(
                "potential"
                , potential_function_value
                , ( bp::arg("angleid") )
                , bp::release_gil_policy()
                , "Return the function acting on the angle identified by angleid.\nThis returns an empty expression if there is no expression on\nthis angle\nThis search first for the function for 1-2-3, but if that\nis not found, then it returns the function for 3-2-1\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::potentials

            typedef ::QVector< SireMM::ThreeAtomFunction > ( ::SireMM::ThreeAtomFunctions::*potentials_function_type)(  ) const;
            potentials_function_type potentials_function_value( &::SireMM::ThreeAtomFunctions::potentials );

            ThreeAtomFunctions_exposer.def(
                "potentials"
                , potentials_function_value
                , bp::release_gil_policy()
                , "Return the potential energy functions acting between the identified\ntriples of atoms" );

        }
        { //::SireMM::ThreeAtomFunctions::set

            typedef void ( ::SireMM::ThreeAtomFunctions::*set_function_type)( ::SireMol::AtomIdx,::SireMol::AtomIdx,::SireMol::AtomIdx,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireMM::ThreeAtomFunctions::set );

            ThreeAtomFunctions_exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the potential energy function used by atoms atom0, atom1 and atom2\nto be equal to expression - this replaces any existing expression\nThrow: SireError::invalid_index\nThrow: SireMol::duplicate_atom\n" );

        }
        { //::SireMM::ThreeAtomFunctions::set

            typedef void ( ::SireMM::ThreeAtomFunctions::*set_function_type)( ::SireMol::AtomID const &,::SireMol::AtomID const &,::SireMol::AtomID const &,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireMM::ThreeAtomFunctions::set );

            ThreeAtomFunctions_exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("atom0"), bp::arg("atom1"), bp::arg("atom2"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the potential energy function used by atoms atom0 to atom2\nto be equal to expression - this replaces any existing expression\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::set

            typedef void ( ::SireMM::ThreeAtomFunctions::*set_function_type)( ::SireMol::AngleID const &,::SireCAS::Expression const & ) ;
            set_function_type set_function_value( &::SireMM::ThreeAtomFunctions::set );

            ThreeAtomFunctions_exposer.def(
                "set"
                , set_function_value
                , ( bp::arg("angleid"), bp::arg("expression") )
                , bp::release_gil_policy()
                , "Set the potential energy function used for the angle identified by angleid\nto be equal to expression - this replaces any existing expression\nThis replaces both 1-2-3 and 3-2-1\nThrow: SireMol::missing_atom\nThrow: SireMol::duplicate_atom\nThrow: SireError::invalid_index\n" );

        }
        { //::SireMM::ThreeAtomFunctions::substitute

            typedef void ( ::SireMM::ThreeAtomFunctions::*substitute_function_type)( ::SireCAS::Identities const & ) ;
            substitute_function_type substitute_function_value( &::SireMM::ThreeAtomFunctions::substitute );

            ThreeAtomFunctions_exposer.def(
                "substitute"
                , substitute_function_value
                , ( bp::arg("identities") )
                , bp::release_gil_policy()
                , "Perform the substitutions contained in identities in all of\nthe expressions in this set. This could be useful if you have\ndefined these expressions with respect to a lambda parameter,\nand now want to set that value of lambda" );

        }
        { //::SireMM::ThreeAtomFunctions::toString

            typedef ::QString ( ::SireMM::ThreeAtomFunctions::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireMM::ThreeAtomFunctions::toString );

            ThreeAtomFunctions_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation" );

        }
        { //::SireMM::ThreeAtomFunctions::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireMM::ThreeAtomFunctions::typeName );

            ThreeAtomFunctions_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        ThreeAtomFunctions_exposer.staticmethod( "typeName" );
        ThreeAtomFunctions_exposer.def( "__copy__", &__copy__);
        ThreeAtomFunctions_exposer.def( "__deepcopy__", &__copy__);
        ThreeAtomFunctions_exposer.def( "clone", &__copy__);
        ThreeAtomFunctions_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireMM::ThreeAtomFunctions >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomFunctions_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireMM::ThreeAtomFunctions >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        ThreeAtomFunctions_exposer.def_pickle(sire_pickle_suite< ::SireMM::ThreeAtomFunctions >());
        ThreeAtomFunctions_exposer.def( "__str__", &__str__< ::SireMM::ThreeAtomFunctions > );
        ThreeAtomFunctions_exposer.def( "__repr__", &__str__< ::SireMM::ThreeAtomFunctions > );
    }

}
