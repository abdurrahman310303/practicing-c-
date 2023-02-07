#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Roman Numeral Converter" << endl;
    cout << "Enter a number (1-3999): ";
    cin >> n;
    
    if (n < 1 || n > 3999) {
        cout << "Number out of range!" << endl;
        return 1;
    }
    
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string numerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    cout << "Roman numeral: ";
    for (int i = 0; i < 13; i++) {
        while (n >= values[i]) {
            cout << numerals[i];
            n = n - values[i];
        }
    }
    cout << endl;
    
    return 0;
}
