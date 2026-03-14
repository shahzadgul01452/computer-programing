                                // Lab Task 2: First Equation of Motion Calculator
                                // Name: [Shahzad Gul]
                                // Registration Number: [BF25NWELE0671]
                                

#include <iostream>
using namespace std;

int main() {
    // Define variables for first equation of motion: v = u + at
    double initialVelocity;    // 'u' - starting velocity (m/s)
    double finalVelocity;      // 'v' - velocity after time t (m/s)
    double acceleration;       // 'a' - rate of velocity change (m/s²)
    double time;               // 't' - duration (seconds)
    
    // Initialize all variables
    initialVelocity = 0;
    finalVelocity = 0;
    acceleration = 0;
    time = 0;
    
    // Get input from user
    cout << "Enter initial velocity (m/s): ";
    cin >> initialVelocity;
    
    cout << "Enter acceleration (m/s²): ";
    cin >> acceleration;
    
    cout << "Enter time (seconds): ";
    cin >> time;
    
    // Calculate final velocity: v = u + a*t
    // This equation describes uniformly accelerated motion
    finalVelocity = initialVelocity + (acceleration * time);
    
    // Display all parameters
    cout << "\n--- First Equation of Motion (v = u + at) ---" << endl;
    cout << "Initial Velocity (u): " << initialVelocity << " m/s" << endl;
    cout << "Acceleration (a): " << acceleration << " m/s²" << endl;
    cout << "Time (t): " << time << " s" << endl;
    cout << "Final Velocity (v): " << finalVelocity << " m/s" << endl;
    
    return 0;
}

