#include <iostream>
using namespace std;

int main() {
    int choice, num;
    
    cout << "Mathematical Operations Menu" << endl;
    cout << "1. Factorial" << endl;
    cout << "2. Sum of digits" << endl;
    cout << "3. Reverse number" << endl;
    cout << "4. Check Armstrong number" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter number: ";
    cin >> num;
    
    switch (choice) {
        case 1: {
            int factorial = 1;
            for (int i = 1; i <= num; i++) {
                factorial = factorial * i;
            }
            cout << "Factorial of " << num << " = " << factorial << endl;
            break;
        }
        case 2: {
            int sum = 0, temp = num;
            while (temp > 0) {
                sum = sum + temp % 10;
                temp = temp / 10;
            }
            cout << "Sum of digits of " << num << " = " << sum << endl;
            break;
        }
        case 3: {
            int reverse = 0, temp = num;
            while (temp > 0) {
                reverse = reverse * 10 + temp % 10;
                temp = temp / 10;
            }
            cout << "Reverse of " << num << " = " << reverse << endl;
            break;
        }
        case 4: {
            int temp = num, digits = 0, sum = 0;
            while (temp > 0) {
                digits++;
                temp = temp / 10;
            }
            temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                int power = 1;
                for (int i = 0; i < digits; i++) {
                    power = power * digit;
                }
                sum = sum + power;
                temp = temp / 10;
            }
            if (sum == num) {
                cout << num << " is an Armstrong number" << endl;
            } else {
                cout << num << " is not an Armstrong number" << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}
