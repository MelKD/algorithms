#include <iostream>

using namespace std;

// Notes
// c for charge - double beam strength
// s for shot  - damage = beam strength

// program of:  SCCSSCC

// Shoot the beam, doing 1 damage.
// Charge the beam, doubling the beam's strength to 2.
// Charge the beam, doubling the beam's strength to 4.
// Shoot the beam, doing 4 damage.
// Shoot the beam, doing 4 damage.
// Charge the beam, increasing the beam's strength to 8.

// total damage = 9


// shield withstands damage D (max)

int findProgDamage(string program, int maxD) {
    int c = 1;  
    int s = c;
    int tempDam = 0;

    int countHacks = 0;

    string P = program;
    int len = P.length();
    int D = maxD;

    char strC = 'C';
    char strS = 'S';   

    int x = 0; 

    if (tempDam <= D) {
        return P, countHacks;
    }
    else {
        // get next program value from hack
        for ( int i = 0; i < len-1; i++) {
            if ( P.at(i)==strC ) {
                if ( P.at(i+1)==strS ) {
                    P.at(i) = 'S';
                    P.at(i+1) = 'C';
                    // increment hack if a change is made
                    countHacks++;
                }
            // show program value at each change
            cout << "New Program " << P << endl;
            }

            // at each swap check total damage of the program
            for( int j = 0; j < len; j++) {
                if (P.at(j)==strC) {
                    c = c*2; // charge doubles
                    s = c;
                } 
                else if (P.at(j)==strS) {
                    tempDam += s; // shot is fired
                }
                
            }
            // break from loop if program damage <= max viable damage
            // if (tempDam <= D) {
            //     break;
            // } 
            
            cout << "Total damage in changing prog " << tempDam << endl;

            // reset vals to test next program and check num hacks
            c = 1;  
            s = c;
            tempDam = 0;               
        }

        x++;  // incrment cases if more than one
    }

    return P, tempDam;

}


int main() 
{
    char strC = 'C';
    char strS = 'S';
    int c = 1;  // initial beam strength
    int s = c;  // shoot causes damage = to the current value of c

    int x = 1;  // test case num // need to +1 each time
    int y = 0;  // hacks needed to 
    string strY = "IMPOSSIBLE"; // out put if can't prevent the robot
 
    // input will be
    int T;  // num test cases
    int D;  // level of damage can withstand 
    string P;  // robots program

    int tempDam = 0;

    cin >> D >> P;

    // values for testing initial case
    cout << "Max sust damage " << D << endl;
    cout << "Program " << P << endl;

    int len = P.length();

    // get total damage expected (tempD)
    for( int j = 0; j < len; j++) {
        if (P.at(j)==strC) {
            c = c*2;
            s = c;
        } 
        else if (P.at(j)==strS) {
            tempDam += s;
        }
    }
    cout << "Total damage in prog " << tempDam << endl;


    // if damage less than max can stand
    if (tempDam <= D) {
        int hacks = 0;
        cout << "Case #" << x << ": " << hacks << endl;
        x++;
    } 

    // if more than can stand and no options to hack rtn impossible
    if ((P.length() == 2) && (tempDam > D)) {
        cout << "Case #" << x << ": " << strY << endl;
        x++;
    }

    else {
        findProgDamage(P, D);
        int hacks = D;
        cout << "Case #" << x << ": " << hacks << endl;
    }   
    // if work through all scenarios and still over max sust damage val
    // if (tempDam > D ) {
    //     cout << "Case #" << x << ": " << strY << endl;
    // }

    return 0;
}