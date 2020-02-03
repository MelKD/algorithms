#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>
#include <sstream>
#include <istream>
#include <stdio.h>

using namespace std;


int main() 
{
    string input;
    char toMin[], toMax[], toValidate[];

    vector<char>holdInput;
    vector<int>min;
    vector<int>max;
    vector<int>validate;

    getline(cin, input);

    // tokenize input and hold in a string
    istringstream iss(input);
    do
    {
        string subs;
        iss >> subs;
        holdInput.push_back(subs);
    } while (iss);

    // convert push each sub as int to respective int vectors 
    for (int i = 0; i < 3; i++) {
        if(i == 0) {
            toMin = holdInput[i];
        } else if (i == 1) {
            toMax = holdInput[i];
        } else {
            toValidate = holdInput[i];
        }
        // holdInput[i] = stoi(input);
    }
    // test split
    // cout << toMin << endl;
    // cout << toMax << endl;
    // cout << toValidate << endl;

    // for (int i = 0; i < 3; i++) {
    //     string token;
    //     string delimiter = ".";
    //     if(i == 0) {
    //         string splits = toMin;
    //         token = splits.substr(0, splits.find(delimiter));
    //     } else if (i == 1) {
    //         string splits = toMax;
    //         token = splits.substr(0, splits.find(delimiter));
    //     } else {
    //         string splits = toValidate;
    //         token = splits.substr(0, splits.find(delimiter));
    //     }
    //     // holdInput[i] = stoi(input);

    //     cout << "Token " << token << endl;
    // }
    
    for (int i = 0; i < 3; i++) {
        // string token;
        char * split;
        if(i == 0) {
            split = strtok (toMin,".");
            while (split != NULL)
            {
                printf ("%s\n",split);
                split = strtok (NULL, ".");
                cout << split << endl;
            }
        } 
        // else if (i == 1) {
        //     string splits = toMax;
        //     token = splits.substr(0, splits.find(delimiter));
        // } else {
        //     string splits = toValidate;
        //     token = splits.substr(0, splits.find(delimiter));
        // }
        // holdInput[i] = stoi(input);

        // cout << "Token " << token << endl;
    }
    
    // check num elements in validate to determine 'InValid' or not


    
    
    // for (int i = 0; i < 3; i++) {
    //     // iss >> input;
    //     holdInput[i] = stoi(input);
    //     cout << holdInput[i] << endl;
    // }

    // std::stoi( input );




    // for (int i = 0; i < toValidate.length(); i++) {
    //     cout << min[i] << endl;
    //     cout << max[i] << endl;
    //     cout << toValidate[i] << endl;
    // }

    return 0;
}