#include <iostream>
using namespace std;

int main() {
    int num, original, armstrong_sum = 0, perfect_sum = 0;
    int digit_count = 0, temp;
    
    cout << "Special Number Checker" << endl;
    cout << "Enter a positive number: ";
    cin >> num;
    
    if (num <= 0) {
        cout << "Please enter a positive number" << endl;
        return 1;
    }
    
    original = num;
    
    temp = num;
    while (temp > 0) {
        digit_count++;
        temp = temp / 10;
    }
    
    temp = num;
    cout << "\nChecking if " << num << " is an Armstrong number:" << endl;
    cout << "Number of digits: " << digit_count << endl;
    
    while (temp > 0) {
        int digit = temp % 10;
        int power = 1;
        for (int i = 0; i < digit_count; i++) {
            power = power * digit;
        }
        cout << digit << "^" << digit_count << " = " << power << endl;
        armstrong_sum = armstrong_sum + power;
        temp = temp / 10;
    }
    
    cout << "Sum = " << armstrong_sum << endl;
    if (armstrong_sum == original) {
        cout << original << " is an Armstrong number!" << endl;
    } else {
        cout << original << " is not an Armstrong number." << endl;
    }
    
    cout << "\nChecking if " << num << " is a Perfect number:" << endl;
    cout << "Finding proper divisors of " << num << ":" << endl;
    
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            cout << i << " ";
            perfect_sum = perfect_sum + i;
        }
    }
    cout << endl;
    cout << "Sum of proper divisors = " << perfect_sum << endl;
    
    if (perfect_sum == original) {
        cout << original << " is a Perfect number!" << endl;
    } else {
        cout << original << " is not a Perfect number." << endl;
    }
    
    cout << "\nChecking if " << num << " is a Prime number:" << endl;
    bool is_prime = true;
    if (num <= 1) {
        is_prime = false;
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                cout << num << " is divisible by " << i << endl;
                is_prime = false;
                break;
            }
        }
    }
    
    if (is_prime) {
        cout << original << " is a Prime number!" << endl;
    } else {
        cout << original << " is not a Prime number." << endl;
    }
    
    cout << "\nSummary for " << original << ":" << endl;
    cout << "Armstrong: " << (armstrong_sum == original ? "Yes" : "No") << endl;
    cout << "Perfect: " << (perfect_sum == original ? "Yes" : "No") << endl;
    cout << "Prime: " << (is_prime ? "Yes" : "No") << endl;
    
    return 0;
}
