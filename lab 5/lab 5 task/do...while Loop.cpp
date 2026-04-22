#include <iostream>
using namespace std;

int main() {
    int i = 1;          // Initialization
    
    do {
        cout << i << endl;  // Execute first, then check condition
        i++;            // Update (increment)
    } while (i <= 10);  // Condition checked after each iteration
    
    return 0;
}
