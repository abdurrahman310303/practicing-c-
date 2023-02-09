#include <iostream>
using namespace std;

int main() {
    int nums[10], freq[10], n, unique = 0;
    cout << "Array Statistics Calculator" << endl;
    cout << "Enter array size (max 10): ";
    cin >> n;
    
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    for (int i = 0; i < n; i++) {
        freq[i] = 1;
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                freq[i]++;
                nums[j] = -999;
            }
        }
    }
    
    int sum = 0, max = nums[0], min = nums[0];
    for (int i = 0; i < n; i++) {
        if (nums[i] != -999) {
            sum = sum + nums[i];
            unique++;
            if (nums[i] > max) max = nums[i];
            if (nums[i] < min) min = nums[i];
        }
    }
    
    cout << "Statistics:" << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << (float)sum / n << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;
    cout << "Unique elements: " << unique << endl;
    
    return 0;
}
