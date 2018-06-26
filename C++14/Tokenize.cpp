// Tokenizing a string using stringstream
#include <bits/stdc++.h>

using namespace std;

int main() {
    string line = "Tokenize a string";
    // Vector to store tokens
    vector<string> tokens;

    // stringstream class
    stringstream check(line);
    string intermediate;

    // Tokenize w.r.t space ' '
    while(getline(check, intermediate, ' ')) {
        tokens.push_back(intermediate);
    }
    // Print token vector
    for (int i = 0; i < tokens.size(); i++) {
        cout << tokens[i] << "\n";
    }
    return 0;
}
