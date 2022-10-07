// ch6shippingCharges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double weight=0.1, miles = 0.0, shippingCost = 0.0;
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
       //shippingCost = calculateCharge(weight, miles);
        if (weight <= 2 && miles <= 500) {
            shippingCost = 3.10;
        }
        else if (weight <= 2 && miles > 500 && miles <= 1000) {
            shippingCost = 3.10*2;
        }
        else if (weight > 2 && weight <= 6 && miles <=500) {
            shippingCost = 4.20;
        }
        else if (weight > 6 && weight <= 10 && miles <= 500) {
            shippingCost = 5.30;
        }
        else if (weight > 10 && miles <= 500) {
            shippingCost= 6.40;
        }
        cout << "Shipping cost: $" << shippingCost << endl << endl;
        cout << "Enter package weight in lbs (or 0 to exit): ";
        cin >> weight;
    }
    system("pause");
    return 0;
}

double calculateCharge(double weight, double miles) {
    double x;
    if (weight <=2) {
       x = ((miles/500) * 3.10);
       return x;
    }
    else if (weight > 2 && weight <= 6) {
       x = ((miles / 500) * 4.20);
       return x;
    }
    else if (weight > 6 && weight <=10) {
        x = ((miles / 500) * 5.30);
        return x;
    }
    else if (weight > 10) {
        x = ((miles / 500) * 6.40);
        return x;
    }
}
