#include <iostream>
using namespace std;

int main() {
    int a, b, gcd;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    cout << "GCD is: " << gcd << endl;
    return 0;
}
