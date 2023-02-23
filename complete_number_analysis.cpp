#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0, digit_sum = 0, digit_count = 0;
    int temp, largest_digit = 0, smallest_digit = 9;
    
    cout << "Complete Number Analysis Tool" << endl;
    cout << "Enter a positive number: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Please enter a positive number" << endl;
        return 1;
    }
    
    temp = num;
    cout << "\nAnalyzing number: " << num << endl;
    cout << "Individual digits: ";
    
    while (temp > 0) {
        int digit = temp % 10;
        cout << digit << " ";
        
        reversed = reversed * 10 + digit;
        digit_sum = digit_sum + digit;
        digit_count++;
        
        if (digit > largest_digit) largest_digit = digit;
        if (digit < smallest_digit) smallest_digit = digit;
        
        temp = temp / 10;
    }
    cout << endl;
    
    cout << "\nComplete Analysis:" << endl;
    cout << "Original number: " << num << endl;
    cout << "Reversed number: " << reversed << endl;
    cout << "Number of digits: " << digit_count << endl;
    cout << "Sum of digits: " << digit_sum << endl;
    cout << "Average of digits: " << (float)digit_sum / digit_count << endl;
    cout << "Largest digit: " << largest_digit << endl;
    cout << "Smallest digit: " << smallest_digit << endl;
    cout << "Digit range: " << largest_digit - smallest_digit << endl;
    
    cout << "\nNumber Properties:" << endl;
    if (num == reversed) {
        cout << "✓ Palindrome number" << endl;
    } else {
        cout << "✗ Not a palindrome" << endl;
    }
    
    if (num % digit_sum == 0) {
        cout << "✓ Divisible by sum of digits" << endl;
    } else {
        cout << "✗ Not divisible by sum of digits" << endl;
    }
    
    if (digit_count % 2 == 0) {
        cout << "✓ Even number of digits" << endl;
    } else {
        cout << "✓ Odd number of digits" << endl;
    }
    
    return 0;
}
