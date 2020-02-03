// Create an O(n log n) solution to return
// indices of 2 numbers that sum to a target

// Assumes a sorted array

#include <iostream>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    int arr[] = {2,7,11,15};
    int arrSize;
    arrSize = (sizeof(arr)/4)-1;

    int i = 0;
    int j = arrSize;
    int target = 10;

    do {
        if(arr[i]+arr[j]== target) {
            cout << "(" << i << ", " << j << ")" << endl;
            return (i,j);
        }
        else if(arr[i]+arr[j] < target) {
            i++;
        } 
        else {
            j--;
        }
    }
    while (i < j);

    return 0;
}