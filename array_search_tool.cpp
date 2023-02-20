#include <iostream>
using namespace std;

int main() {
    int arr[7], n, search_value, first = -1, last = -1, count = 0;
    
    cout << "Array Search and Count Tool" << endl;
    cout << "Enter array size (max 7): ";
    cin >> n;
    
    if (n > 7 || n < 1) {
        cout << "Invalid size" << endl;
        return 1;
    }
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "Enter value to search: ";
    cin >> search_value;
    
    cout << "\nSearching for " << search_value << " in array:" << endl;
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < n; i++) {
        cout << "Position " << i + 1 << ": " << arr[i];
        if (arr[i] == search_value) {
            cout << " - FOUND!";
            if (first == -1) {
                first = i;
            }
            last = i;
            count++;
        } else {
            cout << " - Not match";
        }
        cout << endl;
    }
    
    cout << "\nSearch Results:" << endl;
    if (count > 0) {
        cout << "Value " << search_value << " found " << count << " time(s)" << endl;
        cout << "First occurrence at position: " << first + 1 << endl;
        cout << "Last occurrence at position: " << last + 1 << endl;
        
        if (count > 1) {
            cout << "All positions: ";
            for (int i = 0; i < n; i++) {
                if (arr[i] == search_value) {
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
    } else {
        cout << "Value " << search_value << " not found in array" << endl;
    }
    
    return 0;
}
