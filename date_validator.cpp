#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string month_names[] = {"January", "February", "March", "April", "May", "June",
                           "July", "August", "September", "October", "November", "December"};
    
    cout << "Date Validator" << endl;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day: ";
    cin >> day;
    
    bool valid = true;
    
    if (month < 1 || month > 12) {
        cout << "Invalid month! Must be 1-12." << endl;
        valid = false;
    }
    
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        days_in_month[1] = 29;
    }
    
    if (valid && (day < 1 || day > days_in_month[month - 1])) {
        cout << "Invalid day! " << month_names[month - 1] << " " << year;
        cout << " has only " << days_in_month[month - 1] << " days." << endl;
        valid = false;
    }
    
    if (valid) {
        cout << "Valid date: " << month_names[month - 1] << " " << day << ", " << year << endl;
        
        if (month == 2 && days_in_month[1] == 29) {
            cout << year << " is a leap year." << endl;
        }
        
        int day_of_year = day;
        for (int i = 0; i < month - 1; i++) {
            day_of_year = day_of_year + days_in_month[i];
        }
        cout << "Day " << day_of_year << " of the year" << endl;
        
        int remaining_days = 365;
        if (days_in_month[1] == 29) remaining_days = 366;
        remaining_days = remaining_days - day_of_year;
        cout << remaining_days << " days remaining in year" << endl;
    }
    
    return 0;
}
