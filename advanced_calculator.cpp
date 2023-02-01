#include <iostream>
using namespace std;

int main() {
    int choice, num1, num2, result;
    char operation;
    
    do {
        cout << "\nAdvanced Calculator" << endl;
        cout << "1. Basic Operations (+, -, *, /)" << endl;
        cout << "2. Power Calculation" << endl;
        cout << "3. Square Root" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                cout << "Enter operation (+, -, *, /): ";
                cin >> operation;
                
                if (operation == '+') {
                    result = num1 + num2;
                    cout << "Result: " << result << endl;
                } else if (operation == '-') {
                    result = num1 - num2;
                    cout << "Result: " << result << endl;
                } else if (operation == '*') {
                    result = num1 * num2;
                    cout << "Result: " << result << endl;
                } else if (operation == '/') {
                    if (num2 != 0) {
                        cout << "Result: " << (float)num1 / num2 << endl;
                    } else {
                        cout << "Error: Division by zero!" << endl;
                    }
                } else {
                    cout << "Invalid operation!" << endl;
                }
                break;
                
            case 2:
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = 1;
                for (int i = 0; i < num2; i++) {
                    result = result * num1;
                }
                cout << "Result: " << result << endl;
                break;
                
            case 3:
                cout << "Enter number: ";
                cin >> num1;
                float sqrt = 1.0;
                for (int i = 0; i < 20; i++) {
                    sqrt = (sqrt + num1 / sqrt) / 2;
                }
                cout << "Square root: " << sqrt << endl;
                break;
                
            case 4:
                cout << "Exiting calculator..." << endl;
                break;
                
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    
    return 0;
}
