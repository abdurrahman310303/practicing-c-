#include <iostream>
using namespace std;

int main() {
    int binary, decimal = 0, base = 1, remainder;
    cout << "Binary to Decimal Converter" << endl;
    cout << "Enter binary number: ";
    cin >> binary;
    
    int original = binary;
    while (binary > 0) {
        remainder = binary % 10;
        if (remainder == 0 || remainder == 1) {
            decimal = decimal + remainder * base;
            base = base * 2;
        } else {
            cout << "Invalid binary number!" << endl;
            return 1;
        }
        binary = binary / 10;
    }
    
    cout << "Binary " << original << " = Decimal " << decimal << endl;
    return 0;
}
