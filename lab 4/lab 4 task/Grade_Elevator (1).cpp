// Task Name: [Grade_Elevator]
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

// Program to demonstrate the use of switch statement for grading system
#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your grade (A, B, C, D, F): "; // prompt the user for a letter grade
    cin >> grade; // read the grade character

    // evaluate grade using switch, support uppercase and lowercase
    switch(grade) {
        case 'A': case 'a': // top score
            cout << "Excellent"; break;
        case 'B': case 'b': // second tier
            cout << "Very Good"; break;
        case 'C': case 'c': // average
            cout << "Good"; break;
        case 'D': case 'd': // minimal passing
            cout << "Pass"; break;
        case 'F': case 'f': // failing grade
            cout << "Fail"; break;
        default: // anything else
            cout << "Invalid Grade"; 
    }

    cout << endl;
    return 0;
}

