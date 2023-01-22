#include <iostream>
using namespace std;

int main() {
    int numbers[10], n, max, min;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    
    max = numbers[0];
    min = numbers[0];
    
    for (int i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    
    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;
    cout << "Difference: " << max - min << endl;
    return 0;
}
