#include <iostream>
using namespace std;

int main() {
    int original, num, reversed = 0, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    original = num;
    
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        sum = sum + digit * digit * digit;
        num = num / 10;
    }
    
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reversed << endl;
    cout << "Sum of cubes of digits: " << sum << endl;
    
    if (sum == original) {
        cout << "It's an Armstrong number!" << endl;
    }
    
    return 0;
}
