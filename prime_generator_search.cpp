#include <iostream>
using namespace std;

int main() {
    int n, search, found = 0;
    int primes[50], count = 0;
    
    cout << "Prime Number Generator and Search" << endl;
    cout << "Enter upper limit: ";
    cin >> n;
    
    cout << "\nGenerating prime numbers up to " << n << ":" << endl;
    
    for (int num = 2; num <= n; num++) {
        bool isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            primes[count] = num;
            count++;
            cout << num << " ";
        }
    }
    
    cout << endl << "\nTotal prime numbers found: " << count << endl;
    
    if (count > 0) {
        cout << "Smallest prime: " << primes[0] << endl;
        cout << "Largest prime: " << primes[count-1] << endl;
        
        int sum = 0;
        for (int i = 0; i < count; i++) {
            sum = sum + primes[i];
        }
        cout << "Sum of all primes: " << sum << endl;
        cout << "Average: " << (float)sum / count << endl;
    }
    
    cout << "\nEnter a number to check if it's in the prime list: ";
    cin >> search;
    
    for (int i = 0; i < count; i++) {
        if (primes[i] == search) {
            found = 1;
            cout << search << " is prime (position " << i + 1 << " in the list)" << endl;
            break;
        }
    }
    
    if (!found) {
        cout << search << " is not in the prime list" << endl;
    }
    
    return 0;
}
