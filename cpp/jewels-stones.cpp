#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Basic solution
int numJewelsInStones(string J, string S) {
  int jewels = 0;
  // sort the string, possibly optimise so that only the J values are searched in S
  sort(J.begin(), J.end()); 
  sort(S.begin(), S.end()); 
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

// Optimised solution


int main()
{
  // string J = "aA";
  // string S = "aAAbbbb";
  // string J = "z";
  // string S = "ZZ";

  string J = "bcd";
  string S = "cba";

  int jewels = numJewelsInStones(J, S);
  cout << jewels << endl;
  return 0;
}