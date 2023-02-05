#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digital Root Calculator" << endl;
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n;
    while (n >= 10) {
        int sum = 0;
        while (n > 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        n = sum;
    }
    
    cout << "Digital root of " << original << " is: " << n << endl;
    return 0;
}
