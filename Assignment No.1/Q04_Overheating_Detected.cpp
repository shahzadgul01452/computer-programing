// Assignment 1 - Question 4
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

#include <iostream>
using namespace std;

int main() {
    double temperature;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (temperature > 100) { // Print warning only when temperature exceeds 100
        cout << "Overheating detected!" << endl;
    }

    return 0;
}

