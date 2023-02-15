#include <iostream>
using namespace std;

int main() {
    int num, original, digits = 0, sum = 0;
    
    cout << "Armstrong Number Checker" << endl;
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    
    while (num > 0) {
        digits++;
        num = num / 10;
    }
    
    num = original;
    cout << "Number of digits: " << digits << endl;
    cout << "Calculation:" << endl;
    
    while (num > 0) {
        int digit = num % 10;
        int power = 1;
        
        for (int i = 0; i < digits; i++) {
            power = power * digit;
        }
        
        cout << digit << "^" << digits << " = " << power << endl;
        sum = sum + power;
        num = num / 10;
    }
    
    cout << "Sum = " << sum << endl;
    cout << "Original number = " << original << endl;
    
    if (sum == original) {
        cout << original << " is an Armstrong number" << endl;
    } else {
        cout << original << " is not an Armstrong number" << endl;
    }
    
    return 0;
}
