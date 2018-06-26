// Convert string to number and vice-versa
#include <iostream>
#include <sstream> // for stringstream
#include <string> // for string
// We're first converting number to string

using namespace std;

int main() {
    int num = 2018;
    // declare output stringstream
    ostringstream out_str;
    out_str << num;
    // convert number to string
    string x = out_str.str();
    cout << "String is: ";
    cout << x << endl;

    cout << "Using to_string()";
    int i_val = 20;
    float f_val = 30.50;
    string stri = to_string(i_val);
    string strf = to_string(f_val);
    cout << "\n" << "The integer in string is: ";
    cout << stri << endl;
    cout << "The float in string is: ";
    cout << strf << endl;
    return 0;
}
