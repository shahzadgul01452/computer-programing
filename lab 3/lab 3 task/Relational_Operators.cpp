// Lab 3 Task 1.cpp
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

// This program compares two numbers using relational operators and outputs the results.

#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 == num2) {
        cout << "The first number is equal to the second." << endl; 
    }
    if (num1 > num2) {
        cout << "The first number is greater than the second." << endl; 
    }
    if (num1 < num2) {
        cout << "The first number is less than the second." << endl; 
    }
    return 0;
}

