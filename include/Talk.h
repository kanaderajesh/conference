#ifndef TALK_H_
#define TALK_H_
#include <Deps.h>

class Talk {
private:
    int time_in_min;
    std::string short_description;
    bool schedule;
    std::string time_format_string;
public:
    Talk( int const& min, std::string const& description );
    int getTalkTime();
    std::string& getDescription();
    bool isScheduled();
    std::string& getTimeFormatString();
    void setTimeFormatString( std::string& timeFormated );
    void markScheduled()
    {
        schedule = true;
    }

};
#endif
