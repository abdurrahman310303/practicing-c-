#include <iostream>
using namespace std;

int main() {
    char text[200];
    int letters = 0, digits = 0, spaces = 0, others = 0;
    
    cout << "Enter a line of text: ";
    cin.getline(text, 200);
    
    for (int i = 0; text[i] != '\0'; i++) {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z')) {
            letters++;
        } else if (text[i] >= '0' && text[i] <= '9') {
            digits++;
        } else if (text[i] == ' ') {
            spaces++;
        } else {
            others++;
        }
    }
    
    cout << "Letters: " << letters << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Other characters: " << others << endl;
    return 0;
}
