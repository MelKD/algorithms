#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

#include <string>
#include <map>
#include <iterator>

using namespace std;


int main() {
    string name;
    int n;
    
    cin >> name >> n;
    std::map<std::string, int> mapOne;

    // in this instance string = key, int = value
    // mapOne["sam"] = 99912222;
    // mapOne["tom"] = 11122222;
    // mapOne["harry"] = 12299933;
    
    // Insert values to the map with insert function
    mapOne.insert(std::pair<std::string, int>("John", 1337744));

    mapOne.insert(make_pair("sam", 99912222));
    mapOne.insert(make_pair("tom", 11122222));
    mapOne.insert(make_pair("harry", 12299933));
     

    // Iterate over the map
    for (std::map<std::string, int>::iterator it=mapOne.begin(); it !=mapOne.end(); it++) {
        std::cout << it->first << " -> " << it->second << std::endl;
    }

    return 0;
}
    // Print size of the map
    // std::cout << "map size = " << mapOne.size() << std::endl;

    // // Find a value in the map
    // std::map<std::string, int>::iterator it = mapOne.find("tom");
    // std::cout << "found = " << it->second << std::endl;

    // // Delete a value for a given key
    // mapOne.erase(it);

    // // Check if the map is empty
    // std::cout << "is empty = " << mapOne.empty() << std::endl;  // returns 0 (not empty/false) or 1 (empty/true)


    // // Clear function in map (clears the map similar to vectors)
    // mapOne.clear();
    // std::cout << "map size = " << mapOne.size() << std::endl; // should be zero after clearing the map


    // mapOne.find("sam")

    // map<string, int>iterator it;
    // it = mapOne.begin();
    // while(it != mapOne.end())
    // {
    //     std::cout<<it->first<<" :: "<<it->second<<std::endl;
    //     it++;
    // }
    // for(int i = 0; i < n; i++) {
    //     cout << it->first << "=" << it->second << endl;
    // }
     
//     return 0;
// }
// int main() {


//     int n;
//     cin >> n;
//     std::map<std::string, int> mapOne;
//     // vector<map> phoneBook;

//     mapOne.find("sam")

//     // map<string, int>iterator it;
//     // it = mapOne.begin();
//     // while(it != mapOne.end())
//     // {
//     //     std::cout<<it->first<<" :: "<<it->second<<std::endl;
//     //     it++;
//     // }
//     // for(int i = 0; i < n; i++) {
//     //     cout << it->first << "=" << it->second << endl;
//     // }
