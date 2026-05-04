/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Lab 08 - Task 3: Finding the Maximum Value in a Two-Dimensional Array
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Declare and initialize a 4x4 integer array with random values
    int matrix[4][4];
    int maxValue;
    int maxRow = 0, maxCol = 0;

    // Seed for random number generation
    srand(time(0));

    // Initialize array with random values (1 to 100)
    cout << "Random 4x4 Matrix:" << endl;
    cout << "=====================================" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = (rand() % 100) + 1;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "=====================================" << endl;

    // Find the maximum value in the array
    maxValue = matrix[0][0]; // Assume first element is maximum

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > maxValue) {
                maxValue = matrix[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    // Display the maximum value and its position
    cout << "Maximum Value in the Matrix = " << maxValue << endl;
    cout << "Position: Row " << maxRow << ", Column " << maxCol << endl;
    cout << "Location: matrix[" << maxRow << "][" << maxCol << "]" << endl;

    return 0;
}
