#include <iostream>
using namespace std;

int main() {
    string str, reversed = "";
    
    cout << "String Reversal Tool" << endl;
    cout << "Enter a string: ";
    getline(cin, str);
    
    cout << "\nOriginal string: \"" << str << "\"" << endl;
    cout << "Length: " << str.length() << " characters" << endl;
    
    cout << "\nReversal process:" << endl;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed = reversed + str[i];
        cout << "Step " << str.length() - i << ": Adding '" << str[i] << "' -> \"" << reversed << "\"" << endl;
    }
    
    cout << "\nReversed string: \"" << reversed << "\"" << endl;
    
    if (str == reversed) {
        cout << "This string is a palindrome!" << endl;
    } else {
        cout << "This string is not a palindrome." << endl;
    }
    
    cout << "\nCharacter by character comparison:" << endl;
    bool is_palindrome = true;
    for (int i = 0; i < str.length() / 2; i++) {
        cout << "Position " << i << " and " << str.length() - 1 - i << ": ";
        cout << "'" << str[i] << "' vs '" << str[str.length() - 1 - i] << "'";
        if (str[i] == str[str.length() - 1 - i]) {
            cout << " - Match" << endl;
        } else {
            cout << " - No match" << endl;
            is_palindrome = false;
        }
    }
    
    return 0;
}
