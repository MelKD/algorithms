#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

#define MAX 100
#define NIL -1
int lookup[MAX];

using namespace std;

// Helper to manage optimising (memoization) process
void _initialize()
{
  int i;
  for (i = 0; i < MAX; i++)
    lookup[i] = NIL;
}

// function for finding nominated Fibonacci number
int findFib(int n)
{
   if (lookup[n] == NIL)
   {
      if (n <= 1)
         lookup[n] = n;
      else
         lookup[n] = findFib(n-1) + findFib(n-2);
   }
 
   return lookup[n];
}

// PARTIALLY WORKS
// Not all test cases passed with current version (could fail on large nums)

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n; // search for this
    string n1; // these to help with cin
 
    // cin as long as numbers being input
    while (getline(std::cin, n1))
    {
        // Use memoization process to optimise look up for Fib nums
        n = std::stoi(n1);
        _initialize();
        cout << findFib(n) << endl;
        if (n1.empty()) {
            break;              
        }
      
    }
    
    return 0;
}