#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Array Rotation Program" << endl;
    cout << "Enter array size: ";
    cin >> n;
    
    int arr[n], rotations;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter number of rotations: ";
    cin >> rotations;
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    rotations = rotations % n;
    for (int r = 0; r < rotations; r++) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }
    
    cout << "Array after " << rotations << " left rotations: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
