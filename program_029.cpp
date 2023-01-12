#include <iostream>
using namespace std;

int main() {
    int arr[10], n, search, found = 0;
    cout << "Enter array size: ";
    cin >> n;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter element to search: ";
    cin >> search;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            cout << "Element found at position " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Element not found" << endl;
    }
    return 0;
}
