#include <iostream>
using namespace std;

int main() {
    int matrix[2][2], determinant;
    
    cout << "2x2 Matrix Determinant Calculator" << endl;
    cout << "Enter matrix elements:" << endl;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    
    determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Determinant = (" << matrix[0][0] << " × " << matrix[1][1] << ") - (" << matrix[0][1] << " × " << matrix[1][0] << ")" << endl;
    cout << "Determinant = " << determinant << endl;
    
    if (determinant == 0) {
        cout << "Matrix is singular (non-invertible)" << endl;
    } else {
        cout << "Matrix is non-singular (invertible)" << endl;
    }
    
    return 0;
}
