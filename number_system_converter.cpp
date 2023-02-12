#include <iostream>
using namespace std;

int main() {
    int choice, num, result;
    
    cout << "Number System Converter" << endl;
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Decimal to Octal" << endl;
    cout << "3. Decimal to Hexadecimal" << endl;
    cout << "Choose conversion type: ";
    cin >> choice;
    
    cout << "Enter decimal number: ";
    cin >> num;
    
    if (choice == 1) {
        cout << "Binary: ";
        if (num == 0) {
            cout << "0";
        } else {
            string binary = "";
            while (num > 0) {
                binary = (char)('0' + num % 2) + binary;
                num = num / 2;
            }
            cout << binary;
        }
    } else if (choice == 2) {
        cout << "Octal: ";
        if (num == 0) {
            cout << "0";
        } else {
            string octal = "";
            while (num > 0) {
                octal = (char)('0' + num % 8) + octal;
                num = num / 8;
            }
            cout << octal;
        }
    } else if (choice == 3) {
        cout << "Hexadecimal: ";
        if (num == 0) {
            cout << "0";
        } else {
            string hex = "";
            while (num > 0) {
                int remainder = num % 16;
                if (remainder < 10) {
                    hex = (char)('0' + remainder) + hex;
                } else {
                    hex = (char)('A' + remainder - 10) + hex;
                }
                num = num / 16;
            }
            cout << hex;
        }
    } else {
        cout << "Invalid choice";
    }
    
    cout << endl;
    return 0;
}
