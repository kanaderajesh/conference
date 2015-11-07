#include <Session.h>
Session::Session( int maxtime, Session::sessionType sessionType, const talkPtr_list_type& talkList, const talk_hash_type
                  & talkHash ) : sessionMaxTime( maxtime ), sessiontype( sessionType ), talk_list( talkList ), talk_hash( talkHash )
{
    //create two Talks like Lunch and Network activity, will be used in the sessions.
    talk_ptr_type lunchObj( new Talk( 60, "Lunch" ) );
    talk_ptr_type networkObj( new Talk( 60, "Networking Event" ) );
	talk_ptr_type breakObj( new Talk( 10 , "Break" ) );
    lunch = lunchObj;
    network = networkObj;
	breaktalk = breakObj;


}

void Session::printSessionTalk()
{
    try{
        for( talkPtr_list_type::const_iterator iter = sessionTalkList.begin(); iter != sessionTalkList.end(); iter++ )
        {
            std::cout << ( *iter ).get()->getTimeFormatString() << std::endl;
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

/**************************************************************************
 ****   Subset sum : Print all subsets with required sum                 ****
 ****   http://www.edufyme.com/code/?id=45c48cce2e2d7fbdea1afc51c7c6ad26 ****
 ***************************************************************************/
void Session::printVector( std::vector< int >& v )
{
    std::vector< int > setData;
    for( int i = 0; i < v.size(); i++ )
    {
        //std::cout << v[ i ] << " ";
        setData.push_back( v[ i ] );
    }
    //std::cout << std::endl;
    subset_list.push_back( setData );
}

void Session::ss( std::vector< int >& list, int n, std::vector< int > current, int sum )
{
    if( sum == 0 )
    {
        printVector( current ); return;
    }

    if( n == 0 )
    {
        return;
    }

    if( list[ n - 1 ] <= sum )
    {
        ss( list, n - 1, current, sum );
        current.push_back( list[ n - 1 ] );
        ss( list, n - 1, current, sum - list[ n - 1 ] );
    }
    else
    {
        ss( list, n - 1, current, sum );
    }
}

int Session::fillUnScheduledTalkDuration( int maxIteration , int maxTime )
{
    try{

        if( subset_list.size() != 0 )
        {
            return maxIteration;
        }
        if( maxIteration == talk_list.size() )
        {
            return maxIteration;
        }
        vec_int_type set_of_num, curr;
        int totalTime = 0;
        int iter = 0;
        for( int cnt = 0; cnt < talk_list.size(); cnt++ ) {
            if( !talk_list[ cnt ].get()->isScheduled() )
            {
                totalTime += talk_list[ cnt ].get()->getTalkTime();
                set_of_num.push_back( talk_list[ cnt ].get()->getTalkTime() );
                iter++;
                if( iter == maxIteration )
                {
                    break;
                }

            }
        }
        ss( set_of_num, set_of_num.size(), curr, 180 );
        return fillUnScheduledTalkDuration( maxIteration + 1,180 );
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

int Session::getMorningSession( std::vector< int >& vec )
{
    try{
        subset_list.clear();
        std::cout << "no of iteration : " << fillUnScheduledTalkDuration( 1,180 ) << std::endl;
		std::cout<< "Size of first list " << subset_list.size() << std::endl;

		subset_type to_vector;
        std::copy(subset_list.begin(), subset_list.end(),
              std::back_inserter(to_vector));
		subset_list.clear();
        /*if( subset_list.size() > 0 )
        {
            return 0;
        }*/

		subset_list.clear();
        std::cout << "no of iteration : " << fillUnScheduledTalkDuration( 1,210 ) << std::endl;
        if( subset_list.size() > 0 )
        {
			if ( to_vector.size() > subset_list.size())
				std::cout << " 210 have mors talks" << std::endl;
            return 0;
        }		
		
        return -1;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }


}

int Session::getFirstTalkWithMatchDurationFromHash( int duration, Session::talk_ptr_type& talkRef )
{
    try{
        int indexToLook = 0;
        switch( duration )
        {
        case 60:
            indexToLook = 0;
            break;
        case 45:
            indexToLook = 1;
            break;
        case 30:
            indexToLook = 2;
            break;
        case 15:
            indexToLook = 3;
            break;
        case 5:
            indexToLook = 4;
            break;
        default:
            indexToLook = 5;
            break;
        };
        for( int cnt = 0; cnt < talk_hash[ indexToLook ].size(); cnt++ )
        {
            if( !talk_hash[ indexToLook ][ cnt ].get()->isScheduled() )
            {
                talkRef = talk_hash[ indexToLook ][ cnt ];
                return 1;
            }
        }
        return -1;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void Session::processMorningSession()
{
    try{
        talk_ptr_type talk;
        int remainingTime = sessionMaxTime;
        std::vector< int > vec;
        sessionTotalTime = 0;
        //if the sum subset algorith, not work, then move to default processing mode
        if( getMorningSession( vec ) != -1 )
        {
            for( int i = 0; i < subset_list[ 0 ].size(); i++ )
            {

                int duration = subset_list[ 0 ][ i ];
                if( getFirstTalkWithMatchDurationFromHash( duration, talk ) != -1 )
                {
                    formatStringAndInsert( talk );
                    talk.get()->markScheduled();
                    sessionTotalTime += talk.get()->getTalkTime();
                    sessionTalkList.push_back( talk );
					/*formatStringAndInsert( breaktalk );
					sessionTalkList.push_back( breaktalk );
					sessionTotalTime += 10;
					*/
                }
            }
            formatStringAndInsert( lunch );
            sessionTalkList.push_back( lunch );
        }
        else
        {
            processEveningSession();
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

void Session::formatTalk( std::string& displaystr, int totalTime, Session::sessionType& type )
{
    try{
        int currtimehour, currtimemin, starttime;
        std::string ampm_val;
        if( type == Session::MORNING )
        {
            ampm_val = "AM";
            starttime = 9;
        }
        else
        {
            ampm_val = "PM";
            starttime = 1;
        }
        currtimehour = starttime + ( totalTime / 60 );
        currtimemin = ( totalTime % 60 );
        //Talk header string cannot be more than 80 char
        char str[ 100 ];
        sprintf( str, "%02d:%02d%s", currtimehour, currtimemin, ( ( currtimehour == 12 ) ? "PM" : ampm_val.c_str() ) );
        displaystr.assign( str );

    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

void Session::formatStringAndInsert( talk_ptr_type talk )
{
    try{
        std::string foramattedStr;
        formatTalk( foramattedStr, sessionTotalTime, sessiontype );
        foramattedStr = foramattedStr + " " + talk.get()->getDescription();
        talk.get()->setTimeFormatString( foramattedStr );

    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

void Session::processEveningSession()
{
    try{
        int remainingTime = sessionMaxTime;
        for( talkPtr_list_type::const_iterator iter = talk_list.begin(); iter != talk_list.end(); iter++ )
        {
            if( !( *iter ).get()->isScheduled() && ( *iter ).get()->getTalkTime() <= remainingTime )
            {
                formatStringAndInsert( *iter );
                sessionTotalTime += ( *iter ).get()->getTalkTime();
                remainingTime -= ( *iter ).get()->getTalkTime();
                ( *iter ).get()->markScheduled();
                sessionTalkList.push_back( ( *iter ) );
            }
        }
        if( sessiontype == Session::EVENING )
        {
            if( sessionTotalTime > 180 and sessionTotalTime < 240 )
            {
                sessionTotalTime = 240;
            }
            if( sessionTotalTime <= 180 )
            {
                sessionTotalTime = 180;
            }
            //start network activity at 4 PM
            formatStringAndInsert( network );
            sessionTalkList.push_back( network );


        }
        if( sessiontype == Session::MORNING )
        {
            if( sessionTotalTime < 180 )
            {
                sessionTotalTime = 180;
            }

            formatStringAndInsert( lunch );
            sessionTalkList.push_back( lunch );
        }
        //std::cout << " sessionTotalTime " << sessionTotalTime << std::endl;
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }
}

void Session::addTalk()
{
    try{

        if( sessiontype == Session::MORNING )
        {
            processMorningSession();
        }
        else
        {
            processEveningSession();
        }
    }catch( const std::exception& e ) {
        std::cout << e.what() << std::endl;
        throw e;
    }

}

