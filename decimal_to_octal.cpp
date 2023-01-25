#include <iostream>
using namespace std;

int main() {
    int decimal, octal[50], i = 0;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    int original = decimal;
    
    if (decimal == 0) {
        cout << "Octal equivalent: 0" << endl;
        return 0;
    }
    
    while (decimal > 0) {
        octal[i] = decimal % 8;
        decimal = decimal / 8;
        i++;
    }
    
    cout << "Octal equivalent of " << original << " is: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << octal[j];
    }
    cout << endl;
    return 0;
}
