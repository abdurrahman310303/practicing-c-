#include <iostream>
using namespace std;

int main() {
    char text[100];
    int vowels = 0;
    cout << "Enter a string: ";
    cin >> text;
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    return 0;
}
