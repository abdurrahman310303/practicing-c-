#include <iostream>
using namespace std;

int main() {
    int month, year, days;
    
    cout << "Month Days Calculator" << endl;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter year: ";
    cin >> year;
    
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                days = 29;
            } else {
                days = 28;
            }
            break;
        default:
            cout << "Invalid month" << endl;
            return 1;
    }
    
    string months[] = {"", "January", "February", "March", "April", "May", "June",
                       "July", "August", "September", "October", "November", "December"};
    
    cout << months[month] << " " << year << " has " << days << " days" << endl;
    
    if (month == 2 && days == 29) {
        cout << year << " is a leap year" << endl;
    }
    
    return 0;
}
