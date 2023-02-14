#include <iostream>
using namespace std;

int main() {
    string str;
    int freq[256] = {0};
    
    cout << "Character Frequency Counter" << endl;
    cout << "Enter a string: ";
    getline(cin, str);
    
    for (int i = 0; i < str.length(); i++) {
        freq[str[i]]++;
    }
    
    cout << "\nCharacter frequencies:" << endl;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == 32) {
                cout << "Space: " << freq[i] << endl;
            } else if (i >= 33 && i <= 126) {
                cout << (char)i << ": " << freq[i] << endl;
            }
        }
    }
    
    cout << "\nMost frequent character: ";
    int max_freq = 0;
    char max_char;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > max_freq && i != 32) {
            max_freq = freq[i];
            max_char = i;
        }
    }
    cout << max_char << " (appears " << max_freq << " times)" << endl;
    
    return 0;
}
