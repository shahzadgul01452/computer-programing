/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 12 - Task 1: Pointer Declaration and Initialization
 * Description: Declare an integer variable, declare a pointer to it,
 *              initialize the pointer, and display values using dereferencing.
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare an integer variable called num and initialize it
    int num = 25;
    
    // Declare a pointer variable called ptr of type integer
    int *ptr;
    
    // Initialize the pointer variable to point to the address of num
    ptr = &num;         // & is the referencing operator (address-of operator)
    
    // Display the value of num directly
    cout << "Value of num (direct access): " << num << endl;
    
    // Display the address of num
    cout << "Address of num: " << &num << endl;
    
    // Display the value stored in ptr (which is the address of num)
    cout << "Value of ptr (address stored): " << ptr << endl;
    
    // Display the value pointed to by ptr using dereference operator *
    cout << "Value pointed to by ptr (*ptr): " << *ptr << endl;
    
    return 0;
}
