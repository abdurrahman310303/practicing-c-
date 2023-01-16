#include <iostream>
using namespace std;

int main() {
    int arr1[10], arr2[10], merged[20];
    int n1, n2, i, j, k = 0;
    cout << "Enter size of first array: ";
    cin >> n1;
    cout << "Enter first array elements: ";
    for (i = 0; i < n1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter size of second array: ";
    cin >> n2;
    cout << "Enter second array elements: ";
    for (i = 0; i < n2; i++) {
        cin >> arr2[i];
    }
    for (i = 0; i < n1; i++) {
        merged[k++] = arr1[i];
    }
    for (j = 0; j < n2; j++) {
        merged[k++] = arr2[j];
    }
    cout << "Merged array: ";
    for (i = 0; i < k; i++) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}
