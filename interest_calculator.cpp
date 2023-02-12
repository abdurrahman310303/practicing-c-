#include <iostream>
using namespace std;

int main() {
    float principal, rate, time, simple_interest, compound_interest, amount;
    
    cout << "Interest Calculator" << endl;
    cout << "Enter principal amount: ";
    cin >> principal;
    cout << "Enter rate of interest: ";
    cin >> rate;
    cout << "Enter time period (years): ";
    cin >> time;
    
    simple_interest = (principal * rate * time) / 100;
    
    amount = principal;
    for (int i = 0; i < time; i++) {
        amount = amount + (amount * rate / 100);
    }
    compound_interest = amount - principal;
    
    cout << "\nResults:" << endl;
    cout << "Principal: " << principal << endl;
    cout << "Rate: " << rate << "%" << endl;
    cout << "Time: " << time << " years" << endl;
    cout << "Simple Interest: " << simple_interest << endl;
    cout << "Compound Interest: " << compound_interest << endl;
    cout << "Final Amount (CI): " << amount << endl;
    cout << "Difference: " << compound_interest - simple_interest << endl;
    
    return 0;
}
