#include <iostream>
using namespace std;

int main() {
    int data[5];
    int largest;
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> data[i];
    }
    largest = data[0];
    for (int i = 1; i < 5; i++) {
        if (data[i] > largest) {
            largest = data[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    return 0;
}
