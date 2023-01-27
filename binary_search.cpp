#include <iostream>
using namespace std;

int main() {
    int n, key, position = -1;
    cout << "Enter array size: ";
    cin >> n;
    
    int numbers[n];
    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    cout << "Enter element to search: ";
    cin >> key;
    
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (numbers[mid] == key) {
            position = mid;
            break;
        } else if (numbers[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    if (position != -1) {
        cout << "Element found at position: " << position + 1 << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    return 0;
}
