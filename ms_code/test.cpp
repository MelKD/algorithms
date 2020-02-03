#include <iostream>
#include <sstream>
#include <istream>
#include <vector>
#include <string>

using namespace std;

int main() {

    // string hw = "Hello";

    // cout << hw.substr(0,4) << endl;
    // cout << hw.substr(2,3) << endl;
    
    string input = "Where's my coffee?";
    vector<string>holdInput;

    istringstream iss(input);
    do {
        string subs;
        iss >> subs;
        holdInput.push_back(subs);
    } while(iss);

    for(int i = holdInput.size(); i > 0; i--) {
        cout << holdInput.at(i-1) << " ";
    }
    cout << " " << endl;

    return 0;
}