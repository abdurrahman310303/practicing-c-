#include <iostream>
using namespace std;

int main() {
    float celsius, fahrenheit, kelvin;
    int choice;
    
    cout << "Temperature Converter" << endl;
    cout << "1. Celsius to Fahrenheit and Kelvin" << endl;
    cout << "2. Fahrenheit to Celsius and Kelvin" << endl;
    cout << "3. Kelvin to Celsius and Fahrenheit" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter temperature in Celsius: ";
            cin >> celsius;
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            kelvin = celsius + 273.15;
            
            cout << "\nTemperature Conversions:" << endl;
            cout << "Celsius: " << celsius << "°C" << endl;
            cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
            cout << "Kelvin: " << kelvin << "K" << endl;
            
            cout << "\nConversion formulas used:" << endl;
            cout << "°F = (°C × 9/5) + 32 = (" << celsius << " × 9/5) + 32" << endl;
            cout << "K = °C + 273.15 = " << celsius << " + 273.15" << endl;
            break;
            
        case 2:
            cout << "Enter temperature in Fahrenheit: ";
            cin >> fahrenheit;
            celsius = (fahrenheit - 32) * 5.0 / 9.0;
            kelvin = celsius + 273.15;
            
            cout << "\nTemperature Conversions:" << endl;
            cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
            cout << "Celsius: " << celsius << "°C" << endl;
            cout << "Kelvin: " << kelvin << "K" << endl;
            
            cout << "\nConversion formulas used:" << endl;
            cout << "°C = (°F - 32) × 5/9 = (" << fahrenheit << " - 32) × 5/9" << endl;
            cout << "K = °C + 273.15 = " << celsius << " + 273.15" << endl;
            break;
            
        case 3:
            cout << "Enter temperature in Kelvin: ";
            cin >> kelvin;
            
            if (kelvin < 0) {
                cout << "Invalid temperature! Kelvin cannot be negative." << endl;
                return 1;
            }
            
            celsius = kelvin - 273.15;
            fahrenheit = (celsius * 9.0 / 5.0) + 32;
            
            cout << "\nTemperature Conversions:" << endl;
            cout << "Kelvin: " << kelvin << "K" << endl;
            cout << "Celsius: " << celsius << "°C" << endl;
            cout << "Fahrenheit: " << fahrenheit << "°F" << endl;
            
            cout << "\nConversion formulas used:" << endl;
            cout << "°C = K - 273.15 = " << kelvin << " - 273.15" << endl;
            cout << "°F = (°C × 9/5) + 32 = (" << celsius << " × 9/5) + 32" << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }
    
    cout << "\nTemperature reference points:" << endl;
    cout << "Water freezing: 0°C = 32°F = 273.15K" << endl;
    cout << "Water boiling: 100°C = 212°F = 373.15K" << endl;
    cout << "Absolute zero: -273.15°C = -459.67°F = 0K" << endl;
    
    return 0;
}
