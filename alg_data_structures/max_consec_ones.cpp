#include <iostream>
#include <vector>


using namespace std;

int main () 
{


    return 0;
}



// Naive solutions -> runs in O(n^2) time
// int main ()
// {
//     int binaryStr[] = {1,1,0,1,1,1};

//     int maxones = 0;
//     for(int i = 0; i < (sizeof(binaryStr)/4); i++)
//     {
//         if(binaryStr[i] !=0) {
//             maxones = maxones + 1;
//         }
//         else if (binaryStr[i] == 0) {
//             maxones = 0;
//         }
//     }
//     cout << maxones << endl;

//     return 0;
// }