// ============================================
// Name: Shahzad Gul
// Registration No: 0671
// Semester: 2
// Section: B
// Lab: 07 - Task 1
// ============================================

#include <iostream>
using namespace std;

int main()
{
    // Declare an integer array called "numbers" with size 5
    int numbers[5];
    
    // Initialize the array with values 10, 20, 30, 40, and 50
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    
    // Display the values of the array elements using a loop
    cout << "Array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;
    
    return 0;
}
