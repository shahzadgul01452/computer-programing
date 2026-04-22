#include <iostream>
using namespace std;

int main() {
    int n;              // User input
    int sum = 0;        // Variable to store the sum
    int i = 1;          // Loop counter
    
    // Prompt user for input
    cout << "Enter a positive integer: ";
    cin >> n;
    
    // Validate input (optional but good practice)
    if (n < 1) {
        cout << "Please enter a positive integer!" << endl;
        return 1;
    }
    
    // Calculate sum using while loop
    while (i <= n) {
        sum = sum + i;  // Add current number to sum
        i++;            // Increment counter
    }
    
    // Display the result
    cout << "The sum of numbers from 1 to " << n << " is: " << sum << endl;
    
    return 0;
}
