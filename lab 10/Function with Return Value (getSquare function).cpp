/*
 * Name: Shahzad Gul
 * Reg No: 0671
 * Semester: 2
 * Section: B
 * Lab 10 - Task 2: getSquare() function with return value
 */

#include <iostream>
using namespace std;

// Function prototype
int getSquare(int number);

int main()
{
    int num, result;
    
    // Taking input from user
    cout << "Enter a number to find its square: ";
    cin >> num;
    
    // Calling function and storing returned value
    result = getSquare(num);
    
    // Displaying the result
    cout << "The square of " << num << " is: " << result << endl;
    
    return 0;
}

// Function definition
int getSquare(int number)
{
    return number * number;
}
