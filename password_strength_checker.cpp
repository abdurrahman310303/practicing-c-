#include <iostream>
using namespace std;

int main() {
    string password;
    int length, upper = 0, lower = 0, digit = 0, special = 0;
    
    cout << "Password Strength Checker" << endl;
    cout << "Enter password: ";
    cin >> password;
    
    length = password.length();
    
    for (int i = 0; i < length; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            upper++;
        } else if (password[i] >= 'a' && password[i] <= 'z') {
            lower++;
        } else if (password[i] >= '0' && password[i] <= '9') {
            digit++;
        } else {
            special++;
        }
    }
    
    cout << "Password Analysis:" << endl;
    cout << "Length: " << length << endl;
    cout << "Uppercase: " << upper << endl;
    cout << "Lowercase: " << lower << endl;
    cout << "Digits: " << digit << endl;
    cout << "Special chars: " << special << endl;
    
    if (length >= 8 && upper > 0 && lower > 0 && digit > 0 && special > 0) {
        cout << "Strength: Very Strong" << endl;
    } else if (length >= 6 && upper > 0 && lower > 0 && digit > 0) {
        cout << "Strength: Strong" << endl;
    } else if (length >= 4 && (upper > 0 || lower > 0) && digit > 0) {
        cout << "Strength: Medium" << endl;
    } else {
        cout << "Strength: Weak" << endl;
    }
    
    return 0;
}
