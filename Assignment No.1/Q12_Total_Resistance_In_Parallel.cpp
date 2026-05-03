// Assignment 1 - Question 12
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

#include <iostream>
using namespace std;

int main() {
    double r1, r2, r3, totalResistance;

    cout << "Enter resistance R1: ";
    cin >> r1;
    cout << "Enter resistance R2: ";
    cin >> r2;
    cout << "Enter resistance R3: ";
    cin >> r3;

    totalResistance = 1 / ((1 / r1) + (1 / r2) + (1 / r3)); // Equivalent resistance formula for parallel resistors

    cout << "Total resistance in parallel = " << totalResistance << " ohms" << endl;
    return 0;
}

