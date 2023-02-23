#include <iostream>
using namespace std;

int main() {
    int decimal, binary = 0, remainder, base = 1;
    
    cout << "Decimal to Binary Converter (Alternative Method)" << endl;
    cout << "Enter decimal number: ";
    cin >> decimal;
    
    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }
    
    int original = decimal;
    cout << "\nConversion process:" << endl;
    
    while (decimal > 0) {
        remainder = decimal % 2;
        binary = binary + remainder * base;
        cout << decimal << " ÷ 2 = " << decimal / 2 << " remainder " << remainder << endl;
        decimal = decimal / 2;
        base = base * 10;
    }
    
    cout << "\nDecimal " << original << " = Binary " << binary << endl;
    
    cout << "\nVerification (Binary to Decimal):" << endl;
    int temp = binary, decimal_check = 0, power = 0;
    while (temp > 0) {
        int bit = temp % 10;
        if (bit == 1) {
            decimal_check = decimal_check + (1 << power);
            cout << "Position " << power << ": " << bit << " × 2^" << power << " = " << (1 << power) << endl;
        }
        temp = temp / 10;
        power++;
    }
    
    cout << "Decimal equivalent: " << decimal_check << endl;
    
    return 0;
}
