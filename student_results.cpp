#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;
    cout << "Enter number of students: ";
    cin >> n;
    
    int marks[n];
    cout << "Enter marks for " << n << " students:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
        sum = sum + marks[i];
    }
    
    average = (float)sum / n;
    
    cout << "\nResults:" << endl;
    cout << "Total marks: " << sum << endl;
    cout << "Average marks: " << average << endl;
    
    int passed = 0, failed = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 40) {
            passed++;
        } else {
            failed++;
        }
    }
    
    cout << "Students passed: " << passed << endl;
    cout << "Students failed: " << failed << endl;
    return 0;
}
