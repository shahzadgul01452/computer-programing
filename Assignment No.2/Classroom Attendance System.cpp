/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 10: Classroom Attendance System (2D Array + Functions)
*/
#include <iostream>
using namespace std;

void calculateTotalAttendance(int attendance[5][7], int totalStudent[]) {
    for (int i = 0; i < 5; i++) {
        totalStudent[i] = 0;
        for (int j = 0; j < 7; j++) {
            totalStudent[i] += attendance[i][j];
        }
    }
}

int findHighestAttendanceStudent(int attendance[5][7]) {
    int totalStudent[5];
    calculateTotalAttendance(attendance, totalStudent);
    int maxStudent = 0;
    for (int i = 1; i < 5; i++) {
        if (totalStudent[i] > totalStudent[maxStudent])
            maxStudent = i;
    }
    return maxStudent;
}

float calculateClassAttendancePercentage(int attendance[5][7]) {
    int totalPresent = 0;
    int totalClasses = 5 * 7;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 7; j++) {
            totalPresent += attendance[i][j];
        }
    }
    return ((float)totalPresent / totalClasses) * 100;
}

int main() {
    int attendance[5][7];
    int totalStudent[5];

    cout << "Enter attendance for 5 students over 7 days (1 = Present, 0 = Absent):" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        for (int j = 0; j < 7; j++) {
            cout << "Day " << j + 1 << ": ";
            cin >> attendance[i][j];
        }
    }

    calculateTotalAttendance(attendance, totalStudent);
    int highestStudent = findHighestAttendanceStudent(attendance);
    float classPercentage = calculateClassAttendancePercentage(attendance);

    cout << "\n--- Classroom Attendance Results ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Total Attendance of Student " << i + 1 << ": " 
             << totalStudent[i] << " out of 7 days" << endl;
    }
    cout << "\nStudent with Highest Attendance: Student " << (highestStudent + 1) 
         << " (" << totalStudent[highestStudent] << " days)" << endl;
    cout << "Overall Class Attendance Percentage: " << classPercentage << "%" << endl;

    return 0;
}
