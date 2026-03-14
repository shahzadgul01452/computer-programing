// Lab 3 Task 1.cpp
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

/*that prompts the user to enter two numbers.
 Use comparison operators to check if the first number is equal to, greater than,
or less than the second number.
 Display appropriate messages based on the comparison results*/

#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "The first number is equal to the second number." << endl;
    } else if (num1 > num2) {
        cout << "The first number is greater than the second number." << endl;
    } else {
        cout << "The first number is less than the second number." << endl;
    }

    return 0;
}

