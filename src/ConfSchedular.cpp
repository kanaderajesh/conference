#include <ConfScheduler.h>
ConfSchedular::ConfSchedular()
{
}

void ConfSchedular::formHasMapTalk()
{
    try{
        talk_hash.push_back( talkptr_60_list );
        talk_hash.push_back( talkptr_45_list );
        talk_hash.push_back( talkptr_30_list );
        talk_hash.push_back( talkptr_15_list );
        talk_hash.push_back( talkptr_5_list );
        talk_hash.push_back( talkptr_other_list );
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void ConfSchedular::printTalkHashMap()
{
    try{
        std::cout << STATIC::TALK_60_TEXT  << std::endl;
        printTalkList( talk_hash[ 0 ] );
        std::cout << STATIC::TALK_45_TEXT << std::endl;
        printTalkList( talk_hash[ 1 ] );
        std::cout << STATIC::TALK_30_TEXT << std::endl;
        printTalkList( talk_hash[ 2 ] );
        std::cout << STATIC::TALK_15_TEXT << std::endl;
        printTalkList( talk_hash[ 3 ] );
        std::cout << STATIC::TALK_5_TEXT << std::endl;
        printTalkList( talk_hash[ 4 ] );
        std::cout << STATIC::TALK_OTHER_TEXT << std::endl;
        printTalkList( talk_hash[ 5 ] );
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }


}

void ConfSchedular::printTalkList( talkPtr_list_type& talkList )
{
    try{
        for( talkPtr_list_type::const_iterator iter = talkList.begin(); iter != talkList.end(); iter++ )        {
            std::cout << ( *iter ).get()->getTalkTime() << ( *iter ).get()->getDescription() << std::endl;
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

void ConfSchedular::createTalkObj( std::string& talk_text, bool lightning )
{
    try{
        int duration;
        if( lightning )
        {
            duration = 5;
        }
        else
        {
            std::vector< std::string > token_list;
            std::size_t count;
            Util::getTokens( talk_text, token_list );
            count = std::distance( token_list.begin(), token_list.end() );
            if( token_list[ count - 1 ].length() < 6 )
            {
                duration = atoi( token_list[ count - 1 ].substr( 0, 2 ).c_str() );
            }
            else
            {
                duration = atoi( token_list[ count - 1 ].substr( 0, 3 ).c_str() );
                //simply rejects the talks, whicj are greater than 240.
                if( duration > 240 )
                {
                    return;
                }
            }

        }
        talk_ptr_type talkObj( new Talk( duration, talk_text ) );
        talkptr_list.push_back( talkObj );
        switch( duration ) {
        case 5:
            talkptr_5_list.push_back( talkObj );
            break;
        case 15:
            talkptr_15_list.push_back( talkObj );
            break;
        case 30:
            talkptr_30_list.push_back( talkObj );
            break;
        case 45:
            talkptr_45_list.push_back( talkObj );
            break;
        case 60:
            talkptr_60_list.push_back( talkObj );
            break;
        default:
            talkptr_other_list.push_back( talkObj );
            break;
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void ConfSchedular::SearchPattern( std::string& s )
{
    try{
        boost::regex regex( STATIC::REGEX, boost::regex::icase );
        boost::sregex_iterator it( s.begin(), s.end(), regex );
        boost::sregex_iterator end;
        for(; it != end; ++it ) {
            std::string talk( it->str() );
            //std::cout << it->str() << "\n";
            std::string lightning_talk( talk.substr( talk.length() - 9, talk.length() ) );
            boost::algorithm::to_lower( lightning_talk );
            if( lightning_talk == STATIC::LIGHTNING )
            {
                createTalkObj( s, true );
            }
            else
            {
                createTalkObj( s, false );
            }

        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

int ConfSchedular::processTalkConsole( const ConfSchedular::talk_list_type& talk_list )
{
    try{
        //const char* re = "(.+?)(([ ][0-9]{2,3}min)|([ ]lightning))";
        //boost::regex regex(re,boost::regex::icase);

        for( talk_list_type::const_iterator iter = talk_list.begin(); iter != talk_list.end(); iter++ )
        {
            std::string text( *iter );
            SearchPattern( text );
        }
        processGeneric();
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void ConfSchedular::processGeneric()
{
    try{
        formHasMapTalk();
        //printTalkHashMap();
        scheduledAllTalks();
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

int ConfSchedular::processTalkFile( const std::string& filename )
{
    //std::cout << "processTalkFile " << filename << std::endl;
    try{
        std::ifstream filein( filename.c_str() );
        std::string line;
        //const char* re = "(.+?)(([ ][0-9]{2,3}min)|([ ]lightning))";
        //boost::regex regex(re,boost::regex::icase);
        while( std::getline( filein, line ) )
        {
            SearchPattern( line );
        }
        processGeneric();
        return 0;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

int ConfSchedular::getTalkTotalTime()
{
    try{
        int totalTime = 0;
        for( talkPtr_list_type::const_iterator iter = talkptr_list.begin(); iter != talkptr_list.end(); iter++ )        {
            totalTime += ( *iter ).get()->getTalkTime();
        }
        return totalTime;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void ConfSchedular::addTrack()
{
    try{
        track_ptr_type trackObj( new Track( talkptr_list, talk_hash ) );
        track_list.push_back( trackObj );
        trackObj.get()->addSession();
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void ConfSchedular::printSecheduledTalks()
{
    try{
        int totalTracks = std::distance( track_list.begin(), track_list.end() );
        for( int cnt = 0; cnt < totalTracks; cnt++ )
        {
            std::cout << "Track : " << cnt + 1 << std::endl;
            track_list[ cnt ].get()->printTracks();
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

int ConfSchedular::isPendingTalk()
{
    try{
        int scheduled = 0;
        for( talkPtr_list_type::const_iterator iter = talkptr_list.begin(); iter != talkptr_list.end(); iter++ )        {
            if( ( *iter ).get()->isScheduled() )
            {
                scheduled++;
            }
        }
        int remaingTalks = talkptr_list.size() - scheduled;
        if( remaingTalks > 0 )
        {
            return 0;
        }
        return -1;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

bool ConfSchedular::scheduledAllTalks()
{
    try{
        int totalTime = getTalkTotalTime();
        int noOfTracks = getNoOfTracks( totalTime );
        int noOfTalks = talkptr_list.size();
        if( noOfTracks > 0 )
        {
            while( isPendingTalk() != -1 )
            {
                //add track and track will add new sessions on themselves
                addTrack();
                noOfTracks--;
            }
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

int ConfSchedular::getNoOfTracks( int totalTime )
{
    int noOfTarcks = ( totalTime % ( 180 + 240 ) ) ? 1 : 0;
    noOfTarcks += ( totalTime / ( 180 + 240 ) );
    return noOfTarcks;
}

