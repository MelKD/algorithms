// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

int factorial(int n);

int main() {

    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    
    return 0;
}

int factorial(int n) {
    if(n == 1) {
        return 1;
    }
    else
    {
        return (n* factorial(n-1));
    }
}

// Alternate
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    else if( n == 1) {
        return 1;
    }
    else
    {
        return (n* factorial(n-1));
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */     
    int n;
    cin >> n;
    
    int result = factorial(n);
    cout << result << endl;
    
    
    return 0;
}