#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Basic solution
// int numJewelsInStones(string J, string S) {
//   int jewels = 0;
//   // sort the string, possibly optimise so that only the J values are searched in S
//   sort(J.begin(), J.end()); 
//   sort(S.begin(), S.end()); 
//   for(int i = 0; i < J.length(); i++)
//   {            
//       for(int k = 0; k < S.length(); k++)
//       {
//           if(J.at(i) == S.at(k))
//           {
//               jewels++;
//           }
//       }            
//   }
//   return jewels;
// }

// Optimised solution
int numJewelsInStones(string J, string S) {
  int jewels = 0;
  sort(J.begin(), J.end()); 
  sort(S.begin(), S.end()); 

  // implement a hash map on S and then look up from J
  int count = 0;
  map<string, int> myMap;
  for(int k = 0; k < S.length(); k++)
  {
    // if(k == 0)
    // {
      
    // } 
    count++;   
    if(k > 0 && (S.at(k) != S.at(k-1)))
    {
      string sVal;
      sVal.push_back(S.at(k-1));
      myMap.insert(pair<string, int> (sVal, count));
      count = 0;
    }
  }


  // sort the string, so that only the J values are searched in S
  for(int i = 0; i < J.length(); i++)
  {            
      for(int k = 0; k < S.length(); k++)
      {
          if(J.at(i) == S.at(k))
          {
              jewels++;
          }
      }            
  }
  return jewels;
}


int main()
{
  string J = "aA";
  string S = "aAAbbbb";

  int jewels = numJewelsInStones(J, S);
  cout << jewels << endl;
  return 0;
}