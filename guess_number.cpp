#include <iostream>
using namespace std;

int main() {
    int number, guess, attempts = 0;
    number = 42;
    
    cout << "Guess the number game!" << endl;
    cout << "I'm thinking of a number between 1 and 100" << endl;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        
        if (guess == number) {
            cout << "Congratulations! You guessed it in " << attempts << " attempts" << endl;
            break;
        } else if (guess < number) {
            cout << "Too low! Try again" << endl;
        } else {
            cout << "Too high! Try again" << endl;
        }
    }
    return 0;
}
