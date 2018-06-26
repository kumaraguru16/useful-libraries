// STL - Vectors.
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Avoid use of ' ' single commas.
    vector<string> colours;
    colours.push_back("Black");
    colours.push_back("Blue");
    colours.push_back("Red");
    colours.push_back("Yellow");

    for (int i = 0; i < colours.size(); i++) {
        cout << colours[i] << "\n";
    }

    return 0;
}
