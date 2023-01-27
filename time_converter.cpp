#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;
    int totalSeconds, days, remainingHours;
    
    cout << "Time Converter" << endl;
    cout << "Enter time in seconds: ";
    cin >> totalSeconds;
    
    days = totalSeconds / 86400;
    totalSeconds = totalSeconds % 86400;
    
    hours = totalSeconds / 3600;
    totalSeconds = totalSeconds % 3600;
    
    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;
    
    cout << "Converted time:" << endl;
    if (days > 0) {
        cout << days << " days, ";
    }
    cout << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    
    return 0;
}
