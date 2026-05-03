// ============================================
// Name: Shahzad Gul
// Registration No: 0671
// Semester: 2
// Section: B
// Lab: 07 - Task 4
// ============================================

#include <iostream>
using namespace std;

int main()
{
    // Declare an integer array of size 5
    int numbers[5];
    int sum = 0;
    
    // Prompt the user to enter 5 numbers
    cout << "Enter 5 numbers:" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }
    
    // Calculate the sum of all numbers in the array
    for (int i = 0; i < 5; i++)
    {
        sum = sum + numbers[i];
    }
    
    // Display the calculated sum
    cout << "The sum of all numbers is: " << sum << endl;
    
    return 0;
}
