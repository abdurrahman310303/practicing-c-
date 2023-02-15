#include <iostream>
using namespace std;

int main() {
    int rows;
    
    cout << "Star Pattern Generator" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "\nPattern 1 - Right Triangle:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 2 - Inverted Triangle:" << endl;
    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 3 - Pyramid:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    cout << "\nPattern 4 - Diamond:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = rows - 1; i >= 1; i--) {
        for (int j = rows; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    return 0;
}
