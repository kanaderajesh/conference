#ifndef TRACK_H_
#define TRACK_H_
#include <Deps.h>
#include "Session.h"
class Track {
public:
    typedef boost::shared_ptr< Session > session_ptr_type;
    typedef std::vector< session_ptr_type > session_ptr_list;
private:
    session_ptr_list session;
    int mornSession, eveSession;
    const Session::talkPtr_list_type& talk_list;
    const Session::talk_hash_type& talk_hash;
    session_ptr_list session_list;
    void createSession( int maxTime, Session::sessionType sessionType, const Session::talkPtr_list_type& talkList, const Session::talk_hash_type& talkHash );
    int getPendingTalkTime();
public:
    Track( const Session::talkPtr_list_type& talkList, const Session::talk_hash_type& talkHash );
    session_ptr_type& getSession( Session::sessionType type );
    void addSession();
    void printTracks();
};
#endif
