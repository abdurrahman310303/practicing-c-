#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, sum_digits = 0, count_digits = 0;
    
    cout << "Number Properties Analyzer" << endl;
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    
    cout << "\nAnalyzing number: " << original << endl;
    
    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        sum_digits = sum_digits + digit;
        count_digits++;
        cout << "Digit extracted: " << digit << endl;
        num = num / 10;
    }
    
    cout << "\nResults:" << endl;
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reverse << endl;
    cout << "Number of digits: " << count_digits << endl;
    cout << "Sum of digits: " << sum_digits << endl;
    cout << "Average of digits: " << (float)sum_digits / count_digits << endl;
    
    if (original == reverse) {
        cout << "This is a palindrome number!" << endl;
    } else {
        cout << "This is not a palindrome number." << endl;
    }
    
    if (original % sum_digits == 0) {
        cout << "Number is divisible by sum of its digits." << endl;
    } else {
        cout << "Number is not divisible by sum of its digits." << endl;
    }
    
    return 0;
}
