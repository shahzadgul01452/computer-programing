/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 11 - Task 1: String Length Calculation
 * Description: Program that declares and initializes a string variable
 *              and uses a built-in function to calculate and display
 *              the length of the string.
 */

#include <iostream>
#include <string>  // Required for string class
using namespace std;

int main()
{
    // Declare and initialize a string variable with a phrase
    string message = "Welcome to UET Peshawar";
    
    // Display the original string
    cout << "Original string: " << message << endl;
    
    // Use built-in function to calculate and display the length of the string
    cout << "Length of the string: " << message.length() << endl;
    
    return 0;
}
