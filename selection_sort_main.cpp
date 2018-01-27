#include <iostream>
#include <string>

using namespace std;

int main ()
{
    int lst[7] = {4,9,7,1,3,6,5};
    int n = sizeof(lst) / lst[0];

    for (int i = 0; i < n; i++)
    {
        int index = i;
        for (int j = i+1; j < n; j++)
        {
            if (lst[j] < lst[index]) {
                index = j;
            }
        }
        if(index != i) {
            swap(lst[i], lst[index]);
        }
    }

    cout << "Your sorted array: " << endl;
    int endline = n-1;
    int newNum;
    for (int i = 0; i < n; i++)
    {
        newNum = lst[i];
        if (i == endline) {
            cout << newNum << endl;
        } else {
            cout << newNum << ", ";
        }
    }

    return 0;
}