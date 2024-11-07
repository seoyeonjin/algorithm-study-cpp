#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main() {
    double totalGrade = 0.0;
    double totalCredit = 0.0;
    vector<pair<string, double>> gradeTable = {{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0}, {"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}};
    for (int i = 0; i < 20 ; i++){
        string subject, grade;
        double credit;
        double tempGrade = 0.0;

        cin >> subject >> credit >> grade;

        if (grade == " F" || grade == "P") {
            continue;
        }

        for (const auto& entry : gradeTable) {
            if (entry.first == grade) { 
                tempGrade = entry.second;    
            }
        }
        totalGrade += tempGrade * credit;
        totalCredit += credit;
    }

    if (totalCredit == 0) {
        cout << 0.000000 << endl;
    } else {
        cout << totalGrade / totalCredit<< endl;
    }
    return 0;
}