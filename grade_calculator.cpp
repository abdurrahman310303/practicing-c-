#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Student Grade Calculator" << endl;
    cout << "Enter your score (0-100): ";
    cin >> score;
    
    if (score >= 97) {
        cout << "Grade: A+" << endl;
    } else if (score >= 93) {
        cout << "Grade: A" << endl;
    } else if (score >= 90) {
        cout << "Grade: A-" << endl;
    } else if (score >= 87) {
        cout << "Grade: B+" << endl;
    } else if (score >= 83) {
        cout << "Grade: B" << endl;
    } else if (score >= 80) {
        cout << "Grade: B-" << endl;
    } else if (score >= 77) {
        cout << "Grade: C+" << endl;
    } else if (score >= 73) {
        cout << "Grade: C" << endl;
    } else if (score >= 70) {
        cout << "Grade: C-" << endl;
    } else if (score >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}
