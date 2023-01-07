#include <iostream>
using namespace std;

int main() {
    int num, isPrime = 1;
    cout << "Enter a number: ";
    cin >> num;
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime) {
        cout << num << " is prime" << endl;
    } else {
        cout << num << " is not prime" << endl;
    }
    return 0;
}
