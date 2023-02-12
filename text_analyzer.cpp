#include <iostream>
using namespace std;

int main() {
    string text, word;
    int count = 0, char_count = 0, word_count = 0;
    
    cout << "Text Analyzer Tool" << endl;
    cout << "Enter text: ";
    getline(cin, text);
    cout << "Enter word to search: ";
    cin >> word;
    
    char_count = text.length();
    
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == ' ' || i == text.length() - 1) {
            word_count++;
        }
    }
    
    int word_len = word.length();
    for (int i = 0; i <= text.length() - word_len; i++) {
        bool match = true;
        for (int j = 0; j < word_len; j++) {
            if (tolower(text[i + j]) != tolower(word[j])) {
                match = false;
                break;
            }
        }
        if (match) {
            if (i == 0 || text[i - 1] == ' ') {
                if (i + word_len == text.length() || text[i + word_len] == ' ') {
                    count++;
                }
            }
        }
    }
    
    cout << "\nText Analysis Results:" << endl;
    cout << "Total characters: " << char_count << endl;
    cout << "Total words: " << word_count << endl;
    cout << "Occurrences of '" << word << "': " << count << endl;
    
    return 0;
}
