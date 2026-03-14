                                // Lab Task 1: Ohm's Law Calculator
                                // Name: [Shahzad Gul]
                                // Registration Number: [BF25NWELE0671]
                                
#include <iostream>
using namespace std;

int main() {
    // Define variables for Ohm's Law: V = I * R
    double resistance;  // Measured in Ohms (Ω)
    double current;     // Measured in Amperes (A)
    double voltage;     // Measured in Volts (V)
    
    // Initialize all variables to 0
    resistance = 0;
    current = 0;
    voltage = 0;
    
    // Prompt user for input values
    cout << "Enter the current (in Amperes): ";
    cin >> current;
    
    cout << "Enter the voltage (in Volts): ";
    cin >> voltage;
    
    // Calculate resistance using Ohm's Law: R = V / I
    // Check for division by zero to prevent runtime error
    if (current != 0) {
        resistance = voltage / current;
    } else {
        cout << "Error: Current cannot be zero!" << endl;
        return 1;  // Exit with error code
    }
    
    // Display all parameters with appropriate units
    cout << "\n--- Ohm's Law Results ---" << endl;
    cout << "Voltage (V): " << voltage << " V" << endl;
    cout << "Current (I): " << current << " A" << endl;
    cout << "Resistance (R): " << resistance << " Ω" << endl;
    
    return 0;
}

