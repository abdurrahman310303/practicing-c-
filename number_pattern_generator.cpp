#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Number Pattern Generator" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "\nPattern 1 - Number Triangle:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 2 - Reverse Number Triangle:" << endl;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 3 - Number Pyramid:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}
