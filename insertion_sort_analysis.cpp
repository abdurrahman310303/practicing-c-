#include <iostream>
using namespace std;

int main() {
    int arr[8], n, temp;
    
    cout << "Insertion Sort with Step Analysis" << endl;
    cout << "Enter number of elements (max 8): ";
    cin >> n;
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "\nInsertion Sort Process:" << endl;
    
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        cout << "\nStep " << i << ": Inserting " << key << endl;
        cout << "Sorted portion: ";
        for (int k = 0; k < i; k++) {
            cout << arr[k] << " ";
        }
        cout << "| Unsorted: ";
        for (int k = i; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        
        while (j >= 0 && arr[j] > key) {
            cout << "  Moving " << arr[j] << " to the right" << endl;
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
        cout << "  Inserting " << key << " at position " << j + 2 << endl;
        cout << "  Array now: ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    cout << "\nFinal sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "\nInsertion sort completed!" << endl;
    cout << "Time complexity: O(n²)" << endl;
    cout << "Space complexity: O(1)" << endl;
    
    return 0;
}
