/*
 * Name: Shahzad Gul
 * Reg No: 0671
 * Semester: 2
 * Section: B
 * Lab 10 - Task 3: Call by Reference demonstration (swapping)
 */

#include <iostream>
using namespace std;

// Function prototype using call by reference
void swapping(int &x1, int &y1);

int main()
{
    int x = 50, y = 70;
    
    cout << "Before calling function: values are: ";
    cout << "x = " << x << " and " << "y = " << y << endl;
    
    // Calling function by reference
    swapping(x, y);
    
    cout << "After calling function: values are: ";
    cout << "x = " << x << " and " << "y = " << y << endl;
    
    return 0;
}

// Function definition using call by reference
void swapping(int &x1, int &y1)
{
    int z1;
    z1 = x1;
    x1 = y1;
    y1 = z1;
}
