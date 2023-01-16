#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float average;
    cout << "Enter number of elements: ";
    cin >> n;
    int marks[n];
    cout << "Enter marks: ";
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
        sum = sum + marks[i];
    }
    average = (float)sum / n;
    cout << "Total marks: " << sum << endl;
    cout << "Average marks: " << average << endl;
    return 0;
}
