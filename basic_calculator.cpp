#include <iostream>
using namespace std;

int main() {
    int choice, num1, num2, result;
    
    cout << "Basic Calculator" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulus" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    switch (choice) {
        case 1:
            result = num1 + num2;
            cout << num1 << " + " << num2 << " = " << result << endl;
            break;
        case 2:
            result = num1 - num2;
            cout << num1 << " - " << num2 << " = " << result << endl;
            break;
        case 3:
            result = num1 * num2;
            cout << num1 << " × " << num2 << " = " << result << endl;
            break;
        case 4:
            if (num2 != 0) {
                cout << num1 << " ÷ " << num2 << " = " << (float)num1 / num2 << endl;
                cout << "Quotient: " << num1 / num2 << endl;
                cout << "Remainder: " << num1 % num2 << endl;
            } else {
                cout << "Division by zero is not allowed!" << endl;
            }
            break;
        case 5:
            if (num2 != 0) {
                result = num1 % num2;
                cout << num1 << " % " << num2 << " = " << result << endl;
            } else {
                cout << "Modulus by zero is not allowed!" << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
