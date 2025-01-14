// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "TorchQMEngine.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireMaths/vector.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/triclinicbox.h"

#include "openmm/serialization/SerializationNode.h"

#include "openmm/serialization/SerializationProxy.h"

#include "torchqm.h"

#include "SireError/errors.h"

#include "SireMaths/vector.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "SireVol/triclinicbox.h"

#include "openmm/serialization/SerializationNode.h"

#include "openmm/serialization/SerializationProxy.h"

#include "torchqm.h"

SireOpenMM::TorchQMEngine __copy__(const SireOpenMM::TorchQMEngine &other){ return SireOpenMM::TorchQMEngine(other); }

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_TorchQMEngine_class(){

    { //::SireOpenMM::TorchQMEngine
        typedef bp::class_< SireOpenMM::TorchQMEngine, bp::bases< SireBase::Property, SireOpenMM::QMEngine > > TorchQMEngine_exposer_t;
        TorchQMEngine_exposer_t TorchQMEngine_exposer = TorchQMEngine_exposer_t( "TorchQMEngine", "", bp::init< >("Default constructor.") );
        bp::scope TorchQMEngine_scope( TorchQMEngine_exposer );
        TorchQMEngine_exposer.def( bp::init< QString, bp::optional< SireUnits::Dimension::Length, int, bool, double > >(( bp::arg("arg0"), bp::arg("cutoff")=7.5 * SireUnits::angstrom, bp::arg("neighbour_list_frequency")=(int)(0), bp::arg("is_mechanical")=(bool)(false), bp::arg("lambda")=1. ), "Constructor\nPar:am module_path\nThe path to the serialised TorchScript module.\n\nPar:am cutoff\nThe ML cutoff distance.\n\nPar:am neighbour_list_frequency\nThe frequency at which the neighbour list is updated. (Number of steps.)\nIf zero, then no neighbour list is used.\n\nPar:am is_mechanical\nA flag to indicate if mechanical embedding is being used.\n\nPar:am lambda\nThe lambda weighting factor. This can be used to interpolate between\npotentials for end-state correction calculations.\n") );
        TorchQMEngine_exposer.def( bp::init< SireOpenMM::TorchQMEngine const & >(( bp::arg("other") ), "Copy constructor.") );
        { //::SireOpenMM::TorchQMEngine::getModulePath
        
            typedef ::QString ( ::SireOpenMM::TorchQMEngine::*getModulePath_function_type)(  ) const;
            getModulePath_function_type getModulePath_function_value( &::SireOpenMM::TorchQMEngine::getModulePath );
            
            TorchQMEngine_exposer.def( 
                "getModulePath"
                , getModulePath_function_value
                , bp::release_gil_policy()
                , "Get the path to the serialised TorchScript module.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getAtoms
        
            typedef ::QVector< int > ( ::SireOpenMM::TorchQMEngine::*getAtoms_function_type)(  ) const;
            getAtoms_function_type getAtoms_function_value( &::SireOpenMM::TorchQMEngine::getAtoms );
            
            TorchQMEngine_exposer.def( 
                "getAtoms"
                , getAtoms_function_value
                , bp::release_gil_policy()
                , "Get the indices of the atoms in the QM region.\nReturn:s\nA vector of atom indices for the QM region.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getCharges
        
            typedef ::QVector< double > ( ::SireOpenMM::TorchQMEngine::*getCharges_function_type)(  ) const;
            getCharges_function_type getCharges_function_value( &::SireOpenMM::TorchQMEngine::getCharges );
            
            TorchQMEngine_exposer.def( 
                "getCharges"
                , getCharges_function_value
                , bp::release_gil_policy()
                , "Get the atomic charges of all atoms in the system.\nReturn:s\nA vector of atomic charges for all atoms in the system.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getCutoff
        
            typedef ::SireUnits::Dimension::Length ( ::SireOpenMM::TorchQMEngine::*getCutoff_function_type)(  ) const;
            getCutoff_function_type getCutoff_function_value( &::SireOpenMM::TorchQMEngine::getCutoff );
            
            TorchQMEngine_exposer.def( 
                "getCutoff"
                , getCutoff_function_value
                , bp::release_gil_policy()
                , "Get the QM cutoff distance.\nReturn:s\nThe QM cutoff distance.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getIsMechanical
        
            typedef bool ( ::SireOpenMM::TorchQMEngine::*getIsMechanical_function_type)(  ) const;
            getIsMechanical_function_type getIsMechanical_function_value( &::SireOpenMM::TorchQMEngine::getIsMechanical );
            
            TorchQMEngine_exposer.def( 
                "getIsMechanical"
                , getIsMechanical_function_value
                , bp::release_gil_policy()
                , "Get the mechanical embedding flag.\nReturn:s\nA flag to indicate if mechanical embedding is being used.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getLambda
        
            typedef double ( ::SireOpenMM::TorchQMEngine::*getLambda_function_type)(  ) const;
            getLambda_function_type getLambda_function_value( &::SireOpenMM::TorchQMEngine::getLambda );
            
            TorchQMEngine_exposer.def( 
                "getLambda"
                , getLambda_function_value
                , bp::release_gil_policy()
                , "Get the lambda weighting factor.\nReturn:s\nThe lambda weighting factor.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getLinkAtoms
        
            typedef ::boost::tuples::tuple< QMap< int, int >, QMap< int, QVector< int > >, QMap< int, double >, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type, boost::tuples::null_type > ( ::SireOpenMM::TorchQMEngine::*getLinkAtoms_function_type)(  ) const;
            getLinkAtoms_function_type getLinkAtoms_function_value( &::SireOpenMM::TorchQMEngine::getLinkAtoms );
            
            TorchQMEngine_exposer.def( 
                "getLinkAtoms"
                , getLinkAtoms_function_value
                , bp::release_gil_policy()
                , "Get the link atoms associated with each QM atom.\nReturn:s\nA tuple containing:\n\nmm1_to_qm\nA dictionary mapping link atom (MM1) indices to the QM atoms to\nwhich they are bonded.\n\nmm1_to_mm2\nA dictionary of link atoms indices (MM1) to a list of the MM\natoms to which they are bonded (MM2).\n\nbond_scale_factors\nA dictionary of link atom indices (MM1) to a list of the bond\nlength scale factors between the QM and MM1 atoms. The scale\nfactors are the ratio of the equilibrium bond lengths for the\nQM-L (QM-link) atom and QM-MM1 atom, i.e. R0(QM-L)  R0(QM-MM1),\ntaken from the MM force field parameters for the molecule.\n\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getMM2Atoms
        
            typedef ::QVector< int > ( ::SireOpenMM::TorchQMEngine::*getMM2Atoms_function_type)(  ) const;
            getMM2Atoms_function_type getMM2Atoms_function_value( &::SireOpenMM::TorchQMEngine::getMM2Atoms );
            
            TorchQMEngine_exposer.def( 
                "getMM2Atoms"
                , getMM2Atoms_function_value
                , bp::release_gil_policy()
                , "Get the vector of MM2 atoms.\nReturn:s\nA vector of MM2 atom indices.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getNeighbourListFrequency
        
            typedef int ( ::SireOpenMM::TorchQMEngine::*getNeighbourListFrequency_function_type)(  ) const;
            getNeighbourListFrequency_function_type getNeighbourListFrequency_function_value( &::SireOpenMM::TorchQMEngine::getNeighbourListFrequency );
            
            TorchQMEngine_exposer.def( 
                "getNeighbourListFrequency"
                , getNeighbourListFrequency_function_value
                , bp::release_gil_policy()
                , "Get the neighbour list frequency.\nReturn:s\nThe neighbour list frequency.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::getNumbers
        
            typedef ::QVector< int > ( ::SireOpenMM::TorchQMEngine::*getNumbers_function_type)(  ) const;
            getNumbers_function_type getNumbers_function_value( &::SireOpenMM::TorchQMEngine::getNumbers );
            
            TorchQMEngine_exposer.def( 
                "getNumbers"
                , getNumbers_function_value
                , bp::release_gil_policy()
                , "Get the atomic numbers for the atoms in the QM region.\nReturn:s\nA vector of atomic numbers for the atoms in the QM region.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::operator=
        
            typedef ::SireOpenMM::TorchQMEngine & ( ::SireOpenMM::TorchQMEngine::*assign_function_type)( ::SireOpenMM::TorchQMEngine const & ) ;
            assign_function_type assign_function_value( &::SireOpenMM::TorchQMEngine::operator= );
            
            TorchQMEngine_exposer.def( 
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "Assignment operator." );
        
        }
        { //::SireOpenMM::TorchQMEngine::setModulePath
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setModulePath_function_type)( ::QString ) ;
            setModulePath_function_type setModulePath_function_value( &::SireOpenMM::TorchQMEngine::setModulePath );
            
            TorchQMEngine_exposer.def( 
                "setModulePath"
                , setModulePath_function_value
                , ( bp::arg("module_path") )
                , bp::release_gil_policy()
                , "Set the path to the serialised TorchScript module.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setAtoms
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setAtoms_function_type)( ::QVector< int > ) ;
            setAtoms_function_type setAtoms_function_value( &::SireOpenMM::TorchQMEngine::setAtoms );
            
            TorchQMEngine_exposer.def( 
                "setAtoms"
                , setAtoms_function_value
                , ( bp::arg("atoms") )
                , bp::release_gil_policy()
                , "Set the list of atom indices for the QM region.\nPar:am atoms\nA vector of atom indices for the QM region.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setCharges
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setCharges_function_type)( ::QVector< double > ) ;
            setCharges_function_type setCharges_function_value( &::SireOpenMM::TorchQMEngine::setCharges );
            
            TorchQMEngine_exposer.def( 
                "setCharges"
                , setCharges_function_value
                , ( bp::arg("charges") )
                , bp::release_gil_policy()
                , "Set the atomic charges of all atoms in the system.\nPar:am charges\nA vector of atomic charges for all atoms in the system.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setCutoff
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setCutoff_function_type)( ::SireUnits::Dimension::Length ) ;
            setCutoff_function_type setCutoff_function_value( &::SireOpenMM::TorchQMEngine::setCutoff );
            
            TorchQMEngine_exposer.def( 
                "setCutoff"
                , setCutoff_function_value
                , ( bp::arg("cutoff") )
                , bp::release_gil_policy()
                , "Set the QM cutoff distance.\nPar:am cutoff\nThe QM cutoff distance.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setIsMechanical
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setIsMechanical_function_type)( bool ) ;
            setIsMechanical_function_type setIsMechanical_function_value( &::SireOpenMM::TorchQMEngine::setIsMechanical );
            
            TorchQMEngine_exposer.def( 
                "setIsMechanical"
                , setIsMechanical_function_value
                , ( bp::arg("is_mechanical") )
                , bp::release_gil_policy()
                , "Set the mechanical embedding flag.\nPar:am is_mechanical\nA flag to indicate if mechanical embedding is being used.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setLambda
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setLambda_function_type)( double ) ;
            setLambda_function_type setLambda_function_value( &::SireOpenMM::TorchQMEngine::setLambda );
            
            TorchQMEngine_exposer.def( 
                "setLambda"
                , setLambda_function_value
                , ( bp::arg("lambda") )
                , bp::release_gil_policy()
                , "Set the lambda weighting factor.\nPar:am lambda\nThe lambda weighting factor.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setLinkAtoms
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setLinkAtoms_function_type)( ::QMap< int, int >,::QMap< int, QVector< int > >,::QMap< int, double > ) ;
            setLinkAtoms_function_type setLinkAtoms_function_value( &::SireOpenMM::TorchQMEngine::setLinkAtoms );
            
            TorchQMEngine_exposer.def( 
                "setLinkAtoms"
                , setLinkAtoms_function_value
                , ( bp::arg("mm1_to_qm"), bp::arg("mm1_to_mm2"), bp::arg("bond_scale_factors") )
                , bp::release_gil_policy()
                , "Set the link atoms associated with each QM atom.\nPar:am mm1_to_qm\nA dictionary mapping link atom (MM1) indices to the QM atoms to\nwhich they are bonded.\n\nPar:am mm1_to_mm2\nA dictionary of link atoms indices (MM1) to a list of the MM\natoms to which they are bonded (MM2).\n\nPar:am bond_scale_factors\nA dictionary of link atom indices (MM1) to a list of the bond\nlength scale factors between the QM and MM1 atoms. The scale\nfactors are the ratio of the equilibrium bond lengths for the\nQM-L (QM-link) atom and QM-MM1 atom, i.e. R0(QM-L)  R0(QM-MM1),\ntaken from the MM force field parameters for the molecule.\n\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setNeighbourListFrequency
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setNeighbourListFrequency_function_type)( int ) ;
            setNeighbourListFrequency_function_type setNeighbourListFrequency_function_value( &::SireOpenMM::TorchQMEngine::setNeighbourListFrequency );
            
            TorchQMEngine_exposer.def( 
                "setNeighbourListFrequency"
                , setNeighbourListFrequency_function_value
                , ( bp::arg("neighbour_list_frequency") )
                , bp::release_gil_policy()
                , "Set the neighbour list frequency.\nPar:am neighbour_list_frequency\nThe neighbour list frequency.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::setNumbers
        
            typedef void ( ::SireOpenMM::TorchQMEngine::*setNumbers_function_type)( ::QVector< int > ) ;
            setNumbers_function_type setNumbers_function_value( &::SireOpenMM::TorchQMEngine::setNumbers );
            
            TorchQMEngine_exposer.def( 
                "setNumbers"
                , setNumbers_function_value
                , ( bp::arg("numbers") )
                , bp::release_gil_policy()
                , "Set the atomic numbers for the atoms in the QM region.\nPar:am numbers\nA vector of atomic numbers for the atoms in the QM region.\n" );
        
        }
        { //::SireOpenMM::TorchQMEngine::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireOpenMM::TorchQMEngine::typeName );
            
            TorchQMEngine_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "Return the C++ name for this class." );
        
        }
        { //::SireOpenMM::TorchQMEngine::what
        
            typedef char const * ( ::SireOpenMM::TorchQMEngine::*what_function_type)(  ) const;
            what_function_type what_function_value( &::SireOpenMM::TorchQMEngine::what );
            
            TorchQMEngine_exposer.def( 
                "what"
                , what_function_value
                , bp::release_gil_policy()
                , "Return the C++ name for this class." );
        
        }
        TorchQMEngine_exposer.staticmethod( "typeName" );
        TorchQMEngine_exposer.def( "__copy__", &__copy__);
        TorchQMEngine_exposer.def( "__deepcopy__", &__copy__);
        TorchQMEngine_exposer.def( "clone", &__copy__);
        TorchQMEngine_exposer.def( "__str__", &__str__< ::SireOpenMM::TorchQMEngine > );
        TorchQMEngine_exposer.def( "__repr__", &__str__< ::SireOpenMM::TorchQMEngine > );
    }

}
