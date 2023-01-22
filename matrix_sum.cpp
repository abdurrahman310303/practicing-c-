#include <iostream>
using namespace std;

int main() {
    int rows, cols, sum = 0;
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    int matrix[rows][cols];
    cout << "Enter matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
            sum = sum + matrix[i][j];
        }
    }
    
    cout << "Matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Sum of all elements: " << sum << endl;
    return 0;
}
