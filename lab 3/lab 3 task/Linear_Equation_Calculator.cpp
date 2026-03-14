                                    // Lab Task 7: Linear Equation Calculator
                                    // Name: [Shahzad Gul]
                                    // Registration Number: [BF25NWELE0671]
                                    // Date: [05/03/2026]                                        


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Declare variables for linear equation y = 2x + 4
    double x;  // Independent variable (input)
    double y;  // Dependent variable (output)
    
    // Prompt user for x value
    cout << "Enter the value of x: ";
    cin >> x;
    
    // Calculate y using the linear equation: y = 2x + 4
    // This represents a straight line with slope 2 and y-intercept 4
    y = (2 * x) + 4;
    
    // Display the result
    cout << "\n--- Linear Equation y = 2x + 4 ---" << endl;
    cout << "When x = " << x << endl;
    cout << "y = 2(" << x << ") + 4 = " << y << endl;
    
    return 0;
}

