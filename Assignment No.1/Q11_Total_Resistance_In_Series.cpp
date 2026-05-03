// Assignment 1 - Question 11
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

    totalResistance = r1 + r2 + r3; // In series, resistances are added directly

    cout << "Total resistance in series = " << totalResistance << " ohms" << endl;
    return 0;
}

