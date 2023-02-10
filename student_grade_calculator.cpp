#include <iostream>
using namespace std;

int main() {
    int subjects, total = 0;
    float percentage;
    string grade;
    
    cout << "Grade Calculator System" << endl;
    cout << "Enter number of subjects: ";
    cin >> subjects;
    
    cout << "Enter marks for each subject:" << endl;
    for (int i = 0; i < subjects; i++) {
        int marks;
        cout << "Subject " << i + 1 << ": ";
        cin >> marks;
        total = total + marks;
    }
    
    percentage = (float)total / subjects;
    
    if (percentage >= 90) {
        grade = "A+";
    } else if (percentage >= 80) {
        grade = "A";
    } else if (percentage >= 70) {
        grade = "B";
    } else if (percentage >= 60) {
        grade = "C";
    } else if (percentage >= 50) {
        grade = "D";
    } else {
        grade = "F";
    }
    
    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;
}
