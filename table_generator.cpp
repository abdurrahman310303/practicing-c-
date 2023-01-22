#include <iostream>
using namespace std;

int main() {
    int table, start, end;
    cout << "Multiplication Table Generator" << endl;
    cout << "Enter number for table: ";
    cin >> table;
    cout << "Enter starting range: ";
    cin >> start;
    cout << "Enter ending range: ";
    cin >> end;
    
    cout << "Multiplication table of " << table << ":" << endl;
    for (int i = start; i <= end; i++) {
        cout << table << " x " << i << " = " << table * i << endl;
    }
    return 0;
}
