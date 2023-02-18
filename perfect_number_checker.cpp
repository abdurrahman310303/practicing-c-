#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    
    cout << "Perfect Number Checker" << endl;
    cout << "Enter a positive number: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive number" << endl;
        return 1;
    }
    
    cout << "Finding divisors of " << n << ":" << endl;
    cout << "Proper divisors: ";
    
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    
    cout << endl;
    cout << "Sum of proper divisors: " << sum << endl;
    cout << "Original number: " << n << endl;
    
    if (sum == n) {
        cout << n << " is a perfect number!" << endl;
        cout << "A perfect number equals the sum of its proper divisors." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
        if (sum > n) {
            cout << "It is an abundant number (sum > number)." << endl;
        } else {
            cout << "It is a deficient number (sum < number)." << endl;
        }
    }
    
    cout << "\nNote: Perfect numbers are rare!" << endl;
    cout << "First few perfect numbers: 6, 28, 496, 8128..." << endl;
    
    return 0;
}
