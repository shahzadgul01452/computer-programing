/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Lab 08 - Task 1: Two-Dimensional Array Declaration and Initialization
*/

#include <iostream>
using namespace std;

int main() {
    // Declare a 2D integer array called "matrix" with dimensions 3x3
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "=====================================" << endl;
    cout << "Matrix Elements (3x3):" << endl;
    cout << "=====================================" << endl;

    // Display the values of the array elements using nested for loops
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
