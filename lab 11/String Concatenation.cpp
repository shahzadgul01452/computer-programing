/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 11 - Task 2: String Concatenation
 * Description: Program that declares two string variables for first and
 *              last name, concatenates them to form a full name,
 *              and displays the result.
 */

#include <iostream>
#include <string>  // Required for string class
using namespace std;

int main()
{
    // Declare and initialize two string variables
    string firstName = "Shahzad";
    string lastName = "Gul";
    
    // Declare a string to store the concatenated full name
    string fullName;
    
    // Display the original strings
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    
    // Concatenate the two strings to form a full name
    fullName = firstName + " " + lastName;
    
    // Display the concatenated full name
    cout << "Full Name: " << fullName << endl;
    
    return 0;
}
