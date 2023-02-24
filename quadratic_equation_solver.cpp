#include <iostream>
using namespace std;

int main() {
    int a, b, c, discriminant;
    float root1, root2, real, imag;
    
    cout << "Quadratic Equation Solver" << endl;
    cout << "Format: ax² + bx + c = 0" << endl;
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;
    
    if (a == 0) {
        cout << "This is not a quadratic equation (a = 0)" << endl;
        if (b == 0) {
            if (c == 0) {
                cout << "Infinite solutions" << endl;
            } else {
                cout << "No solution" << endl;
            }
        } else {
            cout << "Linear equation: " << b << "x + " << c << " = 0" << endl;
            cout << "Solution: x = " << (float)-c / b << endl;
        }
        return 0;
    }
    
    cout << "\nQuadratic equation: " << a << "x² ";
    if (b >= 0) cout << "+ " << b << "x ";
    else cout << "- " << -b << "x ";
    if (c >= 0) cout << "+ " << c << " = 0" << endl;
    else cout << "- " << -c << " = 0" << endl;
    
    discriminant = b * b - 4 * a * c;
    cout << "\nDiscriminant = b² - 4ac = " << b << "² - 4(" << a << ")(" << c << ") = " << discriminant << endl;
    
    if (discriminant > 0) {
        cout << "Two distinct real roots:" << endl;
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
        cout << "Sum of roots: " << root1 + root2 << " = " << (float)-b / a << endl;
        cout << "Product of roots: " << root1 * root2 << " = " << (float)c / a << endl;
    } else if (discriminant == 0) {
        cout << "One repeated real root:" << endl;
        root1 = (float)-b / (2 * a);
        cout << "Root: " << root1 << endl;
    } else {
        cout << "Two complex roots:" << endl;
        real = (float)-b / (2 * a);
        imag = sqrt(-discriminant) / (2 * a);
        cout << "Root 1: " << real << " + " << imag << "i" << endl;
        cout << "Root 2: " << real << " - " << imag << "i" << endl;
    }
    
    return 0;
}
