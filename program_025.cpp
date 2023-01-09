#include <iostream>
using namespace std;

int main() {
    int choice, a, b;
    cout << "Calculator Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    
    if (choice == 1) {
        cout << "Result: " << a + b << endl;
    } else if (choice == 2) {
        cout << "Result: " << a - b << endl;
    } else if (choice == 3) {
        cout << "Result: " << a * b << endl;
    } else if (choice == 4) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
