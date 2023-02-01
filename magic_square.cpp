#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Magic Square Generator (3x3)" << endl;
    cout << "Enter any number: ";
    cin >> n;
    
    int magic[3][3];
    int num = n;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            magic[i][j] = num++;
        }
    }
    
    cout << "Magic Square:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << magic[i][j] << "\t";
        }
        cout << endl;
    }
    
    int sum1 = magic[0][0] + magic[0][1] + magic[0][2];
    int sum2 = magic[0][0] + magic[1][0] + magic[2][0];
    int sum3 = magic[0][0] + magic[1][1] + magic[2][2];
    
    cout << "Row sum: " << sum1 << endl;
    cout << "Column sum: " << sum2 << endl;
    cout << "Diagonal sum: " << sum3 << endl;
    
    return 0;
}
