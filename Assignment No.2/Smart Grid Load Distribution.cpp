/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 9: Smart Grid Load Distribution (2D Array + Functions)
*/
#include <iostream>
using namespace std;

void calculateTotalPerRegion(float consumption[4][7], float totalRegion[]) {
    for (int i = 0; i < 4; i++) {
        totalRegion[i] = 0;
        for (int j = 0; j < 7; j++) {
            totalRegion[i] += consumption[i][j];
        }
    }
}

int findHighestDemandDay(float consumption[4][7]) {
    float dayTotal[7] = {0};
    for (int j = 0; j < 7; j++) {
        for (int i = 0; i < 4; i++) {
            dayTotal[j] += consumption[i][j];
        }
    }
    int maxDay = 0;
    for (int j = 1; j < 7; j++) {
        if (dayTotal[j] > dayTotal[maxDay])
            maxDay = j;
    }
    return maxDay;
}

float calculateOverallAverage(float consumption[4][7]) {
    float total = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            total += consumption[i][j];
        }
    }
    return total / (4 * 7);
}

int main() {
    float consumption[4][7];
    float totalRegion[4];

    cout << "Enter power consumption (in MW) for 4 regions over 7 days:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "\nRegion " << i + 1 << ":" << endl;
        for (int j = 0; j < 7; j++) {
            cout << "Day " << j + 1 << ": ";
            cin >> consumption[i][j];
        }
    }

    calculateTotalPerRegion(consumption, totalRegion);
    int highestDay = findHighestDemandDay(consumption);
    float overallAvg = calculateOverallAverage(consumption);

    cout << "\n--- Smart Grid Load Distribution Results ---" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Total Consumption for Region " << i + 1 << ": " 
             << totalRegion[i] << " MW" << endl;
    }
    cout << "\nDay with Highest Total Demand: Day " << (highestDay + 1) << endl;
    cout << "Overall Average Consumption: " << overallAvg << " MW" << endl;

    return 0;
}
