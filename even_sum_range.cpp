#include <iostream>
using namespace std;

int main() {
    int start, end, sum = 0;
    cout << "Enter starting number: ";
    cin >> start;
    cout << "Enter ending number: ";
    cin >> end;
    
    cout << "Even numbers between " << start << " and " << end << ": ";
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << endl;
    cout << "Sum of even numbers: " << sum << endl;
    return 0;
}
