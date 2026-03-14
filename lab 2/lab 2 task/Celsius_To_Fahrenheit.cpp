                                // Lab 2 Task 13.cpp
                                // Name: [Shahzad Gul]
                                // Registration Number: [BF25NWELE0671]



#include <iostream>

using namespace std;

int main ()
{
    //Double data type is used for precision in temperature conversion
    double celsius, fahrenheit;

    //Basic output for user input of temperature in Celsius
    cout << "Enter temperature in Celsius: " << endl;
    
    //User input for temperature in Celsius
    cin >> celsius;

    //Temperature conversion from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    //Basic output for temperature in Fahrenheit
    cout << "Temperature in Fahrenheit: " << fahrenheit << endl;
    
    return 0;
}

