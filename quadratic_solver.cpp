#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    float discriminant, root1, root2;
    
    cout << "Quadratic Equation Solver" << endl;
    cout << "Enter coefficients a, b, c: ";
    cin >> a >> b >> c;
    
    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        root1 = (-b + discriminant) / (2 * a);
        root2 = (-b - discriminant) / (2 * a);
        cout << "Two real roots:" << endl;
        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        cout << "One real root: " << root1 << endl;
    } else {
        cout << "Complex roots exist" << endl;
    }
    
    return 0;
}
