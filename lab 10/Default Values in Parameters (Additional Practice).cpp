/*
 * Name: Shahzad Gul
 * Reg No: 0671
 * Semester: 2
 * Section: B
 * Lab 10 - Task 4: Default Values in Parameters
 */

#include <iostream>
using namespace std;

// Function with default parameter values
int divide(int a = 8, int b = 2);

int main()
{
    cout << "divide() with no arguments: " << divide() << endl;        // Uses defaults: 8/2
    cout << "divide(12) with one argument: " << divide(12) << endl;    // Uses: 12/2
    cout << "divide(63, 7) with two arguments: " << divide(63, 7) << endl; // Uses: 63/7
    
    return 0;
}

// Function definition
int divide(int a, int b)
{
    return a / b;
}
