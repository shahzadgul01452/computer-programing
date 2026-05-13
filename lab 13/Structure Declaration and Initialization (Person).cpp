/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 13 - Task 1: Structure Declaration and Initialization (Person)
 * Description: Declare a Person structure with name, age, and address members.
 *              Initialize and display the values using dot operator.
 */

#include <iostream>
#include <string>       // Required for string class
using namespace std;

// Declare a structure called 'Person' with the required members
struct Person
{
    string name;        // Member: name (string)
    int age;            // Member: age (integer)
    string address;     // Member: address (string)
};

int main()
{
    // Declare a variable called person1 of type Person
    // Initialize its members with values
    Person person1;
    
    person1.name = "Shahzad Gul";
    person1.age = 20;
    person1.address = "UET Peshawar, KPK, Pakistan";
    
    // Display the values of the members of person1 using dot operator
    cout << "=== Person 1 Information ===" << endl;
    cout << "Name:    " << person1.name << endl;
    cout << "Age:     " << person1.age << endl;
    cout << "Address: " << person1.address << endl;
    
    return 0;
}
