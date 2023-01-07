// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "GroSystem.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/grotop.h"

#include "SireMM/atomljs.h"

#include "SireMM/cljnbpairs.h"

#include "SireMM/fouratomfunctions.h"

#include "SireMM/internalff.h"

#include "SireMM/threeatomfunctions.h"

#include "SireMM/twoatomfunctions.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomelements.h"

#include "SireMol/atommasses.h"

#include "SireMol/connectivity.h"

#include "SireMol/core.h"

#include "SireMol/errors.h"

#include "SireMol/molecule.h"

#include "SireMol/moleculegroup.h"

#include "SireMol/moleditor.h"

#include "SireMol/select.h"

#include "SireMol/trajectory.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "grotop.h"

#include <QDateTime>

#include <QDir>

#include <QElapsedTimer>

#include <QFileInfo>

#include <QRegularExpression>

#include "grotop.h"

SireIO::GroSystem __copy__(const SireIO::GroSystem &other){ return SireIO::GroSystem(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

#include "Helpers/len.hpp"

void register_GroSystem_class(){

    { //::SireIO::GroSystem
        typedef bp::class_< SireIO::GroSystem > GroSystem_exposer_t;
        GroSystem_exposer_t GroSystem_exposer = GroSystem_exposer_t( "GroSystem", "This class describes a Gromacs System", bp::init< >("Construct a null GroSystem") );
        bp::scope GroSystem_scope( GroSystem_exposer );
        GroSystem_exposer.def( bp::init< QString const & >(( bp::arg("name") ), "Construct a GroSystem with the passed name") );
        GroSystem_exposer.def( bp::init< SireIO::GroSystem const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireIO::GroSystem::add

            typedef void ( ::SireIO::GroSystem::*add_function_type)( ::QString,int ) ;
            add_function_type add_function_value( &::SireIO::GroSystem::add );

            GroSystem_exposer.def(
                "add"
                , add_function_value
                , ( bp::arg("moltype"), bp::arg("ncopies")=(int)(1) )
                , "Add (optionally ncopies) copies of the molecule with type moltype\nto the system" );

        }
        { //::SireIO::GroSystem::at

            typedef ::QString ( ::SireIO::GroSystem::*at_function_type)( int ) const;
            at_function_type at_function_value( &::SireIO::GroSystem::at );

            GroSystem_exposer.def(
                "at"
                , at_function_value
                , ( bp::arg("i") )
                , bp::release_gil_policy()
                , "Return the molecule type of the ith molecule" );

        }
        { //::SireIO::GroSystem::count

            typedef int ( ::SireIO::GroSystem::*count_function_type)(  ) const;
            count_function_type count_function_value( &::SireIO::GroSystem::count );

            GroSystem_exposer.def(
                "count"
                , count_function_value
                , bp::release_gil_policy()
                , "Return the number of molecules in the system" );

        }
        { //::SireIO::GroSystem::isEmpty

            typedef bool ( ::SireIO::GroSystem::*isEmpty_function_type)(  ) const;
            isEmpty_function_type isEmpty_function_value( &::SireIO::GroSystem::isEmpty );

            GroSystem_exposer.def(
                "isEmpty"
                , isEmpty_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is an empty system (no molecules)" );

        }
        { //::SireIO::GroSystem::isNull

            typedef bool ( ::SireIO::GroSystem::*isNull_function_type)(  ) const;
            isNull_function_type isNull_function_value( &::SireIO::GroSystem::isNull );

            GroSystem_exposer.def(
                "isNull"
                , isNull_function_value
                , bp::release_gil_policy()
                , "Return whether or not this is a null GroSystem" );

        }
        { //::SireIO::GroSystem::nMolecules

            typedef int ( ::SireIO::GroSystem::*nMolecules_function_type)(  ) const;
            nMolecules_function_type nMolecules_function_value( &::SireIO::GroSystem::nMolecules );

            GroSystem_exposer.def(
                "nMolecules"
                , nMolecules_function_value
                , bp::release_gil_policy()
                , "Return the number of molecules in the system" );

        }
        { //::SireIO::GroSystem::name

            typedef ::QString ( ::SireIO::GroSystem::*name_function_type)(  ) const;
            name_function_type name_function_value( &::SireIO::GroSystem::name );

            GroSystem_exposer.def(
                "name"
                , name_function_value
                , bp::release_gil_policy()
                , "Return the name of the system" );

        }
        GroSystem_exposer.def( bp::self != bp::self );
        { //::SireIO::GroSystem::operator=

            typedef ::SireIO::GroSystem & ( ::SireIO::GroSystem::*assign_function_type)( ::SireIO::GroSystem const & ) ;
            assign_function_type assign_function_value( &::SireIO::GroSystem::operator= );

            GroSystem_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        GroSystem_exposer.def( bp::self == bp::self );
        { //::SireIO::GroSystem::operator[]

            typedef ::QString ( ::SireIO::GroSystem::*__getitem___function_type)( int ) const;
            __getitem___function_type __getitem___function_value( &::SireIO::GroSystem::operator[] );

            GroSystem_exposer.def(
                "__getitem__"
                , __getitem___function_value
                , ( bp::arg("i") )
                , "" );

        }
        { //::SireIO::GroSystem::setName

            typedef void ( ::SireIO::GroSystem::*setName_function_type)( ::QString ) ;
            setName_function_type setName_function_value( &::SireIO::GroSystem::setName );

            GroSystem_exposer.def(
                "setName"
                , setName_function_value
                , ( bp::arg("name") )
                , bp::release_gil_policy()
                , "Set the name of the system" );

        }
        { //::SireIO::GroSystem::size

            typedef int ( ::SireIO::GroSystem::*size_function_type)(  ) const;
            size_function_type size_function_value( &::SireIO::GroSystem::size );

            GroSystem_exposer.def(
                "size"
                , size_function_value
                , bp::release_gil_policy()
                , "Return the number of molecules in the system" );

        }
        { //::SireIO::GroSystem::toString

            typedef ::QString ( ::SireIO::GroSystem::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::GroSystem::toString );

            GroSystem_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this system" );

        }
        { //::SireIO::GroSystem::typeName

            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::GroSystem::typeName );

            GroSystem_exposer.def(
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );

        }
        { //::SireIO::GroSystem::uniqueTypes

            typedef ::QStringList ( ::SireIO::GroSystem::*uniqueTypes_function_type)(  ) const;
            uniqueTypes_function_type uniqueTypes_function_value( &::SireIO::GroSystem::uniqueTypes );

            GroSystem_exposer.def(
                "uniqueTypes"
                , uniqueTypes_function_value
                , bp::release_gil_policy()
                , "Return the list of unique molecule types held in the system" );

        }
        { //::SireIO::GroSystem::what

            typedef char const * ( ::SireIO::GroSystem::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireIO::GroSystem::what );

            GroSystem_exposer.def(
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "" );

        }
        GroSystem_exposer.staticmethod( "typeName" );
        GroSystem_exposer.def( "__copy__", &__copy__);
        GroSystem_exposer.def( "__deepcopy__", &__copy__);
        GroSystem_exposer.def( "clone", &__copy__);
        GroSystem_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::GroSystem >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GroSystem_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::GroSystem >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        GroSystem_exposer.def_pickle(sire_pickle_suite< ::SireIO::GroSystem >());
        GroSystem_exposer.def( "__str__", &__str__< ::SireIO::GroSystem > );
        GroSystem_exposer.def( "__repr__", &__str__< ::SireIO::GroSystem > );
        GroSystem_exposer.def( "__len__", &__len_size< ::SireIO::GroSystem > );
    }

}
