#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], sum = 0;
    cout << "Enter 3x3 matrix elements:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        sum = sum + matrix[i][i];
    }
    cout << "Sum of diagonal elements: " << sum << endl;
    return 0;
}
