/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 13 - Task 2: Structure Declaration and Initialization (Student)
 * Description: Declare a Student structure with name, age, and grade members.
 *              Initialize and display the values.
 */

#include <iostream>
#include <string>       // Required for string class
using namespace std;

// Declare a structure called 'Student' with the required members
struct Student
{
    string name;        // Member: name (string)
    int age;            // Member: age (integer)
    char grade;         // Member: grade (char)
};

int main()
{
    // Declare a variable of type Student called student1
    // Initialize its members with values
    Student student1;
    
    student1.name = "Shahzad Gul";
    student1.age = 20;
    student1.grade = 'A';
    
    // Display values of student1 structure
    cout << "=== Student 1 Information ===" << endl;
    cout << "Name:  " << student1.name << endl;
    cout << "Age:   " << student1.age << endl;
    cout << "Grade: " << student1.grade << endl;
    
    return 0;
}
