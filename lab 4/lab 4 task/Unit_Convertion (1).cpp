// Task Name: [Unit_Convertion]
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

// Program to perform unit conversions based on user choice
#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    cout << "--- Conversion Menu ---" << endl; // show options
    cout << "1 -> Kilometers to Meters" << endl;
    cout << "2 -> Meters to Centimeters" << endl;
    cout << "3 -> Kilograms to Grams" << endl;
    cout << "4 -> Celsius to Fahrenheit" << endl;
    cout << "Enter your choice: ";
    cin >> choice; // user selects option

    switch(choice) {
        case 1: // km to m
            cout << "Enter Kilometers: ";
            cin >> value;
            cout << "Meters: " << value * 1000; // multiply by 1000
            break;
        case 2: // m to cm
            cout << "Enter Meters: ";
            cin >> value;
            cout << "Centimeters: " << value * 100; // multiply by 100
            break;
        case 3: // kg to g
            cout << "Enter Kilograms: ";
            cin >> value;
            cout << "Grams: " << value * 1000; // multiply by 1000
            break;
        case 4: // C to F
            cout << "Enter Celsius: ";
            cin >> value;
            cout << "Fahrenheit: " << (value * 9/5) + 32; // apply formula
            break;
        default:
            cout << "Invalid choice"; 
    }

    cout << endl;
    return 0;
}

