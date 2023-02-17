#include <iostream>
using namespace std;

int main() {
    int num, isPrime = 1;
    
    cout << "Prime Number Checker with Division Test" << endl;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num <= 1) {
        isPrime = 0;
        cout << num << " is not a prime number (less than or equal to 1)" << endl;
    } else if (num == 2) {
        cout << num << " is a prime number (only even prime)" << endl;
    } else if (num % 2 == 0) {
        isPrime = 0;
        cout << num << " is not a prime number (divisible by 2)" << endl;
    } else {
        cout << "Testing divisibility:" << endl;
        for (int i = 3; i * i <= num; i = i + 2) {
            cout << "Checking " << num << " ÷ " << i << " = ";
            if (num % i == 0) {
                cout << num / i << " (exactly divisible)" << endl;
                isPrime = 0;
                break;
            } else {
                cout << (float)num / i << " (not exactly divisible)" << endl;
            }
        }
    }
    
    if (isPrime) {
        cout << num << " is a prime number!" << endl;
        cout << "It has only two factors: 1 and " << num << endl;
    } else {
        cout << num << " is not a prime number." << endl;
        cout << "Factors of " << num << ": ";
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
