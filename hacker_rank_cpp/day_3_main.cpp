#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    // If N is even and in the inclusive range of 2 to 5, print Not Weird
    if ( N%2 == 0 && 2 <= N && N <= 5 ) {
        cout << "Not Weird" << endl;
    }
    // If N is even and in the inclusive range of 6 to 20, print Weird
    else if ( N%2 == 0 && 6 <= N  && N <= 20 ) {
        cout << "Weird" << endl;
    }
    // If N is even and greater than , print Not Weird
    else if ( N%2 == 0 && N > 20 ) {
        cout << "Not Weird" << endl;
    }
    // If N is odd, print Weird
    else if ( N%2 == 1) {
        cout << "Weird" << endl;
    }

    
    return 0;
}