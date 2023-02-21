#include <iostream>
using namespace std;

int main() {
    int num, factorial = 1;
    
    cout << "Factorial Calculator with Steps" << endl;
    cout << "Enter a positive number: ";
    cin >> num;
    
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers" << endl;
        return 1;
    }
    
    if (num == 0 || num == 1) {
        cout << "Factorial of " << num << " = 1" << endl;
        return 0;
    }
    
    cout << "\nCalculating " << num << "! step by step:" << endl;
    cout << num << "! = ";
    
    for (int i = num; i >= 1; i--) {
        cout << i;
        factorial = factorial * i;
        if (i > 1) {
            cout << " × ";
        }
    }
    
    cout << " = " << factorial << endl;
    
    cout << "\nStep by step calculation:" << endl;
    int temp_factorial = 1;
    for (int i = 1; i <= num; i++) {
        temp_factorial = temp_factorial * i;
        cout << "Step " << i << ": " << i << "! = " << temp_factorial << endl;
    }
    
    cout << "\nFinal result: " << num << "! = " << factorial << endl;
    
    return 0;
}
