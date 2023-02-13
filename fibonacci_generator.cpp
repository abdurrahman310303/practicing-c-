#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    
    cout << "Fibonacci Series Generator" << endl;
    cout << "Enter number of terms: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive number" << endl;
        return 1;
    } else if (n == 1) {
        cout << "Fibonacci Series: " << first << endl;
        return 0;
    }
    
    cout << "Fibonacci Series: " << first << " " << second;
    
    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << " " << next;
        first = second;
        second = next;
    }
    
    cout << endl;
    cout << "Sum of first " << n << " terms: ";
    
    first = 0;
    second = 1;
    int sum = first + second;
    
    for (int i = 3; i <= n; i++) {
        next = first + second;
        sum = sum + next;
        first = second;
        second = next;
    }
    
    cout << sum << endl;
    
    return 0;
}
