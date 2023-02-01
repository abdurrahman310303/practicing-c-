#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Strong Number Checker" << endl;
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n;
    while (n > 0) {
        int digit = n % 10;
        int factorial = 1;
        for (int i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }
        sum = sum + factorial;
        n = n / 10;
    }
    
    cout << "Original number: " << original << endl;
    cout << "Sum of factorials of digits: " << sum << endl;
    
    if (sum == original) {
        cout << original << " is a strong number!" << endl;
    } else {
        cout << original << " is not a strong number." << endl;
    }
    
    return 0;
}
