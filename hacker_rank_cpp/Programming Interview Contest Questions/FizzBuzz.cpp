#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    // 'n' is given via StdIn, write out fizz and/or buzz and numbers  
    int n;
    
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        if( (i%3 == 0) && (i%5 == 0) ) {
            cout << "FizzBuzz" << endl;
        }
        else if(i%3 == 0 ) {
            cout << "Fizz" << endl;
        }
        else if(i%5 == 0 ) {
            cout << "Buzz" << endl;
        }
        else {
            cout << i << endl;
        }
    
    }
    
    return 0;
}