#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;


int main() 
{
    string check1 = "glenelg";
    string check2 = "rare";
    string temp;

    string rev [check1.length()];
    vector<string>myVector;

    // reverse the string
    int count = 0;
    for (int i = check1.length(); i >= 0; i--) {
        rev[count] = check1.substr(i, i);
        cout << rev[count] << endl;
        count++;
    }

    // compare original to reversed
    // for (int i = 0; i < check1.length(); i++) {
    //     temp = check1.substr(i, i+1);
    //     if(temp == rev[i]) {
    //         // temp = check1.at(i);
    //         cout << temp << endl;
    //         myVector.push_back(temp);
    //     }
    // }

    // for (int i = 0; i < check1.length(); i++) { 
    //     cout << myVector[i];
    // }    

    return 0;
}