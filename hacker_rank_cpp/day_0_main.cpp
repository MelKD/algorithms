#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


// Declare second integer, double, and String variables.
    int anotherI;
    double anotherD;
    string anotherS;
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> anotherI;
    cin >> anotherD;
    cin.ignore();
    getline(cin, anotherS);
    
    // Print the sum of both integer variables on a new line.
    cout << i + anotherI << endl;
    
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + anotherD << endl;
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string conS = s + anotherS;
    cout << conS << endl;
    
    return 0;
}