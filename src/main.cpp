#include <Deps.h>
#include <ConfScheduler.h>

using namespace boost;
using namespace std;

int main( int ac, char* av[] )
{
    try {
        ConfSchedular confSchedular;
        ConfSchedular::talk_list_type talk_list;
        if( ac > 1 )
        {
            std::string filename( av[ 1 ] );
            if( !boost::filesystem::exists( filename ) )
            {
                throw std::string( "File doesn't exist" );
            }
            confSchedular.processTalkFile( filename );
            confSchedular.printSecheduledTalks();
        }
        else
        {
            std::string line;
            std::cout << "Enter Quit to exit " << std::endl;
            do {
                std::getline( std::cin, line );
                talk_list.push_back( line );

            } while( line != "Quit" );
            //std::cout << talk_list.size() << std::endl;
            if( talk_list.size() > 1 )
            {
                confSchedular.processTalkConsole( talk_list );
                confSchedular.printSecheduledTalks();
            }

        }
    }
    catch( std::exception& e )
    {
        cout << e.what() << "\n";
        return 1;
    }
    return 0;
}

