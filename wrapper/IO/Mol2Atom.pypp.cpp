// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 2 License

#include "boost/python.hpp"
#include "Mol2Atom.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/parallel.h"

#include "SireBase/stringproperty.h"

#include "SireError/errors.h"

#include "SireIO/errors.h"

#include "SireIO/mol2.h"

#include "SireMM/mol2params.h"

#include "SireMol/atomcharges.h"

#include "SireMol/atomcoords.h"

#include "SireMol/molecule.h"

#include "SireMol/moleditor.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireSystem/system.h"

#include "SireUnits/units.h"

#include "mol2.h"

#include "mol2.h"

SireIO::Mol2Atom __copy__(const SireIO::Mol2Atom &other){ return SireIO::Mol2Atom(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

void register_Mol2Atom_class(){

    { //::SireIO::Mol2Atom
        typedef bp::class_< SireIO::Mol2Atom > Mol2Atom_exposer_t;
        Mol2Atom_exposer_t Mol2Atom_exposer = Mol2Atom_exposer_t( "Mol2Atom", "This class provides functionality for readingwriting\nMol2 ATOM records.\n\nAuthor: Lester Hedges\n", bp::init< >("Default constructor.") );
        bp::scope Mol2Atom_scope( Mol2Atom_exposer );
        Mol2Atom_exposer.def( bp::init< QString const &, QStringList & >(( bp::arg("line"), bp::arg("errors") ), "Constructor.") );
        Mol2Atom_exposer.def( bp::init< SireMol::Atom const &, QStringList & >(( bp::arg("atom"), bp::arg("errors") ), "Constructor.") );
        { //::SireIO::Mol2Atom::getCharge
        
            typedef double ( ::SireIO::Mol2Atom::*getCharge_function_type)(  ) const;
            getCharge_function_type getCharge_function_value( &::SireIO::Mol2Atom::getCharge );
            
            Mol2Atom_exposer.def( 
                "getCharge"
                , getCharge_function_value
                , "Get the atom charge." );
        
        }
        { //::SireIO::Mol2Atom::getCoord
        
            typedef ::SireMaths::Vector ( ::SireIO::Mol2Atom::*getCoord_function_type)(  ) const;
            getCoord_function_type getCoord_function_value( &::SireIO::Mol2Atom::getCoord );
            
            Mol2Atom_exposer.def( 
                "getCoord"
                , getCoord_function_value
                , "Get the atom coordinates." );
        
        }
        { //::SireIO::Mol2Atom::getName
        
            typedef ::QString ( ::SireIO::Mol2Atom::*getName_function_type)(  ) const;
            getName_function_type getName_function_value( &::SireIO::Mol2Atom::getName );
            
            Mol2Atom_exposer.def( 
                "getName"
                , getName_function_value
                , "Get the atom name." );
        
        }
        { //::SireIO::Mol2Atom::getNumber
        
            typedef int ( ::SireIO::Mol2Atom::*getNumber_function_type)(  ) const;
            getNumber_function_type getNumber_function_value( &::SireIO::Mol2Atom::getNumber );
            
            Mol2Atom_exposer.def( 
                "getNumber"
                , getNumber_function_value
                , "Get the atom number." );
        
        }
        { //::SireIO::Mol2Atom::getStatusBits
        
            typedef ::QString ( ::SireIO::Mol2Atom::*getStatusBits_function_type)(  ) const;
            getStatusBits_function_type getStatusBits_function_value( &::SireIO::Mol2Atom::getStatusBits );
            
            Mol2Atom_exposer.def( 
                "getStatusBits"
                , getStatusBits_function_value
                , "Get the status bits." );
        
        }
        { //::SireIO::Mol2Atom::getSubstructureName
        
            typedef ::QString ( ::SireIO::Mol2Atom::*getSubstructureName_function_type)(  ) const;
            getSubstructureName_function_type getSubstructureName_function_value( &::SireIO::Mol2Atom::getSubstructureName );
            
            Mol2Atom_exposer.def( 
                "getSubstructureName"
                , getSubstructureName_function_value
                , "Get the name of the substructure containing the atom." );
        
        }
        { //::SireIO::Mol2Atom::getSubstructureNumber
        
            typedef ::qint64 ( ::SireIO::Mol2Atom::*getSubstructureNumber_function_type)(  ) const;
            getSubstructureNumber_function_type getSubstructureNumber_function_value( &::SireIO::Mol2Atom::getSubstructureNumber );
            
            Mol2Atom_exposer.def( 
                "getSubstructureNumber"
                , getSubstructureNumber_function_value
                , "Get the number of the substructure containing the atom." );
        
        }
        { //::SireIO::Mol2Atom::getType
        
            typedef ::QString ( ::SireIO::Mol2Atom::*getType_function_type)(  ) const;
            getType_function_type getType_function_value( &::SireIO::Mol2Atom::getType );
            
            Mol2Atom_exposer.def( 
                "getType"
                , getType_function_value
                , "Get the SYBYL atom type." );
        
        }
        { //::SireIO::Mol2Atom::toMol2Record
        
            typedef ::QString ( ::SireIO::Mol2Atom::*toMol2Record_function_type)(  ) const;
            toMol2Record_function_type toMol2Record_function_value( &::SireIO::Mol2Atom::toMol2Record );
            
            Mol2Atom_exposer.def( 
                "toMol2Record"
                , toMol2Record_function_value
                , "Generate a Mol2 record from the atom data." );
        
        }
        { //::SireIO::Mol2Atom::toString
        
            typedef ::QString ( ::SireIO::Mol2Atom::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireIO::Mol2Atom::toString );
            
            Mol2Atom_exposer.def( 
                "toString"
                , toString_function_value
                , "Generate a string representation of the object." );
        
        }
        { //::SireIO::Mol2Atom::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireIO::Mol2Atom::typeName );
            
            Mol2Atom_exposer.def( 
                "typeName"
                , typeName_function_value
                , "" );
        
        }
        Mol2Atom_exposer.staticmethod( "typeName" );
        Mol2Atom_exposer.def( "__copy__", &__copy__);
        Mol2Atom_exposer.def( "__deepcopy__", &__copy__);
        Mol2Atom_exposer.def( "clone", &__copy__);
        Mol2Atom_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireIO::Mol2Atom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Mol2Atom_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireIO::Mol2Atom >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        Mol2Atom_exposer.def( "__str__", &__str__< ::SireIO::Mol2Atom > );
        Mol2Atom_exposer.def( "__repr__", &__str__< ::SireIO::Mol2Atom > );
    }

}
