// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "OrbitalShell.pypp.hpp"

namespace bp = boost::python;

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "orbital.h"

#include "orbital.h"

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_OrbitalShell_class(){

    { //::Squire::OrbitalShell
        typedef bp::class_< Squire::OrbitalShell, bp::bases< Squire::Orbital, SireBase::Property >, boost::noncopyable > OrbitalShell_exposer_t;
        OrbitalShell_exposer_t OrbitalShell_exposer = OrbitalShell_exposer_t( "OrbitalShell", "This is the base class of a shell of orbitals. An orbital\nshell contains the typical atomic orbitals (e.g. a p-shell\ncontains 3 orbitals, p_x, p_y and p_z)\n\nOrbitalShell classes (like Orbital) are designed to hold\ninformation about an orbital, and are not meant to be\nused directly in an integral program (indeed, an orbital\nnormally doesnt even have coordinate information, as\nthis is provided by the molecule that holds the orbital).\n\nOrbital classes are thus virtual and not designed for speed.\n\nAuthor: Christopher Woods\n", bp::no_init );
        bp::scope OrbitalShell_scope( OrbitalShell_exposer );
        { //::Squire::OrbitalShell::angularMomentum

            typedef int ( ::Squire::OrbitalShell::*angularMomentum_function_type)(  ) const;
            angularMomentum_function_type angularMomentum_function_value( &::Squire::OrbitalShell::angularMomentum );

            OrbitalShell_exposer.def(
                "angularMomentum"
                , angularMomentum_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::OrbitalShell::nOrbitals

            typedef int ( ::Squire::OrbitalShell::*nOrbitals_function_type)(  ) const;
            nOrbitals_function_type nOrbitals_function_value( &::Squire::OrbitalShell::nOrbitals );

            OrbitalShell_exposer.def(
                "nOrbitals"
                , nOrbitals_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::Squire::OrbitalShell::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::Squire::OrbitalShell::typeName );

            OrbitalShell_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        OrbitalShell_exposer.staticmethod( "typeName" );
        OrbitalShell_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::Squire::OrbitalShell >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        OrbitalShell_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::Squire::OrbitalShell >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        OrbitalShell_exposer.def_pickle(sire_pickle_suite< ::Squire::OrbitalShell >());
        OrbitalShell_exposer.def( "__str__", &__str__< ::Squire::OrbitalShell > );
        OrbitalShell_exposer.def( "__repr__", &__str__< ::Squire::OrbitalShell > );
    }

}
