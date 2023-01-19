#include <iostream>
using namespace std;

int main() {
    int votes[5] = {0};
    int choice, totalVotes = 0;
    char continueVoting;
    
    do {
        cout << "Voting System" << endl;
        cout << "1. Candidate A" << endl;
        cout << "2. Candidate B" << endl;
        cout << "3. Candidate C" << endl;
        cout << "4. Candidate D" << endl;
        cout << "5. Candidate E" << endl;
        cout << "Enter your vote: ";
        cin >> choice;
        
        if (choice >= 1 && choice <= 5) {
            votes[choice - 1]++;
            totalVotes++;
            cout << "Vote recorded!" << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }
        
        cout << "Continue voting? (y/n): ";
        cin >> continueVoting;
    } while (continueVoting == 'y' || continueVoting == 'Y');
    
    cout << "\nVoting Results:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Candidate " << (char)('A' + i) << ": " << votes[i] << " votes" << endl;
    }
    cout << "Total votes: " << totalVotes << endl;
    return 0;
}
