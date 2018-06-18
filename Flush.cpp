/*! Introduction to Flush.
 *
 * flush or std::endl() both are used to flush streams.
 * flush means to transfer data stored in temporary memory to 
 * computer memory. Let's have a look at example. */

#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main() {
    /*! Block 1: Code will output 1 2 3 4 5 at same time.
     *  It will directly output the buffer memory. So, all numbers are 
     *  displyed at the same time. */
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
        // Use chrono C++ library to avoid sleep_for error.
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;
    /*! Block 2: Code will output 6 7 8 9 10 one-by-one. 
     *  It will write to computer's permanent memory from buffer memory. 
     *  So, numbers will appear one-by-one. */
    for (int i = 6; i <= 10; i++) {
        cout << i << " " << flush;
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;

    return 0;
}
