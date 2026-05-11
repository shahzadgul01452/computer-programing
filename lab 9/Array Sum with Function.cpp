/*
 * Name: Shahzad Gul
 * Reg No: 0671
 * Semester: 2
 * Section: B
 * Lab 09 - Task 3: calculateSum() function
 */

#include <iostream>
using namespace std;

// Function prototype
int calculateSum(int arr[], int size);

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    int sum;
    double average;

    // Taking 10 integer inputs from user
    cout << "Enter 10 integer values:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Calling function to calculate sum
    sum = calculateSum(numbers, SIZE);

    // Calculating average
    average = static_cast<double>(sum) / SIZE;

    // Displaying results
    cout << "\nSum of all elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}

// Function definition
int calculateSum(int arr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total = total + arr[i];
    }
    return total;
}
