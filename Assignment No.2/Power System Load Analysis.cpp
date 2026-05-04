/*
Name: Shahzad Gul
Reg No: 0671
Semester: 2
Section: B
Program 5: Power System Load Analysis (1D Array + Function)
*/
#include <iostream>
using namespace std;

float calculateTotalLoad(float load[], int hours) {
    float total = 0;
    for (int i = 0; i < hours; i++) {
        total += load[i];
    }
    return total;
}

float findPeakLoad(float load[], int hours) {
    float peak = load[0];
    for (int i = 1; i < hours; i++) {
        if (load[i] > peak)
            peak = load[i];
    }
    return peak;
}

int main() {
    float load[24];

    cout << "Enter hourly load demand (in MW) for 24 hours:" << endl;
    for (int i = 0; i < 24; i++) {
        cout << "Hour " << i + 1 << ": ";
        cin >> load[i];
    }

    float totalLoad = calculateTotalLoad(load, 24);
    float peakLoad = findPeakLoad(load, 24);
    float avgLoad = totalLoad / 24;

    cout << "\n--- Power System Load Analysis ---" << endl;
    cout << "Total Load: " << totalLoad << " MW" << endl;
    cout << "Peak Load: " << peakLoad << " MW" << endl;
    cout << "Average Load: " << avgLoad << " MW" << endl;

    return 0;
}
