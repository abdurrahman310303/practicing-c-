#include <iostream>
using namespace std;

int main() {
    int num1, num2, lcm, gcd, temp1, temp2;
    
    cout << "LCM and GCD Calculator" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    temp1 = num1;
    temp2 = num2;
    
    while (temp2 != 0) {
        int remainder = temp1 % temp2;
        temp1 = temp2;
        temp2 = remainder;
    }
    
    gcd = temp1;
    lcm = (num1 * num2) / gcd;
    
    cout << "Numbers: " << num1 << " and " << num2 << endl;
    cout << "GCD: " << gcd << endl;
    cout << "LCM: " << lcm << endl;
    
    return 0;
}
