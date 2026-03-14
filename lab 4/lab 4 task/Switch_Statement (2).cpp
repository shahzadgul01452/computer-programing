// Task Name: [Switch_Statement]
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

//Program to demonstrate the use of switch statement 

#include <iostream>
using namespace std;

int main() {
    int day; // variable to store numeric day
    cout << "Enter the day's number (1-7): "; // prompt user
    cin >> day; // read input

    switch(day) { // select output based on day number
        case 1: cout << "Monday"; break; // day 1
        case 2: cout << "Tuesday"; break; // day 2
        case 3: cout << "Wednesday"; break; // etc.
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
        case 7: cout << "Sunday"; break;
        default: cout << "Invalid day number!"; // out of range
    }

    cout << endl;
    return 0; // Indicate successful execution 
}

