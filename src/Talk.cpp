#include <Talk.h>
Talk::Talk( int const& min, std::string const& description ) : time_in_min( min ), short_description( description ), schedule( false )
{
}

int Talk::getTalkTime()
{
    return time_in_min;
}

std::string& Talk::getDescription()
{
    return short_description;
}

bool Talk::isScheduled()
{
    return schedule;
}

std::string& Talk::getTimeFormatString()
{
    return time_format_string;
}

void Talk::setTimeFormatString( std::string& timeFormated )
{
    time_format_string = timeFormated;
}

