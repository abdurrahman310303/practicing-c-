#include <iostream>
using namespace std;

int main() {
    int choice;
    float length, width, radius, base, height, area;
    
    cout << "Area Calculator" << endl;
    cout << "1. Rectangle" << endl;
    cout << "2. Circle" << endl;
    cout << "3. Triangle" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter length and width: ";
            cin >> length >> width;
            area = length * width;
            cout << "Area of rectangle: " << area << endl;
            break;
        case 2:
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14159 * radius * radius;
            cout << "Area of circle: " << area << endl;
            break;
        case 3:
            cout << "Enter base and height: ";
            cin >> base >> height;
            area = 0.5 * base * height;
            cout << "Area of triangle: " << area << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    return 0;
}
