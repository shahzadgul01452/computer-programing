// Lab 3 Task 1.cpp
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

                                    // Lab 3 - IF-Else IF Statement Program
#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0) {
        cout << "The number is positive." << endl;
    } else if (number < 0) {
        cout << "The number is negative." << endl;
    } else {
        cout << "The number is zero." << endl;
    }

    return 0;
}

