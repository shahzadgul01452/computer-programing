// Lab 3 Task 1.cpp
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

                                        // If Statement Program
#include <iostream>
using namespace std;
int main() {
    int num; // Declare an integer variable

    cout << "Enter a number: "; // Prompt the user for input
    cin >> num; // Read the input value into the variable

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        cout << "The number is positive." << endl; // Output if the number is positive
    } else if (num < 0) {
        cout << "The number is negative." << endl; // Output if the number is negative
    } else {
        cout << "The number is zero." << endl; // Output if the number is zero
    }

    return 0; // End of the program
}

