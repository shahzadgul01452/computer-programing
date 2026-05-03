// Assignment 1 - Question 15
// Name: [Shahzad Gul]
// Registration Number: [BF25NWELE0671]

#include <iostream>
#include <string>
using namespace std;

int main() {
    int numberOfSubjects;
    double creditHours, gradePoints;
    double totalQualityPoints = 0, totalCreditHours = 0, sgpa;
    string subjectName;

    cout << "Enter total number of subjects: ";
    cin >> numberOfSubjects;
    cin.ignore(); // Clear newline before using getline for subject names

    for (int i = 1; i <= numberOfSubjects; i++) {
        cout << "Enter subject " << i << " name: ";
        getline(cin, subjectName);

        cout << "Enter credit hours for " << subjectName << ": ";
        cin >> creditHours;

        cout << "Enter grade points for " << subjectName << ": ";
        cin >> gradePoints;

        totalQualityPoints += creditHours * gradePoints; // Quality points = credit hours multiplied by grade points
        totalCreditHours += creditHours;
        cin.ignore(); // Clear newline before reading the next subject name
    }

    sgpa = totalQualityPoints / totalCreditHours; // SGPA = total quality points / total credit hours

    cout << "Semester GPA = " << sgpa << endl;
    return 0;
}

