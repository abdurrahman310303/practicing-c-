#include <iostream>
using namespace std;

int main() {
    string str1, str2;
    
    cout << "String Comparison Tool" << endl;
    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);
    
    cout << "\nString Analysis:" << endl;
    cout << "String 1: \"" << str1 << "\" (Length: " << str1.length() << ")" << endl;
    cout << "String 2: \"" << str2 << "\" (Length: " << str2.length() << ")" << endl;
    
    bool are_equal = true;
    if (str1.length() != str2.length()) {
        are_equal = false;
    } else {
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                are_equal = false;
                break;
            }
        }
    }
    
    if (are_equal) {
        cout << "Strings are identical" << endl;
    } else {
        cout << "Strings are different" << endl;
    }
    
    bool case_insensitive_equal = true;
    if (str1.length() != str2.length()) {
        case_insensitive_equal = false;
    } else {
        for (int i = 0; i < str1.length(); i++) {
            if (tolower(str1[i]) != tolower(str2[i])) {
                case_insensitive_equal = false;
                break;
            }
        }
    }
    
    if (case_insensitive_equal) {
        cout << "Strings are equal (case-insensitive)" << endl;
    } else {
        cout << "Strings are different (case-insensitive)" << endl;
    }
    
    int common_chars = 0;
    for (int i = 0; i < str1.length() && i < str2.length(); i++) {
        if (str1[i] == str2[i]) {
            common_chars++;
        }
    }
    
    cout << "Common characters at same positions: " << common_chars << endl;
    
    return 0;
}
