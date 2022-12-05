#include<iostream>
#include<vector>
#include<sstream>
#include<algorithm>
#include<cstdlib>
#include<ctime>

using namespace std;

namespace Util{
    /** @brief The array of the strings. */
    using StrVec = std::vector<std::string>;

    /**
     * @brief Separate the strings.
     * @param text The string you want to separate.
     * @param delim The delim string. ( def: " " )
     * @return The object of the std::Vector for std::string, which was separated.
    */
    StrVec split( const std::string& text, const std::string& delim = std::string(" ") ){
        StrVec res;
        int end = 0, begin = 0, n = 0;
        while( true ){
            end   = text.find( delim, begin );
            if( end == std::string::npos ){
                res.push_back( text.substr( begin, (text.size() - begin) ) );
                break;
            }
            n = (end - begin);
            res.push_back( text.substr( begin, n ) );
            begin = end + 1;
        }
    return res;
    }

    /**
     * @brief Convert the data to the string.
     * @param val The data you want to convert.
     * @return The string which was converted from the data.
     */
    template<typename T> std::string ToString( T val ){
        std::stringstream ss;
        ss << val << flush;
    return ss.str();
    }
}

namespace Original{
    int AtoiEx( const std::string& str ){
        int num = std::atoi( str.c_str() );
    return num;
    }
}


int main( int argc, char** argv ){
    // Define the N.
    std::srand( (size_t)time( NULL ) );
    int n = std::rand() % 10 + 1;

    int counter = 0;
    while( true ){
        std::string str;
        cout << "Enter the number(1-10):" << flush;
        std::getline( cin, str );
        if( str.compare( "q" ) == 0 ) break;

        int x = Original::AtoiEx( str );
        if( n == x ){
            cout << "Hit!" << endl;
            break;
        }else if( n > x ){
            cout << "N is higher than " << x << "." << endl;
        }else{
            cout << "N is lower than " << x << "." << endl;
        }
        counter++;
    }

    cout << "Time: " << counter << endl;
return 0;
}
