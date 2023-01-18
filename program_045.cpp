#include <iostream>
using namespace std;

int main() {
    int n, factorial = 1;
    cout << "Enter a number: ";
    cin >> n;
    int original = n;
    while (n > 0) {
        factorial = factorial * n;
        n--;
    }
    cout << "Factorial of " << original << " is " << factorial << endl;
    return 0;
}
