#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE ConferenceTest
#include <Deps.h>
#include <boost/test/included/unit_test.hpp>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;
using namespace boost::unit_test::framework;

/**
 * * Make available program's arguments to all tests, recieving
 * * this fixture.
 * */
struct ArgsFixture
{
    ArgsFixture() : argc( master_test_suite().argc ),
        argv( master_test_suite().argv )
    {
    }

    int argc;
    char** argv;
    int getNoOgArgument()
    {
        return argc;
    }

    void getFileName( std::string& filename )
    {
        if( argc >=  2 )
        {
            filename = argv[ 2 ];
        }
    }

    void getExecutable( std::string& exename )
    {
        if( argc >= 1 )
        {
            exename = argv[ 1 ];
        }
    }

};
BOOST_FIXTURE_TEST_SUITE( ConferenceTestSuite, ArgsFixture )

BOOST_AUTO_TEST_CASE( LoadTest )
{
    ArgsFixture arg;
    std::string filename, conference;
    arg.getFileName( filename );
    arg.getExecutable( conference );
    std::cout << conference << filename << std::endl;
    char* const parmList[] = {( char* )conference.c_str(), ( char* ) filename.c_str(), NULL};
    pid_t pID = fork();
    if( pID == 0 )
    {
        execv( conference.c_str(), parmList );
    }
    int status;
    waitpid( pID, &status, 0 );
    BOOST_CHECK_EQUAL( 1, 1 );
}

BOOST_AUTO_TEST_SUITE_END();
