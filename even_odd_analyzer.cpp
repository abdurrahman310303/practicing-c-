#include <iostream>
using namespace std;

int main() {
    int n, sum_even = 0, sum_odd = 0, count_even = 0, count_odd = 0;
    
    cout << "Even-Odd Number Analyzer" << endl;
    cout << "Enter upper limit: ";
    cin >> n;
    
    cout << "\nAnalyzing numbers from 1 to " << n << ":" << endl;
    
    cout << "Even numbers: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            sum_even = sum_even + i;
            count_even++;
        }
    }
    cout << endl;
    
    cout << "Odd numbers: ";
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            sum_odd = sum_odd + i;
            count_odd++;
        }
    }
    cout << endl;
    
    cout << "\nStatistics:" << endl;
    cout << "Even numbers count: " << count_even << endl;
    cout << "Even numbers sum: " << sum_even << endl;
    if (count_even > 0) {
        cout << "Even numbers average: " << (float)sum_even / count_even << endl;
    }
    
    cout << "Odd numbers count: " << count_odd << endl;
    cout << "Odd numbers sum: " << sum_odd << endl;
    if (count_odd > 0) {
        cout << "Odd numbers average: " << (float)sum_odd / count_odd << endl;
    }
    
    cout << "\nTotal sum: " << sum_even + sum_odd << endl;
    cout << "Total count: " << count_even + count_odd << endl;
    
    if (sum_even > sum_odd) {
        cout << "Even numbers have larger sum" << endl;
    } else if (sum_odd > sum_even) {
        cout << "Odd numbers have larger sum" << endl;
    } else {
        cout << "Even and odd sums are equal" << endl;
    }
    
    return 0;
}
