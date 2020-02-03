#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int fibonacci(int n) {
    if(n < 2) {
        return n;
    }
    else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
    //Fn - 1 + Fn - 2
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int fib;
    cin >> fib;
    
    int value = fibonacci(fib);
    
    cout << value << endl;
    
    return 0;
}