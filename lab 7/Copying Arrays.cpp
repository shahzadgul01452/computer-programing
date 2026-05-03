// ============================================
// Name: Shahzad Gul
// Registration No: 0671
// Semester: 2
// Section: B
// Lab: 07 - Task 3
// ============================================

#include <iostream>
using namespace std;

int main()
{
    // Declare two integer arrays: "source" and "destination", each with size 5
    int source[5];
    int destination[5];
    
    // Initialize the "source" array with some values
    source[0] = 5;
    source[1] = 10;
    source[2] = 15;
    source[3] = 20;
    source[4] = 25;
    
    // Use a loop to copy elements from "source" to "destination"
    for (int i = 0; i < 5; i++)
    {
        destination[i] = source[i];
    }
    
    // Display values of both arrays to verify the copy
    cout << "Source array:      ";
    for (int i = 0; i < 5; i++)
    {
        cout << source[i] << "\t";
    }
    cout << endl;
    
    cout << "Destination array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << destination[i] << "\t";
    }
    cout << endl;
    
    return 0;
}
