// Assignment 1 - Question 14
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

#include <iostream>
using namespace std;

int main() {
    double r1 = 6.0;
    double r2 = 3.0;
    double voltage = 12.0;
    double totalCurrent, currentThroughR2;

    totalCurrent = voltage / ((r1 * r2) / (r1 + r2)); // Find total current using equivalent parallel resistance
    currentThroughR2 = totalCurrent * (r1 / (r1 + r2)); // Current division formula for the branch containing R2

    cout << "Selected values: R1 = " << r1 << " ohms, R2 = " << r2 << " ohms, Voltage = " << voltage << " volts" << endl;
    cout << "Current through R2 = " << currentThroughR2 << " amperes" << endl;
    return 0;
}

