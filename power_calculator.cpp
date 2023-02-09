#include <iostream>
using namespace std;

int main() {
    int choice, x, result = 1;
    
    cout << "Power Calculator" << endl;
    cout << "1. Square\n2. Cube\n3. Custom Power" << endl;
    cout << "Choose option: ";
    cin >> choice;
    
    cout << "Enter number: ";
    cin >> x;
    
    switch (choice) {
        case 1:
            result = x * x;
            cout << x << "^2 = " << result << endl;
            break;
        case 2:
            result = x * x * x;
            cout << x << "^3 = " << result << endl;
            break;
        case 3:
            int power;
            cout << "Enter power: ";
            cin >> power;
            for (int i = 0; i < power; i++) {
                result = result * x;
            }
            cout << x << "^" << power << " = " << result << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}
