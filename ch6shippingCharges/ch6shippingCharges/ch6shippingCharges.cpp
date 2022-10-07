// ch6shippingCharges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
double weight, shippingCost;
int blocks, remainderMiles, miles;
double calculateCharge(double, int);
int main()
{
    cout << "Ch 6 Shipping Charges by Kevin Bell\n\n";
    cout << "   Fast Freight Shipping Company\n";
    cout << "Package Shipping Charges Calculator\n\n";
    cout << "Enter package weight in lbs (or 0 to exit): ";
    cin >> weight;
    cout << setprecision(2) << fixed;
    while (weight !=0) {
        cout << "Enter shipping distance in miles: ";
        cin >> miles;
        cout << endl;
        shippingCost = calculateCharge(weight, miles);
        cout << "Shipping cost: $" << shippingCost << endl << endl;
        cout << "Enter package weight in lbs (or 0 to exit): ";
        cin >> weight;
    }
    //Keep window open til done
    system("pause");
    return 0;
}

double calculateCharge(double weight, int miles) {
    const double WEIGHT_TWO = 3.10;
    const double WEIGHT_SIX = 4.20;
    const double WEIGHT_TEN = 5.30;
    const double WEIGHT_TEN_PLUS = 6.40;
    blocks = miles / 500;
    remainderMiles = miles % 500;
    if (remainderMiles >= 1) {
        blocks = blocks + 1;
    }
    if (weight <= 2) {
        return WEIGHT_TWO * blocks;
    }
    else if (weight > 2 && weight <= 6) {
        return WEIGHT_SIX * blocks;
    }
    else if (weight > 6 && weight <= 10) {
        return WEIGHT_TEN * blocks;
    }
    else if (weight > 10) {
        return WEIGHT_TEN_PLUS * blocks;
    }
}
