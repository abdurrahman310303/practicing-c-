#include <iostream>
using namespace std;

int main() {
    int n, search, comparisons = 0;
    cout << "Linear Search with Analysis" << endl;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter element to search: ";
    cin >> search;
    
    int position = -1;
    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == search) {
            position = i;
            break;
        }
    }
    
    if (position != -1) {
        cout << "Element found at position: " << position + 1 << endl;
    } else {
        cout << "Element not found" << endl;
    }
    
    cout << "Total comparisons made: " << comparisons << endl;
    cout << "Search efficiency: " << (float)comparisons / n * 100 << "%" << endl;
    
    return 0;
}
