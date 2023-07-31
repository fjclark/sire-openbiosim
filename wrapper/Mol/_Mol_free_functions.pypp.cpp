// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "_Mol_free_functions.pypp.hpp"

namespace bp = boost::python;

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

#include "SireBase/parallel.h"

#include "atomelements.h"

#include "iswater.h"

#include "iswater.h"

#include "SireBase/parallel.h"

#include "atomelements.h"

#include "iswater.h"

#include "iswater.h"

#include "SireBase/parallel.h"

#include "atomelements.h"

#include "iswater.h"

#include "iswater.h"

void register_free_functions(){

    { //::SireMol::getAlignment
    
        typedef ::SireMaths::Transform ( *getAlignment_function_type )( ::SireMol::MoleculeView const &,::SireMol::MoleculeView const &,bool );
        getAlignment_function_type getAlignment_function_value( &::SireMol::getAlignment );
        
        bp::def( 
            "getAlignment"
            , getAlignment_function_value
            , ( bp::arg("view0"), bp::arg("view1"), bp::arg("fit")=(bool)(true) )
            , "" );
    
    }

    { //::SireMol::getAlignment
    
        typedef ::SireMaths::Transform ( *getAlignment_function_type )( ::SireMol::MoleculeView const &,::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,bool );
        getAlignment_function_type getAlignment_function_value( &::SireMol::getAlignment );
        
        bp::def( 
            "getAlignment"
            , getAlignment_function_value
            , ( bp::arg("view0"), bp::arg("view1"), bp::arg("map"), bp::arg("fit")=(bool)(true) )
            , "" );
    
    }

    { //::SireMol::getAlignment
    
        typedef ::SireMaths::Transform ( *getAlignment_function_type )( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,bool );
        getAlignment_function_type getAlignment_function_value( &::SireMol::getAlignment );
        
        bp::def( 
            "getAlignment"
            , getAlignment_function_value
            , ( bp::arg("view0"), bp::arg("map0"), bp::arg("view1"), bp::arg("map1"), bp::arg("fit")=(bool)(true) )
            , "" );
    
    }

    { //::SireMol::getAlignment
    
        typedef ::SireMaths::Transform ( *getAlignment_function_type )( ::SireMol::MoleculeView const &,::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,bool );
        getAlignment_function_type getAlignment_function_value( &::SireMol::getAlignment );
        
        bp::def( 
            "getAlignment"
            , getAlignment_function_value
            , ( bp::arg("view0"), bp::arg("view1"), bp::arg("matcher"), bp::arg("fit")=(bool)(true) )
            , "" );
    
    }

    { //::SireMol::getAlignment
    
        typedef ::SireMaths::Transform ( *getAlignment_function_type )( ::SireMol::MoleculeView const &,::SireMol::MoleculeView const &,::SireMol::AtomMatcher const &,::SireBase::PropertyMap const &,bool );
        getAlignment_function_type getAlignment_function_value( &::SireMol::getAlignment );
        
        bp::def( 
            "getAlignment"
            , getAlignment_function_value
            , ( bp::arg("view0"), bp::arg("view1"), bp::arg("matcher"), bp::arg("map"), bp::arg("fit")=(bool)(true) )
            , "" );
    
    }

    { //::SireMol::getAlignment
    
        typedef ::SireMaths::Transform ( *getAlignment_function_type )( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireMol::MoleculeView const &,::SireBase::PropertyMap const &,::SireMol::AtomMatcher const &,bool );
        getAlignment_function_type getAlignment_function_value( &::SireMol::getAlignment );
        
        bp::def( 
            "getAlignment"
            , getAlignment_function_value
            , ( bp::arg("view0"), bp::arg("map0"), bp::arg("view1"), bp::arg("map1"), bp::arg("matcher"), bp::arg("fit")=(bool)(true) )
            , "" );
    
    }

    { //::SireMol::is_water
    
        typedef bool ( *is_water_function_type )( ::SireMol::MoleculeView const &,::SireBase::PropertyMap const & );
        is_water_function_type is_water_function_value( &::SireMol::is_water );
        
        bp::def( 
            "is_water"
            , is_water_function_value
            , ( bp::arg("molecule"), bp::arg("map")=SireBase::PropertyMap() )
            , "" );
    
    }

    { //::SireMol::is_water
    
        typedef ::QVector< bool > ( *is_water_function_type )( ::SireMol::SelectorMol const &,::SireBase::PropertyMap const & );
        is_water_function_type is_water_function_value( &::SireMol::is_water );
        
        bp::def( 
            "is_water"
            , is_water_function_value
            , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
            , "" );
    
    }

    { //::SireMol::is_water
    
        typedef ::QVector< bool > ( *is_water_function_type )( ::SireMol::SelectResult const &,::SireBase::PropertyMap const & );
        is_water_function_type is_water_function_value( &::SireMol::is_water );
        
        bp::def( 
            "is_water"
            , is_water_function_value
            , ( bp::arg("molecules"), bp::arg("map")=SireBase::PropertyMap() )
            , "" );
    
    }

}
