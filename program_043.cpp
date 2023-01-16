#include <iostream>
using namespace std;

int main() {
    char str1[50], str2[50];
    int i = 0, match = 1;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            match = 0;
            break;
        }
        i++;
    }
    if (match) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }
    return 0;
}
