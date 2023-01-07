#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    cout << "Enter number of terms: ";
    cin >> n;
    cout << "Fibonacci series: " << first << " " << second << " ";
    for (int i = 3; i <= n; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
    return 0;
}
