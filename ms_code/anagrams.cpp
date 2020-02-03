#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int main() 
{
    string var1a = "Calculate";
    string var1b = "Acute Call";

    string var2a = "Drop Cue";
    string var2b = "Cued Pro";

    string var3a = "carE not";
    string var3b = "raCe On";

    transform(var1a.begin(), var1a.end(), var1a.begin(), ::tolower);
    var1a.erase(std::remove(var1a.begin(), var1a.end(), ' '), var1a.end());

    // lowercase/remove string of var1b for comparison with myVector permutations
    transform(var1b.begin(), var1b.end(), var1b.begin(), ::tolower);
    var1b.erase(std::remove(var1b.begin(), var1b.end(), ' '), var1b.end());

    vector<string>myVector1;
    myVector1.push_back(var1a);

    vector<string>myVector2;
    myVector2.push_back(var1b);

    cout << std::boolalpha << ::is_permutation(var1a.begin(), var1a.end(), var1b.begin()) << "Valid Pattern" << endl;

    if(true) {
        cout << "Valid Pattern" << endl;
    } else {
        cout << "Invalid Pattern" << endl;
    }
    



    // // get permutations of each and push into vector, remove uppercase and spaces for easier comparison
    // transform(var1a.begin(), var1a.end(), var1a.begin(), ::tolower);
    // var1a.erase(std::remove(var1a.begin(), var1a.end(), ' '), var1a.end());
    // cout << var1a << endl;
    // do {
    //     myVector.push_back(var1a);
    // } while (std::next_permutation(std::begin(var1a), std::end(var1a)));

    // cout << "vec size = " << myVector.size() << endl;

    // // lowercase/remove string of var1b for comparison with myVector permutations
    // transform(var1b.begin(), var1b.end(), var1b.begin(), ::tolower);
    // var1b.erase(std::remove(var1b.begin(), var1b.end(), ' '), var1b.end());

    // cout << var1b << endl;

    // for (int i = 0; i < myVector.size(); i++) {
    //     if (var1b.compare(myVector.at(i)) ) {
    //         cout << "Valid Pattern" << endl;
    //         cout << myVector[i] << endl;
    //     } 
    //     else if (i == (myVector.size()-1)) {
    //             cout << "Invalid Pattern" << endl;
    //     } 
    // }
    

    return 0;

}