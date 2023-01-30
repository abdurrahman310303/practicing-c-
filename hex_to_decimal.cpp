#include <iostream>
using namespace std;

int main() {
    int hex, decimal = 0, base = 1, remainder;
    cout << "Hexadecimal to Decimal Converter" << endl;
    cout << "Enter hexadecimal number: ";
    cin >> hex;
    
    int original = hex;
    while (hex > 0) {
        remainder = hex % 10;
        if (remainder >= 0 && remainder <= 9) {
            decimal = decimal + remainder * base;
            base = base * 16;
        } else {
            cout << "Invalid hexadecimal number!" << endl;
            return 1;
        }
        hex = hex / 10;
    }
    
    cout << "Hexadecimal " << original << " = Decimal " << decimal << endl;
    return 0;
}
