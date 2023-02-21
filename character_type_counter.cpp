#include <iostream>
using namespace std;

int main() {
    string str;
    int uppercase = 0, lowercase = 0, digits = 0, spaces = 0, special = 0;
    
    cout << "Character Type Counter" << endl;
    cout << "Enter a string: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            uppercase++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lowercase++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (str[i] == ' ') {
            spaces++;
        } else {
            special++;
        }
    }
    
    cout << "\nString: \"" << str << "\"" << endl;
    cout << "Total length: " << str.length() << endl;
    cout << "Uppercase letters: " << uppercase << endl;
    cout << "Lowercase letters: " << lowercase << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Special characters: " << special << endl;
    
    return 0;
}
