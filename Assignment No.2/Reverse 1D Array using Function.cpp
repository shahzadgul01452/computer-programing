/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 2: Reverse a 1D Array using Function
*/
#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray before reversing: ";
    displayArray(arr, n);

    reverseArray(arr, n);

    cout << "Array after reversing:  ";
    displayArray(arr, n);

    return 0;
}
