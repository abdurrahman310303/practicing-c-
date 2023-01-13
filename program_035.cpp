#include <iostream>
using namespace std;

void swapNumbers(int a, int b) {
    int temp;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    swapNumbers(x, y);
    return 0;
}
