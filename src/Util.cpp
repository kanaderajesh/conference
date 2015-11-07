#include "Util.h"
void Util::getTokens( std::string& inputString, std::vector< std::string >& token_list )
{
    try{
        typedef boost::tokenizer< boost::char_separator< char > >
        tokenizer;
        boost::char_separator< char > sep( " " );
        tokenizer tokens( inputString, sep );
        for( tokenizer::iterator tok_iter = tokens.begin(); tok_iter != tokens.end(); ++tok_iter )
        {
            token_list.push_back( *tok_iter );
        }

    }catch( ... )
    {
        throw std::string( "Error in getTokens" );
    }
}

