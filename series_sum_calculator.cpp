#include <iostream>
using namespace std;

int main() {
    int choice, n;
    
    cout << "Series Sum Calculator" << endl;
    cout << "1. Sum of natural numbers (1+2+3+...+n)" << endl;
    cout << "2. Sum of squares (1²+2²+3²+...+n²)" << endl;
    cout << "3. Sum of cubes (1³+2³+3³+...+n³)" << endl;
    cout << "4. Sum of even numbers" << endl;
    cout << "5. Sum of odd numbers" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter value of n: ";
    cin >> n;
    
    switch (choice) {
        case 1: {
            int sum = 0;
            cout << "\nCalculating: ";
            for (int i = 1; i <= n; i++) {
                sum = sum + i;
                cout << i;
                if (i < n) cout << " + ";
            }
            cout << " = " << sum << endl;
            cout << "Formula: n(n+1)/2 = " << n << "×" << (n+1) << "/2 = " << n*(n+1)/2 << endl;
            break;
        }
        case 2: {
            int sum = 0;
            cout << "\nCalculating: ";
            for (int i = 1; i <= n; i++) {
                sum = sum + i * i;
                cout << i << "²";
                if (i < n) cout << " + ";
            }
            cout << " = " << sum << endl;
            cout << "Formula: n(n+1)(2n+1)/6 = " << n*(n+1)*(2*n+1)/6 << endl;
            break;
        }
        case 3: {
            int sum = 0;
            cout << "\nCalculating: ";
            for (int i = 1; i <= n; i++) {
                sum = sum + i * i * i;
                cout << i << "³";
                if (i < n) cout << " + ";
            }
            cout << " = " << sum << endl;
            cout << "Formula: [n(n+1)/2]² = " << (n*(n+1)/2)*(n*(n+1)/2) << endl;
            break;
        }
        case 4: {
            int sum = 0, count = 0;
            cout << "\nEven numbers up to " << n << ": ";
            for (int i = 2; i <= n; i = i + 2) {
                sum = sum + i;
                count++;
                cout << i;
                if (i + 2 <= n) cout << " + ";
            }
            cout << " = " << sum << endl;
            cout << "Count of even numbers: " << count << endl;
            break;
        }
        case 5: {
            int sum = 0, count = 0;
            cout << "\nOdd numbers up to " << n << ": ";
            for (int i = 1; i <= n; i = i + 2) {
                sum = sum + i;
                count++;
                cout << i;
                if (i + 2 <= n) cout << " + ";
            }
            cout << " = " << sum << endl;
            cout << "Count of odd numbers: " << count << endl;
            cout << "Formula: n² = " << count << "² = " << count*count << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}
