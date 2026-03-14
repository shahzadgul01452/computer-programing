                                        // Lab Task 9: Quadratic Equation Solver
                                        // Name: [Shahzad Gul]
                                        // Registration Number: [BF25NWELE0671]
                                        // Date: [05/03/2026]



#include <iostream>
#include <cmath>    // Required for sqrt() function
#include <iomanip>  // Required for setprecision()
using namespace std;

int main() {
    // Coefficients of quadratic equation: ax² + bx + c = 0
    double a, b, c;
    
    // Roots of the equation
    double root1, root2;
    
    // Discriminant determines nature of roots: D = b² - 4ac
    double discriminant;
    
    // Get coefficients from user
    cout << "Enter coefficient a: ";
    cin >> a;
    
    cout << "Enter coefficient b: ";
    cin >> b;
    
    cout << "Enter coefficient c: ";
    cin >> c;
    
    // Display the equation
    cout << "\nQuadratic Equation: " << a << "x² + " << b << "x + " << c << " = 0" << endl;
    
    // Check if it's a valid quadratic equation (a cannot be 0)
    if (a == 0) {
        cout << "Error: This is not a quadratic equation (a cannot be 0)!" << endl;
        return 1;
    }
    
    // Calculate discriminant: D = b² - 4ac
    discriminant = (b * b) - (4 * a * c);
    
    // Determine nature of roots based on discriminant
    if (discriminant > 0) {
        // Two distinct real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        
        cout << "\n--- Results ---" << endl;
        cout << "Discriminant (D): " << discriminant << " (> 0)" << endl;
        cout << "Nature: Two distinct real roots" << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
        
    } else if (discriminant == 0) {
        // One real root (repeated)
        root1 = -b / (2 * a);
        
        cout << "\n--- Results ---" << endl;
        cout << "Discriminant (D): " << discriminant << " (= 0)" << endl;
        cout << "Nature: One real root (repeated)" << endl;
        cout << "Root: " << root1 << endl;
        
    } else {
        // Complex/imaginary roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        
        cout << "\n--- Results ---" << endl;
        cout << "Discriminant (D): " << discriminant << " (< 0)" << endl;
        cout << "Nature: Complex conjugate roots" << endl;
        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    
    return 0;
}

