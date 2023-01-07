// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "InternalSymbols.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireFF/errors.h"

#include "SireMol/cgidx.h"

#include "SireMol/molecule.h"

#include "SireMol/mover.hpp"

#include "SireMol/partialmolecule.h"

#include "SireVol/coordgroup.h"

#include "internalparameters.h"

#include "sireglobal.h"

#include "tostring.h"

#include <algorithm>

#include "internalparameters.h"

SireMM::InternalSymbols __copy__(const SireMM::InternalSymbols &other){ return SireMM::InternalSymbols(other); }

const char* pvt_get_name(const SireMM::InternalSymbols&){ return "SireMM::InternalSymbols";}

#include "Helpers/release_gil_policy.hpp"

void register_InternalSymbols_class(){

    { //::SireMM::InternalSymbols
        typedef bp::class_< SireMM::InternalSymbols, bp::bases< SireMM::InternalSymbolsBase > > InternalSymbols_exposer_t;
        InternalSymbols_exposer_t InternalSymbols_exposer = InternalSymbols_exposer_t( "InternalSymbols", "This class holds all of the symbols used by all of the\ninternal parameters", bp::init< >("") );
        bp::scope InternalSymbols_scope( InternalSymbols_exposer );
        { //::SireMM::InternalSymbols::angle

            typedef ::SireMM::AngleSymbols const & ( ::SireMM::InternalSymbols::*angle_function_type)(  ) const;
            angle_function_type angle_function_value( &::SireMM::InternalSymbols::angle );

            InternalSymbols_exposer.def(
                "angle"
                , angle_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the angle parameters" );

        }
        { //::SireMM::InternalSymbols::bendBend

            typedef ::SireMM::BendBendSymbols const & ( ::SireMM::InternalSymbols::*bendBend_function_type)(  ) const;
            bendBend_function_type bendBend_function_value( &::SireMM::InternalSymbols::bendBend );

            InternalSymbols_exposer.def(
                "bendBend"
                , bendBend_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the bend-bend parameters" );

        }
        { //::SireMM::InternalSymbols::bond

            typedef ::SireMM::BondSymbols const & ( ::SireMM::InternalSymbols::*bond_function_type)(  ) const;
            bond_function_type bond_function_value( &::SireMM::InternalSymbols::bond );

            InternalSymbols_exposer.def(
                "bond"
                , bond_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the bond parameters" );

        }
        { //::SireMM::InternalSymbols::dihedral

            typedef ::SireMM::DihedralSymbols const & ( ::SireMM::InternalSymbols::*dihedral_function_type)(  ) const;
            dihedral_function_type dihedral_function_value( &::SireMM::InternalSymbols::dihedral );

            InternalSymbols_exposer.def(
                "dihedral"
                , dihedral_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the dihedral parameters" );

        }
        { //::SireMM::InternalSymbols::improper

            typedef ::SireMM::ImproperSymbols const & ( ::SireMM::InternalSymbols::*improper_function_type)(  ) const;
            improper_function_type improper_function_value( &::SireMM::InternalSymbols::improper );

            InternalSymbols_exposer.def(
                "improper"
                , improper_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the improper parameters" );

        }
        { //::SireMM::InternalSymbols::stretchBend

            typedef ::SireMM::StretchBendSymbols const & ( ::SireMM::InternalSymbols::*stretchBend_function_type)(  ) const;
            stretchBend_function_type stretchBend_function_value( &::SireMM::InternalSymbols::stretchBend );

            InternalSymbols_exposer.def(
                "stretchBend"
                , stretchBend_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the stretch-bend parameters" );

        }
        { //::SireMM::InternalSymbols::stretchBendTorsion

            typedef ::SireMM::StretchBendTorsionSymbols const & ( ::SireMM::InternalSymbols::*stretchBendTorsion_function_type)(  ) const;
            stretchBendTorsion_function_type stretchBendTorsion_function_value( &::SireMM::InternalSymbols::stretchBendTorsion );

            InternalSymbols_exposer.def(
                "stretchBendTorsion"
                , stretchBendTorsion_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the stretch-bend-torsion parameters" );

        }
        { //::SireMM::InternalSymbols::stretchStretch

            typedef ::SireMM::StretchStretchSymbols const & ( ::SireMM::InternalSymbols::*stretchStretch_function_type)(  ) const;
            stretchStretch_function_type stretchStretch_function_value( &::SireMM::InternalSymbols::stretchStretch );

            InternalSymbols_exposer.def(
                "stretchStretch"
                , stretchStretch_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the stretch-stretch parameters" );

        }
        { //::SireMM::InternalSymbols::ureyBradley

            typedef ::SireMM::BondSymbols const & ( ::SireMM::InternalSymbols::*ureyBradley_function_type)(  ) const;
            ureyBradley_function_type ureyBradley_function_value( &::SireMM::InternalSymbols::ureyBradley );

            InternalSymbols_exposer.def(
                "ureyBradley"
                , ureyBradley_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return all of the symbols used in the Urey-Bradley parameters" );

        }
        InternalSymbols_exposer.def( "__copy__", &__copy__);
        InternalSymbols_exposer.def( "__deepcopy__", &__copy__);
        InternalSymbols_exposer.def( "clone", &__copy__);
        InternalSymbols_exposer.def( "__str__", &pvt_get_name);
        InternalSymbols_exposer.def( "__repr__", &pvt_get_name);
    }

}
