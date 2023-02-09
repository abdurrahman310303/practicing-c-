#include <iostream>
using namespace std;

int main() {
    string str;
    int vowels = 0, consonants = 0;
    
    cout << "Vowel-Consonant Counter" << endl;
    cout << "Enter a string: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Total letters: " << vowels + consonants << endl;
    
    return 0;
}
