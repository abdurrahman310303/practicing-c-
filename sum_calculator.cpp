#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Sum Calculator" << endl;
    cout << "Enter number of values: ";
    cin >> n;
    
    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 1; i <= n; i++) {
        int num;
        cout << "Number " << i << ": ";
        cin >> num;
        sum = sum + num;
        cout << "Running sum: " << sum << endl;
    }
    
    cout << "Final sum: " << sum << endl;
    cout << "Average: " << (float)sum / n << endl;
    
    return 0;
}
