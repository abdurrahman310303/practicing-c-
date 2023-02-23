#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], sum = 0, product = 1;
    float average;
    
    cout << "Matrix Statistics Calculator" << endl;
    cout << "Enter 3x3 matrix elements:" << endl;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
            sum = sum + matrix[i][j];
            product = product * matrix[i][j];
        }
    }
    
    average = (float)sum / 9;
    
    cout << "\nMatrix:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    
    cout << "\nMatrix Statistics:" << endl;
    cout << "Sum of all elements: " << sum << endl;
    cout << "Product of all elements: " << product << endl;
    cout << "Average of elements: " << average << endl;
    
    int max = matrix[0][0], min = matrix[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max) max = matrix[i][j];
            if (matrix[i][j] < min) min = matrix[i][j];
        }
    }
    
    cout << "Maximum element: " << max << endl;
    cout << "Minimum element: " << min << endl;
    cout << "Range: " << max - min << endl;
    
    cout << "\nDiagonal elements:" << endl;
    cout << "Main diagonal: ";
    int diag_sum = 0;
    for (int i = 0; i < 3; i++) {
        cout << matrix[i][i] << " ";
        diag_sum = diag_sum + matrix[i][i];
    }
    cout << "(Sum: " << diag_sum << ")" << endl;
    
    cout << "Anti diagonal: ";
    diag_sum = 0;
    for (int i = 0; i < 3; i++) {
        cout << matrix[i][2-i] << " ";
        diag_sum = diag_sum + matrix[i][2-i];
    }
    cout << "(Sum: " << diag_sum << ")" << endl;
    
    return 0;
}
