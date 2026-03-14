                            // Lab 1.3 - Circle Area
                            // Name: [Shahzad Gul]
                            // Registration Number: [BF25NWELE0671]
#include <iostream>
using namespace std;
int main() {
    const double PI = 3.14159;  // Define a constant for Pi
    double radius;              // Variable to store the radius of the circle
    double area;                // Variable to store the calculated area of the circle
    
    // Initialize variables to 0
    radius = 0;
    area = 0;
    
    // Prompt user for the radius of the circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    // Calculate the area of the circle using the formula: Area = π * r^2
    area = PI * radius * radius;
    
    // Display the calculated area with appropriate units
    cout << "\nThe area of the circle with radius " << radius << " is: " << area << " square units." << endl;
    
    return 0;
}
