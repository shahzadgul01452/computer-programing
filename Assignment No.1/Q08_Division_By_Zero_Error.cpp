// Assignment 1 - Question 8
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

#include <iostream>
using namespace std;

int main() {
    double denominator;

    cout << "Enter denominator: ";
    cin >> denominator;

    if (denominator == 0) { // Error message appears only when denominator is zero
        cout << "Error: Division by zero" << endl;
    }

    return 0;
}

