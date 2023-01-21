#include <iostream>
using namespace std;

int main() {
    char word[100];
    int length = 0, isPalindrome = 1;
    
    cout << "Enter a word: ";
    cin >> word;
    
    while (word[length] != '\0') {
        length++;
    }
    
    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        cout << word << " is a palindrome" << endl;
    } else {
        cout << word << " is not a palindrome" << endl;
    }
    return 0;
}
