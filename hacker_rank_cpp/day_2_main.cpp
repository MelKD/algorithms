#include <iostream>
#include <iomanip>
#include <limits>
// #include <bits/stdc++.h>
#include <math.h> 

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;

    // calculate tip percent
    float calc_tip = tip_percent/100.00;
    float meal_tip = meal_cost*calc_tip;
    cout << fixed << setprecision(2) << "Tip percent " << calc_tip << endl;
    cout << fixed << setprecision(2) << "Tip on meal " << meal_tip << endl;
    
    // Calculate tax percent
    float calc_tax = tax_percent/100.00;
    float meal_tax = meal_cost*calc_tax;
    cout << fixed << setprecision(2) << "Tax percent " << calc_tax << endl;
    cout << fixed << setprecision(2) << "Tax on meal " << meal_tax << endl;
    
    // Calculate total meal cost
    double calcTotal = meal_cost + meal_tip + meal_tax;
    calcTotal = round(calcTotal);
    int totalCost = calcTotal;

    cout << "The total meal cost is " << totalCost << " dollars." << endl;

    
    return 0;
}