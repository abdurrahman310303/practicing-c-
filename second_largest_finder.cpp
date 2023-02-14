#include <iostream>
using namespace std;

int main() {
    int arr[7], n, max, min, second_max, second_min;
    
    cout << "Second Largest and Smallest Finder" << endl;
    cout << "Enter number of elements (max 7): ";
    cin >> n;
    
    cout << "Enter array elements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
    
    max = min = arr[0];
    second_max = second_min = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i];
        } else if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
        
        if (arr[i] < min) {
            second_min = min;
            min = arr[i];
        } else if (arr[i] < second_min && arr[i] != min) {
            second_min = arr[i];
        }
    }
    
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Largest: " << max << endl;
    cout << "Second Largest: " << second_max << endl;
    cout << "Smallest: " << min << endl;
    cout << "Second Smallest: " << second_min << endl;
    
    return 0;
}
