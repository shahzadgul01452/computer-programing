                                 // Lab Task 6: Triangle Properties Calculator
                                 // Name: [Shahzad Gul]
                                 // Registration Number: [BF25NWELE0671]
                                 // Date: [05/03/2026]  


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Define variables for rectangle
    double length, width;
    double area, perimeter;
    
    // Initialize as specified: length and width to 0, area and perimeter to 1
    length = 0;
    width = 0;
    area = 1;
    perimeter = 1;
    
    // Get dimensions from user
    cout << "Enter the length of rectangle: ";
    cin >> length;
    
    cout << "Enter the width of rectangle: ";
    cin >> width;
    
    // Calculate area: A = length × width
    area = length * width;
    
    // Calculate perimeter: P = 2 × (length + width)
    perimeter = 2 * (length + width);
    
    // Display results
    cout << "\n--- Rectangle Calculations ---" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << " square units" << endl;
    cout << "Perimeter: " << perimeter << " units" << endl;
    
    return 0;
}

