#include <iostream>
using namespace std;

int main() {
    int year, month, day;
    cout << "Age Calculator" << endl;
    cout << "Enter your birth year: ";
    cin >> year;
    cout << "Enter your birth month: ";
    cin >> month;
    cout << "Enter your birth day: ";
    cin >> day;
    
    int currentYear = 2023, currentMonth = 2, currentDay = 7;
    
    int ageYears = currentYear - year;
    int ageMonths = currentMonth - month;
    int ageDays = currentDay - day;
    
    if (ageDays < 0) {
        ageMonths--;
        ageDays = ageDays + 30;
    }
    
    if (ageMonths < 0) {
        ageYears--;
        ageMonths = ageMonths + 12;
    }
    
    cout << "Your age is: " << ageYears << " years, " << ageMonths << " months, " << ageDays << " days" << endl;
    
    int totalDays = ageYears * 365 + ageMonths * 30 + ageDays;
    cout << "Approximate total days lived: " << totalDays << endl;
    
    return 0;
}
