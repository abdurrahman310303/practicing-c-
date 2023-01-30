#include <iostream>
using namespace std;

int main() {
    int limit, count = 0;
    cout << "Perfect Numbers Finder" << endl;
    cout << "Enter limit: ";
    cin >> limit;
    
    cout << "Perfect numbers up to " << limit << ":" << endl;
    
    for (int num = 1; num <= limit; num++) {
        int sum = 0;
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum = sum + i;
            }
        }
        if (sum == num) {
            cout << num << " ";
            count++;
        }
    }
    
    if (count == 0) {
        cout << "No perfect numbers found";
    }
    cout << endl;
    cout << "Total perfect numbers found: " << count << endl;
    
    return 0;
}
