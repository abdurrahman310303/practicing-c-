#include <iostream>
using namespace std;

int main() {
    int n, duplicates = 0;
    cout << "Array Duplicate Finder" << endl;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Duplicate elements: ";
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                duplicates++;
                break;
            }
        }
    }
    
    if (duplicates == 0) {
        cout << "None";
    }
    cout << endl;
    cout << "Total duplicates found: " << duplicates << endl;
    
    return 0;
}
