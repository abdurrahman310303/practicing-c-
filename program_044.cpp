#include <iostream>
using namespace std;

int main() {
    int choice;
    float celsius, fahrenheit;
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    if (choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << celsius << "C = " << fahrenheit << "F" << endl;
    } else if (choice == 2) {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5.0 / 9.0;
        cout << fahrenheit << "F = " << celsius << "C" << endl;
    } else {
        cout << "Invalid choice" << endl;
    }
    return 0;
}
