/*! Using boost::lexical_cast<type> from boost library
 *  in C++14. Conversion of number to string */
#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

using namespace std;

int main() {
    float f_val = 10.5;
    int i_val = 17;

    // convert float to string
    string strf = boost::lexical_cast<string>(f_val);
    // convert int to string
    string stri = boost::lexical_cast<string>(i_val);
    cout << "The float value in string is: ";
    cout << strf << endl;
    cout << "The integer value in string is: ";
    cout << stri << endl;

    return 0; 
}
