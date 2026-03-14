                                 // Lab 2 Task 8.cpp
                                 // Name: [Shahzad Gul]
                                 // Registration Number: [BF25NWELE0671]




// C++ Program to Add Two Numbers Using Functions
#include <iostream>
using namespace std;
int addTwo(int x, int y);
int main(){
    int a, b, sum;
    
    // Asking for input
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    
    // Calling out user-defined function 
    sum = addTwo(a, b);
    
    // Displaying output
    cout << "Sum of " << a << " and " << b << " is: " << sum << endl;
    return 0;
}
int addTwo(int x, int y)
	{
    return (x + y);
	}

