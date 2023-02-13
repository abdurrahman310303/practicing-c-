#include <iostream>
using namespace std;

int main() {
    int decimal, quotient, remainder, step = 1;
    string binary = "";
    
    cout << "Decimal to Binary Step-by-Step Converter" << endl;
    cout << "Enter decimal number: ";
    cin >> decimal;
    
    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }
    
    quotient = decimal;
    cout << "\nConversion Steps:" << endl;
    
    while (quotient != 0) {
        remainder = quotient % 2;
        quotient = quotient / 2;
        
        cout << "Step " << step << ": " << (quotient * 2 + remainder) << " ÷ 2 = " << quotient << " remainder " << remainder << endl;
        
        binary = (char)('0' + remainder) + binary;
        step++;
    }
    
    cout << "\nReading remainders from bottom to top:" << endl;
    cout << "Binary equivalent: " << binary << endl;
    
    cout << "\nVerification: ";
    int value = 0, power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            value = value + (1 << power);
        }
        power++;
    }
    cout << "Binary " << binary << " = Decimal " << value << endl;
    
    return 0;
}
