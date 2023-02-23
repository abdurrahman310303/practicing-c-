#include <iostream>
using namespace std;

int main() {
    int choice, n;
    
    cout << "Pattern Generator Menu" << endl;
    cout << "1. Number Triangle" << endl;
    cout << "2. Alphabet Triangle" << endl;
    cout << "3. Star Diamond" << endl;
    cout << "4. Number Pyramid" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter size: ";
    cin >> n;
    
    switch (choice) {
        case 1:
            cout << "\nNumber Triangle:" << endl;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << j << " ";
                }
                cout << endl;
            }
            break;
            
        case 2:
            cout << "\nAlphabet Triangle:" << endl;
            for (int i = 1; i <= n; i++) {
                char ch = 'A';
                for (int j = 1; j <= i; j++) {
                    cout << ch << " ";
                    ch++;
                }
                cout << endl;
            }
            break;
            
        case 3:
            cout << "\nStar Diamond:" << endl;
            for (int i = 1; i <= n; i++) {
                for (int j = n; j > i; j--) {
                    cout << " ";
                }
                for (int k = 1; k <= 2*i-1; k++) {
                    cout << "*";
                }
                cout << endl;
            }
            for (int i = n-1; i >= 1; i--) {
                for (int j = n; j > i; j--) {
                    cout << " ";
                }
                for (int k = 1; k <= 2*i-1; k++) {
                    cout << "*";
                }
                cout << endl;
            }
            break;
            
        case 4:
            cout << "\nNumber Pyramid:" << endl;
            for (int i = 1; i <= n; i++) {
                for (int j = n; j > i; j--) {
                    cout << " ";
                }
                for (int k = 1; k <= i; k++) {
                    cout << k << " ";
                }
                cout << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
