#include <iostream>
using namespace std;

int main() {
    int n, temp, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    temp = n;
    
    while (temp != 0) {
        reversed = reversed * 10 + temp % 10;
        temp = temp / 10;
    }
    
    cout << "Original number: " << n << endl;
    cout << "Reversed number: " << reversed << endl;
    
    if (n == reversed) {
        cout << "The number is a palindrome!" << endl;
    } else {
        cout << "The number is not a palindrome." << endl;
    }
    
    return 0;
}
