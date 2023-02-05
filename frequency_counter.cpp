#include <iostream>
using namespace std;

int main() {
    char text[500];
    int frequency[256] = {0};
    
    cout << "Character Frequency Counter" << endl;
    cout << "Enter text: ";
    cin.getline(text, 500);
    
    for (int i = 0; text[i] != '\0'; i++) {
        frequency[text[i]]++;
    }
    
    cout << "Character frequencies:" << endl;
    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            cout << "'" << (char)i << "' : " << frequency[i] << endl;
        }
    }
    
    return 0;
}
