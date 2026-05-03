// Assignment 1 - Question 13
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

#include <iostream>
using namespace std;

int main() {
    double r1 = 10.0;
    double r2 = 20.0;
    double voltage = 12.0;
    double voltageAcrossR2;

    voltageAcrossR2 = voltage * (r2 / (r1 + r2)); // Voltage across R2 in a series circuit

    cout << "Selected values: R1 = " << r1 << " ohms, R2 = " << r2 << " ohms, Voltage = " << voltage << " volts" << endl;
    cout << "Voltage across R2 = " << voltageAcrossR2 << " volts" << endl;
    return 0;
}

