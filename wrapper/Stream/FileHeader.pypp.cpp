// This file has been generated by Py++.

// (C) Christopher Woods, GPL >= 3 License

#include "boost/python.hpp"
#include "FileHeader.pypp.hpp"

namespace bp = boost::python;

#include "SireError/errors.h"

#include "SireStream/errors.h"

#include "SireStream/version_error.h"

#include "registeralternativename.h"

#include "shareddatastream.h"

#include "streamdata.hpp"

#include "tostring.h"

#include <QByteArray>

#include <QDataStream>

#include <QDebug>

#include <QFile>

#include <QList>

#include <QMutex>

#include <QProcess>

#include <QSysInfo>

#include <QtGlobal>

#include <boost/config.hpp>

#include <cstdlib>

#include <memory>

#include "streamdata.hpp"

SireStream::FileHeader __copy__(const SireStream::FileHeader &other){ return SireStream::FileHeader(other); }

#include "Qt/qdatastream.hpp"

#include "Helpers/str.hpp"

#include "Helpers/release_gil_policy.hpp"

void register_FileHeader_class(){

    { //::SireStream::FileHeader
        typedef bp::class_< SireStream::FileHeader > FileHeader_exposer_t;
        FileHeader_exposer_t FileHeader_exposer = FileHeader_exposer_t( "FileHeader", "This class provides metadata about the binary representation\nof an object. This is to allow the owner of the data to identify\nit as belonging to themselves, to provide information about\nwhat data is contained, when it was created and on what,\nand to provide some information about how much space the\ndata may require to load. The aim is to allow the provenance\n(well, at least the origin) of a file to be determined.\n\nAuthor: Christopher Woods\n", bp::init< >("Null constructor") );
        bp::scope FileHeader_scope( FileHeader_exposer );
        FileHeader_exposer.def( bp::init< SireStream::FileHeader const & >(( bp::arg("other") ), "Copy constructor") );
        { //::SireStream::FileHeader::assertCompatible

            typedef void ( ::SireStream::FileHeader::*assertCompatible_function_type)(  ) const;
            assertCompatible_function_type assertCompatible_function_value( &::SireStream::FileHeader::assertCompatible );

            FileHeader_exposer.def(
                "assertCompatible"
                , assertCompatible_function_value
                , bp::release_gil_policy()
                , "Assert that the libraries required are compatible with what has\nbeen loaded" );

        }
        { //::SireStream::FileHeader::assertNotCorrupted

            typedef void ( ::SireStream::FileHeader::*assertNotCorrupted_function_type)( ::QByteArray const & ) const;
            assertNotCorrupted_function_type assertNotCorrupted_function_value( &::SireStream::FileHeader::assertNotCorrupted );

            FileHeader_exposer.def(
                "assertNotCorrupted"
                , assertNotCorrupted_function_value
                , ( bp::arg("compressed_data") )
                , bp::release_gil_policy()
                , "Assert that the data in compressed_data is not corrupt" );

        }
        { //::SireStream::FileHeader::buildVersion

            typedef ::QString ( ::SireStream::FileHeader::*buildVersion_function_type)(  ) const;
            buildVersion_function_type buildVersion_function_value( &::SireStream::FileHeader::buildVersion );

            FileHeader_exposer.def(
                "buildVersion"
                , buildVersion_function_value
                , bp::release_gil_policy()
                , "Return the version of the source code from the repository" );

        }
        { //::SireStream::FileHeader::compressionRatio

            typedef double ( ::SireStream::FileHeader::*compressionRatio_function_type)(  ) const;
            compressionRatio_function_type compressionRatio_function_value( &::SireStream::FileHeader::compressionRatio );

            FileHeader_exposer.def(
                "compressionRatio"
                , compressionRatio_function_value
                , bp::release_gil_policy()
                , "Return the compression ratio of the file" );

        }
        { //::SireStream::FileHeader::createdBy

            typedef ::QString const & ( ::SireStream::FileHeader::*createdBy_function_type)(  ) const;
            createdBy_function_type createdBy_function_value( &::SireStream::FileHeader::createdBy );

            FileHeader_exposer.def(
                "createdBy"
                , createdBy_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the username of whoever created this data" );

        }
        { //::SireStream::FileHeader::createdWhen

            typedef ::QDateTime const & ( ::SireStream::FileHeader::*createdWhen_function_type)(  ) const;
            createdWhen_function_type createdWhen_function_value( &::SireStream::FileHeader::createdWhen );

            FileHeader_exposer.def(
                "createdWhen"
                , createdWhen_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the date and time when this was created" );

        }
        { //::SireStream::FileHeader::createdWhere

            typedef ::QString const & ( ::SireStream::FileHeader::*createdWhere_function_type)(  ) const;
            createdWhere_function_type createdWhere_function_value( &::SireStream::FileHeader::createdWhere );

            FileHeader_exposer.def(
                "createdWhere"
                , createdWhere_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Where this file was created (the name of the machine)" );

        }
        { //::SireStream::FileHeader::dataType

            typedef ::QString ( ::SireStream::FileHeader::*dataType_function_type)(  ) const;
            dataType_function_type dataType_function_value( &::SireStream::FileHeader::dataType );

            FileHeader_exposer.def(
                "dataType"
                , dataType_function_value
                , bp::release_gil_policy()
                , "Return the name of the data type of the object in this data\nThrow: SireError::invalid_state\n" );

        }
        { //::SireStream::FileHeader::dataTypes

            typedef ::QStringList const & ( ::SireStream::FileHeader::*dataTypes_function_type)(  ) const;
            dataTypes_function_type dataTypes_function_value( &::SireStream::FileHeader::dataTypes );

            FileHeader_exposer.def(
                "dataTypes"
                , dataTypes_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the name(s) of the top-level data type in this data" );

        }
        { //::SireStream::FileHeader::digest

            typedef ::SireStream::MD5Sum const & ( ::SireStream::FileHeader::*digest_function_type)(  ) const;
            digest_function_type digest_function_value( &::SireStream::FileHeader::digest );

            FileHeader_exposer.def(
                "digest"
                , digest_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the digest of the data - this is used to check\nfor any data corruption" );

        }
        { //::SireStream::FileHeader::locale

            typedef ::QLocale const & ( ::SireStream::FileHeader::*locale_function_type)(  ) const;
            locale_function_type locale_function_value( &::SireStream::FileHeader::locale );

            FileHeader_exposer.def(
                "locale"
                , locale_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return the locale in which this data was written. This is useful\nas it can help with the support of multiple languages\n(as the person who saved the file may not necessarily be using\nEnglish ;-)" );

        }
        { //::SireStream::FileHeader::operator=

            typedef ::SireStream::FileHeader & ( ::SireStream::FileHeader::*assign_function_type)( ::SireStream::FileHeader const & ) ;
            assign_function_type assign_function_value( &::SireStream::FileHeader::operator= );

            FileHeader_exposer.def(
                "assign"
                , assign_function_value
                , ( bp::arg("other") )
                , bp::return_self< >()
                , "" );

        }
        { //::SireStream::FileHeader::repository

            typedef ::QString ( ::SireStream::FileHeader::*repository_function_type)(  ) const;
            repository_function_type repository_function_value( &::SireStream::FileHeader::repository );

            FileHeader_exposer.def(
                "repository"
                , repository_function_value
                , bp::release_gil_policy()
                , "Return the repository from which this source code was downloaded" );

        }
        { //::SireStream::FileHeader::requireLibrary

            typedef bool ( ::SireStream::FileHeader::*requireLibrary_function_type)( ::QString const & ) const;
            requireLibrary_function_type requireLibrary_function_value( &::SireStream::FileHeader::requireLibrary );

            FileHeader_exposer.def(
                "requireLibrary"
                , requireLibrary_function_value
                , ( bp::arg("library") )
                , bp::release_gil_policy()
                , "Does this data require that the library library be loaded?" );

        }
        { //::SireStream::FileHeader::requiredLibraries

            typedef ::QStringList ( ::SireStream::FileHeader::*requiredLibraries_function_type)(  ) const;
            requiredLibraries_function_type requiredLibraries_function_value( &::SireStream::FileHeader::requiredLibraries );

            FileHeader_exposer.def(
                "requiredLibraries"
                , requiredLibraries_function_value
                , bp::release_gil_policy()
                , "Return the list of libraries required to load this data" );

        }
        { //::SireStream::FileHeader::requiredMemory

            typedef ::quint32 ( ::SireStream::FileHeader::*requiredMemory_function_type)(  ) const;
            requiredMemory_function_type requiredMemory_function_value( &::SireStream::FileHeader::requiredMemory );

            FileHeader_exposer.def(
                "requiredMemory"
                , requiredMemory_function_value
                , bp::release_gil_policy()
                , "Return the minimum memory the will be necessary to read the file" );

        }
        { //::SireStream::FileHeader::requiredVersion

            typedef ::quint32 ( ::SireStream::FileHeader::*requiredVersion_function_type)( ::QString const & ) const;
            requiredVersion_function_type requiredVersion_function_value( &::SireStream::FileHeader::requiredVersion );

            FileHeader_exposer.def(
                "requiredVersion"
                , requiredVersion_function_value
                , ( bp::arg("library") )
                , bp::release_gil_policy()
                , "Return the version number required of the library library. This\nreturns 0 if this library isnt required." );

        }
        { //::SireStream::FileHeader::systemInfo

            typedef ::QString const & ( ::SireStream::FileHeader::*systemInfo_function_type)(  ) const;
            systemInfo_function_type systemInfo_function_value( &::SireStream::FileHeader::systemInfo );

            FileHeader_exposer.def(
                "systemInfo"
                , systemInfo_function_value
                , bp::return_value_policy< bp::copy_const_reference >()
                , "Return information about the system on which this data was written" );

        }
        { //::SireStream::FileHeader::toString

            typedef ::QString ( ::SireStream::FileHeader::*toString_function_type)(  ) const;
            toString_function_type toString_function_value( &::SireStream::FileHeader::toString );

            FileHeader_exposer.def(
                "toString"
                , toString_function_value
                , bp::release_gil_policy()
                , "Return a string representation of this header" );

        }
        { //::SireStream::FileHeader::version

            typedef ::quint32 ( ::SireStream::FileHeader::*version_function_type)(  ) const;
            version_function_type version_function_value( &::SireStream::FileHeader::version );

            FileHeader_exposer.def(
                "version"
                , version_function_value
                , bp::release_gil_policy()
                , "Return the master version number for the file - this version number\nis changed only when the file format is completely changed (e.g. we\nmove away from using a compressed header, then the compressed object)\n" );

        }
        FileHeader_exposer.def( "__copy__", &__copy__);
        FileHeader_exposer.def( "__deepcopy__", &__copy__);
        FileHeader_exposer.def( "clone", &__copy__);
        FileHeader_exposer.def( "__rlshift__", &__rlshift__QDataStream< ::SireStream::FileHeader >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        FileHeader_exposer.def( "__rrshift__", &__rrshift__QDataStream< ::SireStream::FileHeader >,
                            bp::return_internal_reference<1, bp::with_custodian_and_ward<1,2> >() );
        FileHeader_exposer.def_pickle(sire_pickle_suite< ::SireStream::FileHeader >());
        FileHeader_exposer.def( "__str__", &__str__< ::SireStream::FileHeader > );
        FileHeader_exposer.def( "__repr__", &__str__< ::SireStream::FileHeader > );
    }

}
