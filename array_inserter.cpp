#include <iostream>
using namespace std;

int main() {
    int size, element, position;
    int arr[10];
    
    cout << "Array Element Inserter" << endl;
    cout << "Enter array size (max 9): ";
    cin >> size;
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position (1-" << size + 1 << "): ";
    cin >> position;
    position--;
    
    for (int i = size; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
    
    cout << "Array after insertion:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
