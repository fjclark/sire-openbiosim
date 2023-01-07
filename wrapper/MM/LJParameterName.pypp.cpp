// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "LJParameterName.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/countflops.h"

#include "SireBase/errors.h"

#include "SireBase/propertylist.h"

#include "SireBase/sparsematrix.hpp"

#include "SireError/errors.h"

#include "SireFF/errors.h"

#include "SireMaths/maths.h"

#include "SireMol/atomcoords.h"

#include "SireMol/mover.hpp"

#include "SireStream/datastream.h"

#include "SireUnits/units.h"

#include "SireVol/cartesian.h"

#include "ljfunction.h"

#include "ljparameter.h"

#include "ljpotential.h"

#include "switchingfunction.h"

#include <QDebug>

#include "ljpotential.h"

SireMM::LJParameterName __copy__(const SireMM::LJParameterName &other){ return SireMM::LJParameterName(other); }

const char* pvt_get_name(const SireMM::LJParameterName&){ return "SireMM::LJParameterName";}

#include "Helpers/release_gil_policy.hpp"

void register_LJParameterName_class(){

    { //::SireMM::LJParameterName
        typedef bp::class_< SireMM::LJParameterName > LJParameterName_exposer_t;
        LJParameterName_exposer_t LJParameterName_exposer = LJParameterName_exposer_t( "LJParameterName", "This class provides the default name of the\nproperty that contains the LJ parameters", bp::init< >("") );
        bp::scope LJParameterName_scope( LJParameterName_exposer );
        { //::SireMM::LJParameterName::lj

            typedef ::QString const & ( ::SireMM::LJParameterName::*lj_function_type)(  ) const;
            lj_function_type lj_function_value( &::SireMM::LJParameterName::lj );

            LJParameterName_exposer.def(
                "lj"
                , lj_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "" );

        }
        LJParameterName_exposer.def( "__copy__", &__copy__);
        LJParameterName_exposer.def( "__deepcopy__", &__copy__);
        LJParameterName_exposer.def( "clone", &__copy__);
        LJParameterName_exposer.def( "__str__", &pvt_get_name);
        LJParameterName_exposer.def( "__repr__", &pvt_get_name);
    }

}
