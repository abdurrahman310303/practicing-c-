#include <iostream>
using namespace std;

int main() {
    int choice, angle;
    float radians, result;
    
    cout << "Basic Trigonometry Calculator" << endl;
    cout << "1. Sine (approximate)" << endl;
    cout << "2. Cosine (approximate)" << endl;
    cout << "3. Tangent (approximate)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    cout << "Enter angle in degrees: ";
    cin >> angle;
    
    radians = angle * 3.14159 / 180.0;
    
    switch (choice) {
        case 1: {
            result = radians - (radians * radians * radians) / 6.0 + (radians * radians * radians * radians * radians) / 120.0;
            cout << "sin(" << angle << "°) ≈ " << result << endl;
            break;
        }
        case 2: {
            result = 1 - (radians * radians) / 2.0 + (radians * radians * radians * radians) / 24.0;
            cout << "cos(" << angle << "°) ≈ " << result << endl;
            break;
        }
        case 3: {
            float sin_val = radians - (radians * radians * radians) / 6.0;
            float cos_val = 1 - (radians * radians) / 2.0;
            if (cos_val != 0) {
                result = sin_val / cos_val;
                cout << "tan(" << angle << "°) ≈ " << result << endl;
            } else {
                cout << "tan(" << angle << "°) is undefined (cos = 0)" << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice" << endl;
    }
    
    return 0;
}
