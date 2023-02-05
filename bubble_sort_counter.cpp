#include <iostream>
using namespace std;

int main() {
    int n, target, swaps = 0;
    cout << "Bubble Sort with Swap Counter" << endl;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }
    }
    
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Total swaps performed: " << swaps << endl;
    
    return 0;
}
