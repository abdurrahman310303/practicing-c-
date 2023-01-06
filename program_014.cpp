#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, digit;
    cout << "Enter a number: ";
    cin >> num;
    int original = num;
    while (num > 0) {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    cout << "Reverse of " << original << " is " << rev << endl;
    return 0;
}
