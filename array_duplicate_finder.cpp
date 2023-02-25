#include <iostream>
using namespace std;

int main() {
    int arr[10], n, duplicates_found = 0;
    
    cout << "Array Duplicate Finder" << endl;
    cout << "Enter array size (max 10): ";
    cin >> n;
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nArray: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "\nSearching for duplicates..." << endl;
    
    bool found[10] = {false};
    
    for (int i = 0; i < n; i++) {
        if (found[i]) continue;
        
        int count = 1;
        cout << "\nChecking element " << arr[i] << ":" << endl;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                found[j] = true;
                cout << "  Found duplicate at position " << j + 1 << endl;
            }
        }
        
        if (count > 1) {
            cout << "  Element " << arr[i] << " appears " << count << " times" << endl;
            duplicates_found++;
        } else {
            cout << "  Element " << arr[i] << " is unique" << endl;
        }
        found[i] = true;
    }
    
    cout << "\nDuplicate Analysis Summary:" << endl;
    if (duplicates_found > 0) {
        cout << "Duplicates found: " << duplicates_found << " different values" << endl;
        
        cout << "Unique elements: ";
        bool printed[10] = {false};
        for (int i = 0; i < n; i++) {
            if (printed[i]) continue;
            
            bool is_unique = true;
            for (int j = 0; j < n; j++) {
                if (i != j && arr[i] == arr[j]) {
                    is_unique = false;
                    break;
                }
            }
            if (is_unique) {
                cout << arr[i] << " ";
            }
            
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printed[j] = true;
                }
            }
            printed[i] = true;
        }
        cout << endl;
    } else {
        cout << "No duplicates found - all elements are unique" << endl;
    }
    
    return 0;
}
