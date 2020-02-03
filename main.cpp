#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_map> //hash table
#include <queue> // priority queue
#include <cmath> // use abs when looing at duplicates/hashing
#include <stack> // if using a stack
#include <list>  // an efficient option for handling lists
// #include <bits/stdc++.h>

using namespace std;


int main()
{
    std::map<int, std::string>allNums;
    std::map<int, std::string>::const_iterator it=allNums.begin();
    int standNum[18] = {1,2,3,4,5,6,7,8,9,10,40,50,90,100,400,500,900,1000};
    int romNum[18] = {"I","II","III","IV","V","VI","VII","VIII","IX","X","XL","L","XC","C","CD","D","CM","M"};

    for(int i = 0; i < 18; i++) {
        allNums.insert(make_pair(standNum[i], romNum[i]));
    }

    
    return 0;
}


//  int leng = ip_array.size();
//     for(int i = 0; i < leng; i++) {
//         if(! (ip_array.at(i)) >= '0' && (ip_array.at(i)<= '9' || ip_array.at(i) == ':') {
//             cout
              
//         }
//     }
//    if(ip_array.size() < 7) {
//         cout << "Neither" << endl;
//     }