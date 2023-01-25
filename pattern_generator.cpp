#include <iostream>
using namespace std;

int main() {
    int n, pattern;
    cout << "Pattern Generator" << endl;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Choose pattern (1-3): ";
    cin >> pattern;
    
    if (pattern == 1) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j << " ";
            }
            cout << endl;
        }
    } else if (pattern == 2) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }
            cout << endl;
        }
    } else if (pattern == 3) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                cout << " ";
            }
            for (int k = 1; k <= 2 * i - 1; k++) {
                cout << "*";
            }
            cout << endl;
        }
    } else {
        cout << "Invalid pattern choice!" << endl;
    }
    
    return 0;
}
