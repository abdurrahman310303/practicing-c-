#include <iostream>
using namespace std;

int main() {
    string text, word;
    int word_count = 0, char_count = 0, line_count = 1;
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    
    cout << "Text Analysis Tool" << endl;
    cout << "Enter text (type 'END' to finish):" << endl;
    
    string line;
    text = "";
    while (getline(cin, line) && line != "END") {
        text = text + line + "\n";
        line_count++;
    }
    
    char_count = text.length();
    
    cout << "\nAnalyzing text..." << endl;
    cout << "Text entered:" << endl;
    cout << "\"" << text << "\"" << endl;
    
    for (int i = 0; i < text.length(); i++) {
        char ch = tolower(text[i]);
        
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if (ch == ' ') {
            spaces++;
        }
        
        if (text[i] == ' ' || text[i] == '\n' || i == text.length() - 1) {
            if (i > 0 && text[i-1] != ' ' && text[i-1] != '\n') {
                word_count++;
            }
        }
    }
    
    cout << "\nText Statistics:" << endl;
    cout << "Total characters: " << char_count << endl;
    cout << "Total words: " << word_count << endl;
    cout << "Total lines: " << line_count - 1 << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Spaces: " << spaces << endl;
    cout << "Letters: " << vowels + consonants << endl;
    
    if (word_count > 0) {
        cout << "Average word length: " << (float)(vowels + consonants) / word_count << endl;
    }
    
    cout << "Average characters per line: " << (float)char_count / (line_count - 1) << endl;
    
    return 0;
}
