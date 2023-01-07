// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "ChargeElementParameterNames3D.pypp.hpp"

namespace bp = boost::python;

#include "SireBase/booleanproperty.h"

#include "SireError/errors.h"

#include "SireFF/energytable.h"

#include "SireFF/errors.h"

#include "SireFF/fieldtable.h"

#include "SireFF/forcetable.h"

#include "SireFF/potentialtable.h"

#include "SireMM/cljprobe.h"

#include "SireStream/datastream.h"

#include "SireStream/shareddatastream.h"

#include "qmmmff.h"

#include "qmprogram.h"

#include <QDebug>

#include "qmmmff.h"

Squire::ChargeElementParameterNames3D __copy__(const Squire::ChargeElementParameterNames3D &other){ return Squire::ChargeElementParameterNames3D(other); }

const char* pvt_get_name(const Squire::ChargeElementParameterNames3D&){ return "Squire::ChargeElementParameterNames3D";}

#include "Helpers/release_gil_policy.hpp"

void register_ChargeElementParameterNames3D_class(){

    { //::Squire::ChargeElementParameterNames3D
        typedef bp::class_< Squire::ChargeElementParameterNames3D, bp::bases< SireMM::ChargeParameterName, Squire::ElementParameterName > > ChargeElementParameterNames3D_exposer_t;
        ChargeElementParameterNames3D_exposer_t ChargeElementParameterNames3D_exposer = ChargeElementParameterNames3D_exposer_t( "ChargeElementParameterNames3D", "This class provides the default names of the element,\ncharge and coordinates properties required by the\nQMMMPotential\n", bp::init< >("") );
        bp::scope ChargeElementParameterNames3D_scope( ChargeElementParameterNames3D_exposer );
        ChargeElementParameterNames3D_exposer.def( "__copy__", &__copy__);
        ChargeElementParameterNames3D_exposer.def( "__deepcopy__", &__copy__);
        ChargeElementParameterNames3D_exposer.def( "clone", &__copy__);
        ChargeElementParameterNames3D_exposer.def( "__str__", &pvt_get_name);
        ChargeElementParameterNames3D_exposer.def( "__repr__", &pvt_get_name);
    }

}
