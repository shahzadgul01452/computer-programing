/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 7: Renewable Energy Monitoring System (1D Array + Functions)
*/
#include <iostream>
using namespace std;

float calculateTotalEnergy(float energy[], int hours) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total += energy[i];
    }
    return total;
}

int findMaxGenerationHour(float energy[], int hours) {
    int maxHour = 0;
    for (int i = 1; i < hours; i++) {
        if (energy[i] > energy[maxHour])
            maxHour = i;
    }
    return maxHour;
}

float calculateAverageEnergy(float energy[], int hours) {
    float total = calculateTotalEnergy(energy, hours);
    return total / hours;
}

void displayResults(float energy[], int hours) {
    float totalEnergy = calculateTotalEnergy(energy, hours);
    int maxHour = findMaxGenerationHour(energy, hours);
    float avgEnergy = calculateAverageEnergy(energy, hours);

    cout << "\n--- Renewable Energy Monitoring Results ---" << endl;
    cout << "Total Energy Generated: " << totalEnergy << " kWh" << endl;
    cout << "Hour with Maximum Generation: Hour " << (maxHour + 1) 
         << " (" << energy[maxHour] << " kWh)" << endl;
    cout << "Average Energy Generation: " << avgEnergy << " kWh" << endl;
}

int main() {
    float energy[24];

    cout << "Enter energy generated (in kWh) for each hour of the day:" << endl;
    for (int i = 0; i < 24; i++) {
        cout << "Hour " << i + 1 << ": ";
        cin >> energy[i];
    }

    displayResults(energy, 24);

    return 0;
}
