#include <iostream>
using namespace std;

int main() {
    int money, notes500, notes100, notes50, notes20, notes10, notes5, notes1;
    cout << "ATM Cash Dispenser" << endl;
    cout << "Enter amount to withdraw: ";
    cin >> money;
    
    notes500 = money / 500;
    money = money % 500;
    
    notes100 = money / 100;
    money = money % 100;
    
    notes50 = money / 50;
    money = money % 50;
    
    notes20 = money / 20;
    money = money % 20;
    
    notes10 = money / 10;
    money = money % 10;
    
    notes5 = money / 5;
    money = money % 5;
    
    notes1 = money;
    
    cout << "Notes breakdown:" << endl;
    if (notes500 > 0) cout << "500 x " << notes500 << endl;
    if (notes100 > 0) cout << "100 x " << notes100 << endl;
    if (notes50 > 0) cout << "50 x " << notes50 << endl;
    if (notes20 > 0) cout << "20 x " << notes20 << endl;
    if (notes10 > 0) cout << "10 x " << notes10 << endl;
    if (notes5 > 0) cout << "5 x " << notes5 << endl;
    if (notes1 > 0) cout << "1 x " << notes1 << endl;
    
    return 0;
}
