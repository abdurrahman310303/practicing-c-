#include <iostream>
using namespace std;

int add(int x, int y) {
    return x + y;
}

int main() {
    int a, b, result;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    result = add(a, b);
    cout << "Sum is: " << result << endl;
    return 0;
}
