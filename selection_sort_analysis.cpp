#include <iostream>
using namespace std;

int main() {
    int arr[5], min_idx, temp, comparisons = 0, swaps = 0;
    
    cout << "Selection Sort with Analysis" << endl;
    cout << "Enter 5 numbers:" << endl;
    
    for (int i = 0; i < 5; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (int i = 0; i < 4; i++) {
        min_idx = i;
        cout << "\nPass " << i + 1 << ":" << endl;
        cout << "Finding minimum from position " << i << " onwards" << endl;
        
        for (int j = i + 1; j < 5; j++) {
            comparisons++;
            cout << "Comparing " << arr[min_idx] << " with " << arr[j] << ": ";
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
                cout << arr[j] << " is smaller" << endl;
            } else {
                cout << arr[min_idx] << " is smaller or equal" << endl;
            }
        }
        
        if (min_idx != i) {
            cout << "Swapping " << arr[i] << " with " << arr[min_idx] << endl;
            temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
            swaps++;
        } else {
            cout << "No swap needed" << endl;
        }
        
        cout << "Array after pass " << i + 1 << ": ";
        for (int k = 0; k < 5; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    
    cout << "\nFinal sorted array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total comparisons: " << comparisons << endl;
    cout << "Total swaps: " << swaps << endl;
    
    return 0;
}
