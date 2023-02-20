#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Matrix Addition Calculator" << endl;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    if (rows > 3 || cols > 3) {
        cout << "Maximum 3x3 matrix supported" << endl;
        return 1;
    }
    
    int matrix1[3][3], matrix2[3][3], result[3][3];
    
    cout << "\nEnter first matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix1[i][j];
        }
    }
    
    cout << "\nEnter second matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix2[i][j];
        }
    }
    
    cout << "\nMatrix Addition Process:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << "(" << i + 1 << "," << j + 1 << "): " << matrix1[i][j] << " + " << matrix2[i][j] << " = " << result[i][j] << endl;
        }
    }
    
    cout << "\nFirst Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nSecond Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix2[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nResult Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
