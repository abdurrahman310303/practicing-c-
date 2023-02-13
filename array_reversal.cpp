#include <iostream>
using namespace std;

int main() {
    int arr[6], temp;
    
    cout << "Array Reversal Tool" << endl;
    cout << "Enter 6 array elements:" << endl;
    
    for (int i = 0; i < 6; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal Array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 3; i++) {
        temp = arr[i];
        arr[i] = arr[5 - i];
        arr[5 - i] = temp;
    }
    
    cout << "Reversed Array: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
