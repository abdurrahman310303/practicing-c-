#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100], result[200];
    int i = 0, j = 0;
    
    cout << "String Concatenation Program" << endl;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    
    while (str1[i] != '\0') {
        result[j] = str1[i];
        i++;
        j++;
    }
    
    i = 0;
    while (str2[i] != '\0') {
        result[j] = str2[i];
        i++;
        j++;
    }
    result[j] = '\0';
    
    cout << "Concatenated string: " << result << endl;
    return 0;
}
