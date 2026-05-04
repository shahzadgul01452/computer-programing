/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Lab 08 - Task 2: Sum of Rows and Columns in a Two-Dimensional Array
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Declare and initialize a 3x3 integer array with random values
    int matrix[3][3];
    int rowSum, colSum, totalSum = 0;

    // Seed for random number generation
    srand(time(0));

    // Initialize array with random values (1 to 50)
    cout << "Random 3x3 Matrix:" << endl;
    cout << "=====================================" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix[i][j] = (rand() % 50) + 1;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "=====================================" << endl;

    // Calculate and display the sum of each row
    cout << "Sum of Each Row:" << endl;
    for (int i = 0; i < 3; i++) {
        rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << "Row " << i << " Sum = " << rowSum << endl;
        totalSum += rowSum;
    }

    cout << "=====================================" << endl;

    // Calculate and display the sum of each column
    cout << "Sum of Each Column:" << endl;
    for (int j = 0; j < 3; j++) {
        colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << "Column " << j << " Sum = " << colSum << endl;
    }

    cout << "=====================================" << endl;
    cout << "Total Sum of All Elements = " << totalSum << endl;

    return 0;
}
