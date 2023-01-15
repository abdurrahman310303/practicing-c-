#include <iostream>
using namespace std;

int main() {
    int num, armstrongNum, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;
    armstrongNum = num;
    while (armstrongNum != 0) {
        remainder = armstrongNum % 10;
        result = result + remainder * remainder * remainder;
        armstrongNum = armstrongNum / 10;
    }
    if (result == num) {
        cout << num << " is an Armstrong number" << endl;
    } else {
        cout << num << " is not an Armstrong number" << endl;
    }
    return 0;
}
