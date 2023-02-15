#include <iostream>
using namespace std;

int main() {
    int arr[5], target, pos = -1, comparisons = 0;
    
    cout << "Linear Search with Performance Analysis" << endl;
    cout << "Enter 5 array elements:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> target;
    
    cout << "\nSearch process:" << endl;
    for (int i = 0; i < 5; i++) {
        comparisons++;
        cout << "Step " << i + 1 << ": Comparing " << target << " with " << arr[i];
        if (arr[i] == target) {
            pos = i;
            cout << " - FOUND!" << endl;
            break;
        } else {
            cout << " - Not match" << endl;
        }
    }
    
    cout << "\nResults:" << endl;
    if (pos != -1) {
        cout << "Element " << target << " found at position " << pos + 1 << endl;
    } else {
        cout << "Element " << target << " not found" << endl;
    }
    cout << "Total comparisons: " << comparisons << endl;
    cout << "Time complexity: O(n)" << endl;
    
    return 0;
}
