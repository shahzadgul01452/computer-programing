                                      // Lab Task 8: Pythagorean Theorem Calculator
                                      // Name: [Shahzad Gul]
                                      // Registration Number: [BF25NWELE0671]
                                      // Date: [05/03/2026]



#include <iostream>
#include <cmath>    // Required for sqrt() function
#include <iomanip>  // Required for setprecision()
using namespace std;

int main() {
    // Define variables for right-angled triangle
    double base;          // Base of triangle (one leg)
    double perpendicular; // Perpendicular/Height (other leg)
    double hypotenuse;    // Hypotenuse (side opposite to right angle)
    
    // Get input from user
    cout << "Enter the base of the triangle: ";
    cin >> base;
    
    cout << "Enter the perpendicular (height) of the triangle: ";
    cin >> perpendicular;
    
    // Calculate hypotenuse using Pythagoras theorem: c² = a² + b²
    // Therefore: c = √(a² + b²)
    // Using pow() for squaring and sqrt() for square root from cmath library
    hypotenuse = sqrt(pow(base, 2) + pow(perpendicular, 2));
    
    // Alternative without pow(): hypotenuse = sqrt((base * base) + (perpendicular * perpendicular));
    
    // Display results
    cout << "\n--- Pythagoras Theorem ---" << endl;
    cout << "Base (a): " << base << endl;
    cout << "Perpendicular (b): " << perpendicular << endl;
    cout << "Hypotenuse (c): " << hypotenuse << endl;
    cout << "Verification: " << base << "² + " << perpendicular << "² = " << hypotenuse << "²" << endl;
    
    return 0;
}

