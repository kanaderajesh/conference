
#ifndef CONFSCHEDULAR_H_
#define CONFSCHEDULAR_H_

#include "Deps.h"
#include "Talk.h"
#include "Util.h"
#include "Track.h"
namespace STATIC
{
    static const std::string TALK_60_TEXT = "Talk 60 min";
    static const std::string TALK_45_TEXT = "Talk 45 min";
    static const std::string TALK_30_TEXT = "Talk 30 min";
    static const std::string TALK_15_TEXT = "Talk 15 min";
    static const std::string TALK_5_TEXT = "Talk 5 min";
    static const std::string TALK_OTHER_TEXT = "Talk greater than 60";
    static const char* REGEX = "(.+?)(([ ][0-9]{2,3}min)|([ ]lightning))";
    static const std::string LIGHTNING = "lightning";
}
class ConfSchedular {
public:
    typedef std::vector< std::string > talk_list_type;
    typedef boost::shared_ptr< Talk > talk_ptr_type;
    typedef std::vector< talk_ptr_type > talkPtr_list_type;
    typedef std::vector< talkPtr_list_type > talk_hash_type;
    typedef boost::shared_ptr< Track > track_ptr_type;
    typedef std::vector< track_ptr_type > trackPtr_list_type;

private:
    void SearchPattern( std::string& s );
    int getTalkTotalTime();
    int getNoOfTracks( int totalTime );
    void processGeneric();
    void addTrack();
    talkPtr_list_type talkptr_list;
    talkPtr_list_type talkptr_60_list;
    talkPtr_list_type talkptr_45_list;
    talkPtr_list_type talkptr_30_list;
    talkPtr_list_type talkptr_15_list;
    talkPtr_list_type talkptr_5_list;
    talkPtr_list_type talkptr_other_list;

    trackPtr_list_type track_list;
    talk_hash_type talk_hash;
    void createTalkObj( std::string& talk_list, bool lightning );
    int isPendingTalk();
    void printTalkList( talkPtr_list_type& talkList );
    bool scheduledAllTalks();
    void formHasMapTalk();
    void printTalkHashMap();

public:
    ConfSchedular();
    int processTalkFile( const std::string& filename );
    int processTalkConsole( const ConfSchedular::talk_list_type& talk_list );
    void printSecheduledTalks();
};
#endif
