#include <iostream>
using namespace std;

int main() {
    int size1, size2;
    cout << "Enter size of first array: ";
    cin >> size1;
    int arr1[size1];
    cout << "Enter elements of first array: ";
    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }
    
    cout << "Enter size of second array: ";
    cin >> size2;
    int arr2[size2];
    cout << "Enter elements of second array: ";
    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }
    
    cout << "Common elements: ";
    bool found = false;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout << arr1[i] << " ";
                found = true;
                break;
            }
        }
    }
    
    if (!found) {
        cout << "None";
    }
    cout << endl;
    return 0;
}
