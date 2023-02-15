#include <iostream>
using namespace std;

int main() {
    int year;
    
    cout << "Leap Year Checker" << endl;
    cout << "Enter a year: ";
    cin >> year;
    
    cout << "Checking year " << year << ":" << endl;
    
    bool leap = false;
    
    if (year % 4 == 0) {
        cout << year << " is divisible by 4" << endl;
        if (year % 100 == 0) {
            cout << year << " is divisible by 100" << endl;
            if (year % 400 == 0) {
                cout << year << " is divisible by 400" << endl;
                leap = true;
            } else {
                cout << year << " is not divisible by 400" << endl;
                leap = false;
            }
        } else {
            cout << year << " is not divisible by 100" << endl;
            leap = true;
        }
    } else {
        cout << year << " is not divisible by 4" << endl;
        leap = false;
    }
    
    if (leap) {
        cout << year << " is a leap year (366 days)" << endl;
        cout << "February has 29 days" << endl;
    } else {
        cout << year << " is not a leap year (365 days)" << endl;
        cout << "February has 28 days" << endl;
    }
    
    return 0;
}
