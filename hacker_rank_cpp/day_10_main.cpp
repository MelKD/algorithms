#include <bits/stdc++.h>
#include <iostream>       
#include <string>       
#include <bitset>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    // get the binary version of the decimal int
    std::bitset<16> getPos(n);
    
    // convert to string
    string binStr;
    binStr = getPos.template to_string<char, 
    char_traits<char>, allocator<char> >( );
    
    char zero = '0';
    int tempones = 0;
    int maxones = 0;
    
    for(int i = 0; i < binStr.length(); i++)
    {
        if(binStr[i] != zero) {
            tempones += 1;
            maxones = tempones;
        }
        else {
            tempones = 0;
        }
        
        if (tempones > maxones) {
            maxones = tempones;
        }
    }
    
    cout << maxones << endl;

    return 0;
}