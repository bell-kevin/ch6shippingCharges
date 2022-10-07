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
    system("pause");
    return 0;
}

double calculateCharge(double weight, int miles) {
    blocks = miles / 500;
    remainderMiles = miles % 500;
    if (remainderMiles >= 1) {
        blocks = blocks + 1;
    }
    if (weight <= 2) {
        return shippingCost = 3.10 * blocks;
    }
    else if (weight > 2 && weight <= 6) {
        return shippingCost = 4.20 * blocks;
    }
    else if (weight > 6 && weight <= 10) {
        return shippingCost = 5.30 * blocks;
    }
    else if (weight > 10) {
        return shippingCost = 6.40 * blocks;
    }
}
