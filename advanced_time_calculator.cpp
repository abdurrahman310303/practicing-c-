#include <iostream>
using namespace std;

int main() {
    int hours, minutes, seconds;
    int total_seconds, remaining_hours, remaining_minutes, remaining_secs;
    
    cout << "Advanced Time Calculator" << endl;
    cout << "Enter time in hours, minutes, seconds:" << endl;
    cout << "Hours: ";
    cin >> hours;
    cout << "Minutes: ";
    cin >> minutes;
    cout << "Seconds: ";
    cin >> seconds;
    
    total_seconds = hours * 3600 + minutes * 60 + seconds;
    
    cout << "\nTime Analysis:" << endl;
    cout << "Input: " << hours << "h " << minutes << "m " << seconds << "s" << endl;
    cout << "Total seconds: " << total_seconds << endl;
    cout << "Total minutes: " << total_seconds / 60.0 << endl;
    cout << "Total hours: " << total_seconds / 3600.0 << endl;
    
    cout << "\nTime in different formats:" << endl;
    cout << "24-hour format: ";
    if (hours < 10) cout << "0";
    cout << hours << ":";
    if (minutes < 10) cout << "0";
    cout << minutes << ":";
    if (seconds < 10) cout << "0";
    cout << seconds << endl;
    
    cout << "12-hour format: ";
    int display_hour = hours;
    string period = "AM";
    if (hours == 0) {
        display_hour = 12;
    } else if (hours == 12) {
        period = "PM";
    } else if (hours > 12) {
        display_hour = hours - 12;
        period = "PM";
    }
    
    if (display_hour < 10) cout << "0";
    cout << display_hour << ":";
    if (minutes < 10) cout << "0";
    cout << minutes << ":";
    if (seconds < 10) cout << "0";
    cout << seconds << " " << period << endl;
    
    cout << "\nTime until midnight:" << endl;
    int midnight_seconds = 24 * 3600;
    int remaining = midnight_seconds - total_seconds;
    
    remaining_hours = remaining / 3600;
    remaining = remaining % 3600;
    remaining_minutes = remaining / 60;
    remaining_secs = remaining % 60;
    
    cout << remaining_hours << "h " << remaining_minutes << "m " << remaining_secs << "s" << endl;
    
    return 0;
}
