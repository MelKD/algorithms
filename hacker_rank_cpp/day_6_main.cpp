#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string> 

using namespace std;


int main() {
    int T; 
    string S;
    int N;
    string temp;
    vector <string> words; 

    cin >> T;
    for(int i = 0; i < T; i++) {
        cin >> S;
        words.push_back(S);
    }

    // get all string segs at odd nums and cout all even vals
    for(int k = 0; k < T; k++) {
        N = words[k].length();
        S = words[k];
        for (int i = 0; i < N; i++) {
            if(i%2 == 0) {
                temp = S.at(i);
                cout << temp;
            }
        }
        cout << " " ;
        for(int j = 0; j < N; j++) {
            if(j%2 == 1) {
                temp = S.at(j);
                cout << temp;
            }           
        }

    cout << " " << endl;
    }

    return 0;
}
