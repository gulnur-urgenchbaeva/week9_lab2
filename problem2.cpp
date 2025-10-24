#include <iostream>
#include <iomanip>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    int nStudents;
    cin >> nStudents;
    if (nStudents < 1 || nStudents > 100) {
        cout << "Invalid input" << endl;
        return 0;
    }

    int grade;
    int sum = 0;
    for (int i = 0; i < nStudents; i++) {
        cout << "Enter grade" << i+1 << "(1 to 100): ";
        cin >> grade;

        if (grade < 1 || grade > 100) {
            cout << "Invalid input" << endl;
            i--;
            continue;
        }
        sum += grade;

    }
    double average = 1.0*sum / nStudents;
    cout << fixed << setprecision(2);
    cout << "Average = " << average << endl;
    return 0;
}