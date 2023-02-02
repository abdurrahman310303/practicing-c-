#include <iostream>
using namespace std;

int main() {
    int n, original, sum = 0, digits = 0;
    cout << "Narcissistic Number Checker" << endl;
    cout << "Enter a number: ";
    cin >> n;
    
    original = n;
    int temp = n;
    
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }
    
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power = power * digit;
        }
        sum = sum + power;
        temp = temp / 10;
    }
    
    cout << "Number of digits: " << digits << endl;
    cout << "Sum of powers: " << sum << endl;
    
    if (sum == original) {
        cout << original << " is a narcissistic number!" << endl;
    } else {
        cout << original << " is not a narcissistic number." << endl;
    }
    
    return 0;
}
