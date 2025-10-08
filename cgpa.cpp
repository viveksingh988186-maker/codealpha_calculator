#include <iostream>
#include <vector>
#include <iomanip>  // for std::fixed, std::setprecision

using namespace std;

int main() {
    int n;
    cout << "Enter number of courses taken: ";
    cin >> n;

    // Vectors to store data
    vector<string> courseNames(n);
    vector<double> creditHours(n);
    vector<double> gradePoints(n);

    double totalCreditHours = 0.0;
    double totalGradePointSum = 0.0;

    for (int i = 0; i < n; i++) {
        cout << "\nCourse " << (i + 1) << ":\n";
        cout << "  Enter course name : ";
        cin >> ws;  // consume any leftover whitespace
        getline(cin, courseNames[i]);

        cout << "  Enter credit hours: ";
        cin >> creditHours[i];

        cout << "  Enter grade points out of 10 : ";
        cin >> gradePoints[i];

        totalCreditHours += creditHours[i];
        totalGradePointSum += gradePoints[i] * creditHours[i];
    }

    double cgpa = 0.0;
    if (totalCreditHours > 0) {
        cgpa = totalGradePointSum / totalCreditHours;
    }

    // Display individual data and final CGPA
    cout << "\n--- Result ---\n";
    cout << left << setw(20) << "Course" 
         << setw(15) << "Credits" 
         << setw(15) << "Grade Point" 
         << setw(15) << "Credits " << "\n";

    for (int i = 0; i < n; i++) {
        double cp = creditHours[i] * gradePoints[i];
        cout << left << setw(20) << courseNames[i]
             << setw(15) << creditHours[i]
             << setw(15) << gradePoints[i]
             << setw(15) << cp << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal Credit Hours = " << totalCreditHours << "\n";
    cout << "Total Grade Points Sum = " << totalGradePointSum << "\n";
    cout << "CGPA = " << cgpa << "\n";

    return 0;
}
