#include <iostream>
using namespace std;

int main() {
    int arr[6], i, j, temp, passes = 0, swaps = 0;
    
    cout << "Bubble Sort with Step Analysis" << endl;
    cout << "Enter 6 numbers:" << endl;
    
    for (i = 0; i < 6; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    cout << "\nOriginal array: ";
    for (i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    for (i = 0; i < 5; i++) {
        passes++;
        cout << "\nPass " << passes << ":" << endl;
        bool swapped = false;
        
        for (j = 0; j < 5 - i; j++) {
            cout << "Comparing " << arr[j] << " and " << arr[j + 1] << ": ";
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = true;
                cout << "Swap needed" << endl;
            } else {
                cout << "No swap" << endl;
            }
        }
        
        cout << "After pass " << passes << ": ";
        for (int k = 0; k < 6; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        
        if (!swapped) {
            cout << "Array is already sorted!" << endl;
            break;
        }
    }
    
    cout << "\nFinal sorted array: ";
    for (i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total passes: " << passes << endl;
    cout << "Total swaps: " << swaps << endl;
    
    return 0;
}
