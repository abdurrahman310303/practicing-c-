#include <iostream>
using namespace std;

int main() {
    int units;
    float bill = 0;
    
    cout << "Electricity Bill Calculator" << endl;
    cout << "Enter units consumed: ";
    cin >> units;
    
    if (units <= 100) {
        bill = units * 1.5;
    } else if (units <= 300) {
        bill = 100 * 1.5 + (units - 100) * 2.0;
    } else if (units <= 500) {
        bill = 100 * 1.5 + 200 * 2.0 + (units - 300) * 3.0;
    } else {
        bill = 100 * 1.5 + 200 * 2.0 + 200 * 3.0 + (units - 500) * 4.0;
    }
    
    cout << "Units consumed: " << units << endl;
    cout << "Total bill amount: Rs. " << bill << endl;
    
    return 0;
}
