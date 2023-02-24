#include <iostream>
using namespace std;

int main() {
    float radius, height, length, width, side;
    int choice;
    
    cout << "Geometry Calculator" << endl;
    cout << "1. Circle (Area and Circumference)" << endl;
    cout << "2. Rectangle (Area and Perimeter)" << endl;
    cout << "3. Square (Area and Perimeter)" << endl;
    cout << "4. Triangle (Area - base and height)" << endl;
    cout << "5. Cylinder (Surface area and Volume)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "\nCircle Calculations:" << endl;
            cout << "Radius: " << radius << endl;
            cout << "Area: " << 3.14159 * radius * radius << endl;
            cout << "Circumference: " << 2 * 3.14159 * radius << endl;
            cout << "Diameter: " << 2 * radius << endl;
            break;
            
        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            cout << "\nRectangle Calculations:" << endl;
            cout << "Length: " << length << ", Width: " << width << endl;
            cout << "Area: " << length * width << endl;
            cout << "Perimeter: " << 2 * (length + width) << endl;
            cout << "Diagonal: " << sqrt(length*length + width*width) << endl;
            break;
            
        case 3:
            cout << "Enter side length: ";
            cin >> side;
            cout << "\nSquare Calculations:" << endl;
            cout << "Side: " << side << endl;
            cout << "Area: " << side * side << endl;
            cout << "Perimeter: " << 4 * side << endl;
            cout << "Diagonal: " << side * 1.414 << endl;
            break;
            
        case 4:
            cout << "Enter base: ";
            cin >> length;
            cout << "Enter height: ";
            cin >> height;
            cout << "\nTriangle Calculations:" << endl;
            cout << "Base: " << length << ", Height: " << height << endl;
            cout << "Area: " << 0.5 * length * height << endl;
            break;
            
        case 5:
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Enter height: ";
            cin >> height;
            cout << "\nCylinder Calculations:" << endl;
            cout << "Radius: " << radius << ", Height: " << height << endl;
            cout << "Volume: " << 3.14159 * radius * radius * height << endl;
            cout << "Surface Area: " << 2 * 3.14159 * radius * (radius + height) << endl;
            cout << "Curved Surface Area: " << 2 * 3.14159 * radius * height << endl;
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
