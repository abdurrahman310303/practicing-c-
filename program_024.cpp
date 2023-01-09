#include <iostream>
using namespace std;

int main() {
    char str[50];
    int length = 0;
    cout << "Enter a string: ";
    cin >> str;
    while (str[length] != '\0') {
        length++;
    }
    cout << "Length of string: " << length << endl;
    return 0;
}
