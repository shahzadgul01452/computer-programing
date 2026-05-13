/*
 * Name: Shahzad Gul
 * Semester: 2
 * Section: B
 * Reg No: 0671
 * Lab: 12 - Task 2: Pointer Arithmetic
 * Description: Demonstrates pointer arithmetic to access array elements.
 *              Pointer arithmetic automatically adjusts based on data type size.
 */

#include <iostream>
using namespace std;

int main()
{
    // Declare an integer array called numbers with some values
    int numbers[] = {10, 20, 30, 40, 50};
    
    // Calculate the size of the array
    int size = sizeof(numbers) / sizeof(numbers[0]);
    
    // Declare a pointer variable called ptr of type integer
    int *ptr;
    
    // Initialize ptr to point to the first element of the array
    ptr = numbers;      // array name itself is the address of first element
                        // equivalent to: ptr = &numbers[0];
    
    cout << "Array elements accessed using pointer arithmetic:" << endl;
    cout << "================================================" << endl;
    
    // Use pointer arithmetic to access and display elements of the array
    for (int i = 0; i < size; i++)
    {
        // ptr + i moves the pointer i positions forward
        // *(ptr + i) dereferences to get the value at that position
        cout << "Element " << i << ": " << *(ptr + i) << endl;
    }
    
    cout << "\nDemonstrating pointer increment:" << endl;
    cout << "================================" << endl;
    
    // Reset ptr to point to first element again
    ptr = numbers;
    
    // Access elements using pointer increment (ptr++)
    for (int i = 0; i < size; i++)
    {
        cout << "Element " << i << ": " << *ptr << endl;
        ptr++;          // move pointer to next integer position
                        // automatically adds sizeof(int) bytes
    }
    
    return 0;
}
