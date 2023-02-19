#include <iostream>
using namespace std;

int main() {
    int arr[8], size, element, position;
    
    cout << "Array Element Deletion Tool" << endl;
    cout << "Enter array size (max 8): ";
    cin >> size;
    
    if (size > 8 || size < 1) {
        cout << "Invalid size. Must be between 1 and 8." << endl;
        return 1;
    }
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "\nDeletion options:" << endl;
    cout << "1. Delete by value" << endl;
    cout << "2. Delete by position" << endl;
    cout << "Enter choice: ";
    int choice;
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter element to delete: ";
        cin >> element;
        
        int found = -1;
        for (int i = 0; i < size; i++) {
            if (arr[i] == element) {
                found = i;
                break;
            }
        }
        
        if (found == -1) {
            cout << "Element " << element << " not found in array" << endl;
            return 0;
        }
        
        cout << "Element " << element << " found at position " << found + 1 << endl;
        position = found;
    } else if (choice == 2) {
        cout << "Enter position to delete (1-" << size << "): ";
        cin >> position;
        position = position - 1;
        
        if (position < 0 || position >= size) {
            cout << "Invalid position" << endl;
            return 1;
        }
        element = arr[position];
    } else {
        cout << "Invalid choice" << endl;
        return 1;
    }
    
    cout << "Deleting element " << element << " from position " << position + 1 << endl;
    
    for (int i = position; i < size - 1; i++) {
        arr[i] = arr[i + 1];
        cout << "Moving " << arr[i] << " from position " << i + 2 << " to position " << i + 1 << endl;
    }
    
    size--;
    
    cout << "\nArray after deletion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "New array size: " << size << endl;
    
    return 0;
}
