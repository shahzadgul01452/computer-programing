                                // Lab 2 Task 12.cpp
                                // Name: [Shahzad Gul]
                                // Registration Number: [BF25NWELE0671]


#include <iostream>
using namespace std;

int main() {
    // Variable Declaration
    int num1, num2;
    
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Performing Arithmetic Operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    
    /* Using double for division to ensure 
       decimal precision if needed */
    double quotient = (double)num1 / num2; 
    int remainder = num1 % num2;

    // Displaying Results
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}

