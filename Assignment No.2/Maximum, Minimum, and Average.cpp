/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 1: Find Maximum, Minimum, and Average of 10 integers
*/
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int maxVal, minVal;
    float sum = 0, avg;

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
        sum += arr[i];
    }

    maxVal = arr[0];
    minVal = arr[0];

    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    avg = sum / 10;

    cout << "\n--- Results ---" << endl;
    cout << "Maximum Value: " << maxVal << endl;
    cout << "Minimum Value: " << minVal << endl;
    cout << "Average: " << avg << endl;

    return 0;
}
