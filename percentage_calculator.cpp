#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float percentage;
    cout << "Enter number of subjects: ";
    cin >> n;
    
    int marks[n];
    cout << "Enter marks for " << n << " subjects:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
        sum = sum + marks[i];
    }
    
    percentage = (float)sum / (n * 100) * 100;
    
    cout << "\nResult Summary:" << endl;
    cout << "Total marks: " << sum << "/" << n * 100 << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    
    if (percentage >= 90) {
        cout << "Grade: A+ (Excellent)" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: A (Very Good)" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: B (Good)" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: C (Average)" << endl;
    } else if (percentage >= 40) {
        cout << "Grade: D (Pass)" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }
    
    return 0;
}
