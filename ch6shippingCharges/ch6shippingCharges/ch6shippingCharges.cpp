// ch6shippingCharges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ch6shippingCharges.h"
using namespace std;

int main()
{
    double weight=0.1, miles = 0.0, shippingCost = 0.0;
    cout << "Ch 6 Shipping Charges by Kevin Bell\n\n";
    cout << "   Fast Freight Shipping Company\n";
    cout << "Package Shipping Charges Calculator\n\n";
    cout << "Enter package weight in lbs (or 0 to exit): ";
    cin >> weight;
    while (weight !=0) {
        cout << "Enter shipping distance in miles: ";
        cin >> miles;
        cout << endl;
        calculateCharge();
        cout << "Shipping cost: $" << shippingCost << endl << endl;
        cout << "Enter package weight in lbs (or 0 to exit): ";
        cin >> weight;
    }
    system("pause");
    return 0;
}

double calculateCharge(double weight, double miles) {
    //code here
}