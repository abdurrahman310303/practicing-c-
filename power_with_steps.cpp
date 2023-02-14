#include <iostream>
using namespace std;

int main() {
    int base, exponent, result = 1;
    
    cout << "Power Calculator (Using Loops)" << endl;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;
    
    if (exponent == 0) {
        result = 1;
    } else if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result = result * base;
        }
    } else {
        cout << "Negative exponent not supported in this version" << endl;
        return 1;
    }
    
    cout << base << "^" << exponent << " = " << result << endl;
    
    cout << "\nCalculation steps:" << endl;
    int temp = 1;
    for (int i = 1; i <= exponent; i++) {
        temp = temp * base;
        cout << "Step " << i << ": " << base << "^" << i << " = " << temp << endl;
    }
    
    return 0;
}
