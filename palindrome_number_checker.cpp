#include <iostream>
using namespace std;

int main() {
    int num, temp, reverse = 0;
    
    cout << "Palindrome Number Checker" << endl;
    cout << "Enter a number: ";
    cin >> num;
    
    temp = num;
    while (temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp = temp / 10;
    }
    
    if (num == reverse) {
        cout << num << " is a palindrome number" << endl;
    } else {
        cout << num << " is not a palindrome number" << endl;
    }
    
    cout << "Original: " << num << ", Reversed: " << reverse << endl;
    
    return 0;
}
