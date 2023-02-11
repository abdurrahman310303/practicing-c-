#include <iostream>
using namespace std;

int main() {
    int arr[8], n, target, pos = -1;
    
    cout << "Array Element Inserter" << endl;
    cout << "Enter number of elements (max 7): ";
    cin >> n;
    
    cout << "Enter sorted array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter element to insert: ";
    cin >> target;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > target) {
            pos = i;
            break;
        }
    }
    
    if (pos == -1) {
        pos = n;
    }
    
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[pos] = target;
    n++;
    
    cout << "Array after insertion:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
