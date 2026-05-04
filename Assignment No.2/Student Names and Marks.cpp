/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 6: Student Names and Marks (String Array + Functions)
*/
#include <iostream>
#include <string>
using namespace std;

void findTopper(string names[], int marks[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (marks[i] > marks[maxIndex])
            maxIndex = i;
    }
    cout << "Topper: " << names[maxIndex] << " with " << marks[maxIndex] << " marks" << endl;
}

void displayPassFail(string names[], int marks[], int n) {
    cout << "\n--- Pass/Fail Status ---" << endl;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 50)
            cout << names[i] << ": Pass (" << marks[i] << ")" << endl;
        else
            cout << names[i] << ": Fail (" << marks[i] << ")" << endl;
    }
}

void searchStudent(string names[], int marks[], int n) {
    string searchName;
    cout << "\nEnter student name to search: ";
    cin.ignore();
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (names[i] == searchName) {
            cout << "Found! " << names[i] << " has " << marks[i] << " marks." << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Student not found!" << endl;
}

int main() {
    string names[5];
    int marks[5];

    cout << "Enter names and marks of 5 students:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << " Name: ";
        cin.ignore();
        getline(cin, names[i]);
        cout << "Marks: ";
        cin >> marks[i];
    }

    findTopper(names, marks, 5);
    displayPassFail(names, marks, 5);
    searchStudent(names, marks, 5);

    return 0;
}
