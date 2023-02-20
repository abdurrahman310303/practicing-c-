#include <iostream>
using namespace std;

int main() {
    int n, temp, digit_count = 0, sum = 0, product = 1;
    
    cout << "Digit Analysis Tool" << endl;
    cout << "Enter a positive number: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive number" << endl;
        return 1;
    }
    
    temp = n;
    cout << "\nExtracting digits from " << n << ":" << endl;
    
    while (temp > 0) {
        int digit = temp % 10;
        digit_count++;
        sum = sum + digit;
        product = product * digit;
        
        cout << "Digit " << digit_count << ": " << digit << endl;
        cout << "  Running sum: " << sum << endl;
        cout << "  Running product: " << product << endl;
        
        temp = temp / 10;
    }
    
    cout << "\nDigit Analysis Results:" << endl;
    cout << "Original number: " << n << endl;
    cout << "Total digits: " << digit_count << endl;
    cout << "Sum of digits: " << sum << endl;
    cout << "Product of digits: " << product << endl;
    cout << "Average of digits: " << (float)sum / digit_count << endl;
    
    if (n % sum == 0) {
        cout << "Number is divisible by sum of digits (" << n / sum << " times)" << endl;
    } else {
        cout << "Number is not divisible by sum of digits" << endl;
    }
    
    if (product == 0) {
        cout << "Contains zero digit(s)" << endl;
    }
    
    if (digit_count % 2 == 0) {
        cout << "Even number of digits" << endl;
    } else {
        cout << "Odd number of digits" << endl;
    }
    
    return 0;
}
