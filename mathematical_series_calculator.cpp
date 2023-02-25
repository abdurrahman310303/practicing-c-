#include <iostream>
using namespace std;

int main() {
    int n, sum_natural = 0, sum_squares = 0, sum_cubes = 0;
    
    cout << "Mathematical Series Calculator" << endl;
    cout << "Enter value of n: ";
    cin >> n;
    
    cout << "\nCalculating various series up to " << n << ":" << endl;
    
    cout << "\n1. Natural Numbers Series:" << endl;
    cout << "1 + 2 + 3 + ... + " << n << " = ";
    for (int i = 1; i <= n; i++) {
        sum_natural = sum_natural + i;
        if (i <= 10) {
            cout << i;
            if (i < n && i < 10) cout << " + ";
            else if (i == 10 && n > 10) cout << " + ... + " << n;
        }
    }
    cout << " = " << sum_natural << endl;
    cout << "Formula: n(n+1)/2 = " << n << "×" << (n+1) << "/2 = " << n*(n+1)/2 << endl;
    
    cout << "\n2. Sum of Squares Series:" << endl;
    cout << "1² + 2² + 3² + ... + " << n << "² = ";
    for (int i = 1; i <= n; i++) {
        sum_squares = sum_squares + i * i;
        if (i <= 5) {
            cout << i << "²";
            if (i < n && i < 5) cout << " + ";
            else if (i == 5 && n > 5) cout << " + ... + " << n << "²";
        }
    }
    cout << " = " << sum_squares << endl;
    cout << "Formula: n(n+1)(2n+1)/6 = " << n*(n+1)*(2*n+1)/6 << endl;
    
    cout << "\n3. Sum of Cubes Series:" << endl;
    cout << "1³ + 2³ + 3³ + ... + " << n << "³ = ";
    for (int i = 1; i <= n; i++) {
        sum_cubes = sum_cubes + i * i * i;
        if (i <= 4) {
            cout << i << "³";
            if (i < n && i < 4) cout << " + ";
            else if (i == 4 && n > 4) cout << " + ... + " << n << "³";
        }
    }
    cout << " = " << sum_cubes << endl;
    int formula_cubes = (n * (n + 1) / 2) * (n * (n + 1) / 2);
    cout << "Formula: [n(n+1)/2]² = [" << n*(n+1)/2 << "]² = " << formula_cubes << endl;
    
    cout << "\n4. Factorial Series:" << endl;
    cout << "1! + 2! + 3! + ... + " << n << "! = ";
    int sum_factorial = 0;
    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial = factorial * j;
        }
        sum_factorial = sum_factorial + factorial;
        if (i <= 5) {
            cout << factorial;
            if (i < n && i < 5) cout << " + ";
            else if (i == 5 && n > 5) cout << " + ...";
        }
    }
    cout << " = " << sum_factorial << endl;
    
    return 0;
}
