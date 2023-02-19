#include <iostream>
using namespace std;

int main() {
    int decimal, base, quotient, remainder;
    string result = "";
    
    cout << "Universal Base Converter" << endl;
    cout << "Enter decimal number: ";
    cin >> decimal;
    cout << "Enter target base (2-16): ";
    cin >> base;
    
    if (base < 2 || base > 16) {
        cout << "Base must be between 2 and 16" << endl;
        return 1;
    }
    
    if (decimal == 0) {
        cout << "Result: 0" << endl;
        return 0;
    }
    
    quotient = decimal;
    cout << "\nConversion process:" << endl;
    int step = 1;
    
    while (quotient > 0) {
        remainder = quotient % base;
        quotient = quotient / base;
        
        char digit;
        if (remainder < 10) {
            digit = '0' + remainder;
        } else {
            digit = 'A' + (remainder - 10);
        }
        
        cout << "Step " << step << ": " << (quotient * base + remainder) << " ÷ " << base;
        cout << " = " << quotient << " remainder " << remainder;
        cout << " (digit: " << digit << ")" << endl;
        
        result = digit + result;
        step++;
    }
    
    cout << "\nDecimal " << decimal << " in base " << base << " = " << result << endl;
    
    cout << "\nVerification:" << endl;
    int verification = 0, power = 1;
    for (int i = result.length() - 1; i >= 0; i--) {
        int digit_value;
        if (result[i] >= '0' && result[i] <= '9') {
            digit_value = result[i] - '0';
        } else {
            digit_value = result[i] - 'A' + 10;
        }
        verification = verification + digit_value * power;
        cout << result[i] << " × " << power << " = " << digit_value * power << endl;
        power = power * base;
    }
    cout << "Total: " << verification << endl;
    
    return 0;
}
