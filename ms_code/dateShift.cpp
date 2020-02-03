#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <limits>
#include <sstream>
#include <istream>
#include <stdio.h>

using namespace std;


int main() 
{
    string input;
    vector<string>holdInput;

    string date, current, newForm;

    char m = 'm';
    char d = 'd';
    char y = 'y';
    
    getline(cin, input);

    // seperate into substrings for date, current and new
    istringstream iss(input);
    do
    {
        string subs;
        iss >> subs;
        holdInput.push_back(subs);
    } while (iss);

    // create strings based on seperation above
    int leng = holdInput.size();
    for (int i = 0; i < leng; i++) {
        if ( i == 0) {
            date = holdInput[i];
        }
        else if ( i == 1) {
            current = holdInput[i];
        }
        else if ( i == 2) {
            newForm = holdInput[i];
        }
    }

    // capture new symbol from newForm
    int currLeng = current.size();
    string newsymbol;
    for (int i = 0; i < currLeng; i++) {
        if ( (newForm.at(i) != m) && (newForm.at(i) != d) && (newForm.at(i) != y)) {
            newsymbol = newForm.at(i);
        }        
    }

    // use nums to find substrings to construct output
    string month, day, year;
    string finalDate;

    // based on current form, find the substrings to get data from date string
    int mbegin, mend, dbegin, dend, ybegin, yend;
    for (int i = 0; i < currLeng; i++) {
        if ( current.at(i) == m) {
            mbegin = i;
            if (mbegin == i) {
                mbegin = i-1;
                mend = i+1;
                mend = mend-mbegin;
            }
        }
        else if ( current.at(i) == d) {
            dbegin = i;
            if (dbegin == i) {
                dbegin = i-1;
                dend = i+1;
                dend = dend-dbegin;
            }
        }
        else if ( current.at(i) == y) {
            yend = i;
            if (yend == i) {
                ybegin = i-3;
                yend = yend-(ybegin-1);
            }
        }
    }

    month = date.substr(mbegin,mend);
    day = date.substr(dbegin,dend);
    year = date.substr(ybegin,yend);


    // based on new form, find values to order data in new format
    // int mbegin, mend, dbegin, dend, ybegin, yend;
    for (int i = 0; i < currLeng; i++) {
        if ( newForm.at(i) == m) {
            mbegin = i;
        }
        else if ( newForm.at(i) == d) {
            dbegin = i;
        }
        else if ( newForm.at(i) == y) {
            ybegin = i;
        }
    }

    // Set in correct order to process output
    if ((mbegin < dbegin) && (mbegin < ybegin) && (dbegin < ybegin) ) {
        cout << month << newsymbol << day << newsymbol << year << endl;
    }
    else if ((mbegin < dbegin) && (mbegin < ybegin) && (ybegin < dbegin)) {
        cout << month << newsymbol << year << newsymbol << day << endl;
    }
    else if ((dbegin < mbegin) && (dbegin < ybegin) && (mbegin < ybegin)) {
        cout << day << newsymbol << month << newsymbol << year << endl;
    }
    else if ((dbegin < mbegin) && (dbegin < ybegin) && (ybegin < mbegin)) {
        cout << day << newsymbol << year << newsymbol << month << endl;
    }
    else if ((ybegin < mbegin) && (ybegin < dbegin) && (dbegin < mbegin)) {
        cout << year << newsymbol << day << newsymbol << month << endl;
    }
    else if ((ybegin < mbegin) && (ybegin < dbegin) && (mbegin < dbegin)) {
        cout << year << newsymbol << month << newsymbol << day << endl;
    }

    return 0;

}
