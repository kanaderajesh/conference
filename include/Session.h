#ifndef SESSION_H_
#define SESSION_H_
#include <Deps.h>
#include <Talk.h>
#include <Util.h>
class Session {
public:
    typedef boost::shared_ptr< Talk > talk_ptr_type;
    typedef std::vector< talk_ptr_type > talkPtr_list_type;
    typedef std::vector< talkPtr_list_type > talk_hash_type;
    typedef std::vector< int > vec_int_type;
    typedef std::vector< vec_int_type > subset_type;
    subset_type subset_list;
    enum sessionType { MORNING, EVENING };
private:
    talkPtr_list_type session_talk_list;
    void printSession();
    int sessionMaxTime;
    int sessionTotalTime;
    sessionType sessiontype;
    const talkPtr_list_type& talk_list;
    const talk_hash_type& talk_hash;
    talkPtr_list_type sessionTalkList;
    void printVector( std::vector< int >& v );
    void ss( std::vector< int >& list, int n, std::vector< int > current, int sum );
    int getFirstTalkWithMatchDurationFromHash( int duration, talk_ptr_type& talkRef );
    void processMorningSession();
    void processEveningSession();
    void formatTalk( std::string& str, int totalTime, Session::sessionType& type );
    int fillUnScheduledTalkDuration( int maxIteration ,int maxTime );
    int getMorningSession( std::vector< int >& );
    void formatStringAndInsert( talk_ptr_type talk );
    talk_ptr_type lunch;
    talk_ptr_type network;
	talk_ptr_type breaktalk;
public:
    Session( int maxtime, Session::sessionType sessionType, const talkPtr_list_type& talkList, const talk_hash_type& talkHash );
    int getSessionMaxTime()
    {
        return sessionMaxTime;
    }

    int getSessionTotalTime()
    {
        return sessionTotalTime;
    }

    bool getAvailableSlot()
    {
        return sessionMaxTime - sessionTotalTime;
    }

    sessionType getSessionType()
    {
        return sessiontype;
    }

    void addTalk();
    void printSessionTalk();
};
#endif

