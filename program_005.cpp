#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    if (x > y) {
        cout << x << " is greater" << endl;
    } else if (y > x) {
        cout << y << " is greater" << endl;
    } else {
        cout << "Both are equal" << endl;
    }
    return 0;
}
