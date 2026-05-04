/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 4: Sort Names Alphabetically
*/
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];
    string temp;

    cout << "Enter names of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": ";
        getline(cin, names[i]);
    }

    // Bubble Sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (names[j] > names[j + 1]) {
                temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }

    cout << "\nSorted Names (Alphabetical Order):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << names[i] << endl;
    }

    return 0;
}
