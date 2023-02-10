#include <iostream>
using namespace std;

int main() {
    int arr[5], key, found = 0;
    
    cout << "Binary Search Implementation" << endl;
    cout << "Enter 5 sorted numbers:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter number to search: ";
    cin >> key;
    
    int left = 0, right = 4, mid;
    
    while (left <= right) {
        mid = (left + right) / 2;
        
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (found) {
        cout << key << " found at position " << mid + 1 << endl;
    } else {
        cout << key << " not found in array" << endl;
    }
    
    return 0;
}
