#include <iostream>
using namespace std;

int main() {
    int decimal, base, result[50], i = 0;
    cout << "Number Base Converter" << endl;
    cout << "Enter decimal number: ";
    cin >> decimal;
    cout << "Enter target base (2-16): ";
    cin >> base;
    
    if (base < 2 || base > 16) {
        cout << "Invalid base! Base should be between 2 and 16." << endl;
        return 1;
    }
    
    int original = decimal;
    if (decimal == 0) {
        cout << "Result: 0" << endl;
        return 0;
    }
    
    while (decimal > 0) {
        result[i] = decimal % base;
        decimal = decimal / base;
        i++;
    }
    
    cout << "Decimal " << original << " in base " << base << " is: ";
    for (int j = i - 1; j >= 0; j--) {
        if (result[j] < 10) {
            cout << result[j];
        } else {
            cout << (char)('A' + result[j] - 10);
        }
    }
    cout << endl;
    
    return 0;
}
