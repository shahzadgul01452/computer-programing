/*
 * Name: Shahzad Gul
 * Reg No: 0671
 * Semester: 2
 * Section: B
 * Lab 10 - Task 1: multiply() function with parameters
 */

#include <iostream>
using namespace std;

// Function prototype
void multiply(int num1, int num2);

int main()
{
    int a, b;
    
    // Taking input from user
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    
    // Calling function with two arguments
    multiply(a, b);
    
    return 0;
}

// Function definition
void multiply(int num1, int num2)
{
    int product = num1 * num2;
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;
}
