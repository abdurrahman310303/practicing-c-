#include <iostream>
using namespace std;

int main() {
    string binary;
    int decimal = 0, power = 0;
    
    cout << "Binary to Decimal Converter" << endl;
    cout << "Enter binary number: ";
    cin >> binary;
    
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal = decimal + (1 << power);
        }
        power++;
    }
    
    cout << "Binary " << binary << " = Decimal " << decimal << endl;
    
    return 0;
}
