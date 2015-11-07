#include <Track.h>
Track::Track( const Session::talkPtr_list_type& talkList, const Session::talk_hash_type& talkHash ) : talk_list( talkList ), talk_hash( talkHash )
{
}

Track::session_ptr_type& Track::getSession( Session::sessionType type )
{
}

void Track::createSession( int maxTime, Session::sessionType sessionType, const Session::talkPtr_list_type& talkList, const Session::talk_hash_type& talkHash )
{
    try{
        session_ptr_type session( new Session( maxTime, sessionType, talk_list, talk_hash ) );
        session.get()->addTalk();
        session_list.push_back( session );
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

void Track::printTracks()
{
    try{
        int sessionCount = std::distance( session_list.begin(), session_list.end() );
        for( int cnt = 0; cnt < sessionCount; cnt++ ) {
            session_list[ cnt ].get()->printSessionTalk();
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }


}

int Track::getPendingTalkTime()
{
    try{
        int pendingTime = 0;
        for( Session::talkPtr_list_type::const_iterator iter = talk_list.begin(); iter != talk_list.end(); iter++ )
        {
            if( !( *iter ).get()->isScheduled() )
            {
                pendingTime += ( *iter ).get()->getTalkTime();
            }
        }
        return pendingTime;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void Track::addSession()
{
    try{
        if( session_list.size() == 0 && getPendingTalkTime() > 0 )
        {
            //create the morning session
            //std::cout << " Created morning sesison " << std::endl;
            createSession( 180, Session::MORNING, talk_list, talk_hash );
        }
        if( getPendingTalkTime() > 0 )
        {
            //create tehe evening session
            //std::cout << "created evening session " << std::endl;
            createSession( 240, Session::EVENING, talk_list, talk_hash );
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

