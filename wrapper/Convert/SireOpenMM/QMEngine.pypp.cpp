// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "QMEngine.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "qmmm.h"

#include "SireError/errors.h"

#include "qmmm.h"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_QMEngine_class(){

    { //::SireOpenMM::QMEngine
        typedef bp::class_< SireOpenMM::QMEngine, boost::noncopyable > QMEngine_exposer_t;
        QMEngine_exposer_t QMEngine_exposer = QMEngine_exposer_t( "QMEngine", "", bp::no_init );
        bp::scope QMEngine_scope( QMEngine_exposer );
        { //::SireOpenMM::QMEngine::null
        
            typedef ::SireOpenMM::NullQMEngine const & ( *null_function_type )(  );
            null_function_type null_function_value( &::SireOpenMM::QMEngine::null );
            
            QMEngine_exposer.def( 
                "null"
                , null_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Get a null QM engine." );
        
        }
        { //::SireOpenMM::QMEngine::typeName
        
            typedef char const * ( *typeName_function_type )(  );
            typeName_function_type typeName_function_value( &::SireOpenMM::QMEngine::typeName );
            
            QMEngine_exposer.def( 
                "typeName"
                , typeName_function_value
                , bp::release_gil_policy()
                , "" );
        
        }
        QMEngine_exposer.staticmethod( "null" );
        QMEngine_exposer.staticmethod( "typeName" );
        QMEngine_exposer.def( "__str__", &__str__< ::SireOpenMM::QMEngine > );
        QMEngine_exposer.def( "__repr__", &__str__< ::SireOpenMM::QMEngine > );
    }

}
