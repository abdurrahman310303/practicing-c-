#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int j = 1; j <= 100; j++) {
        sum = sum + j;
    }
    cout << "Sum of 1 to 100 is: " << sum << endl;
    return 0;
}
