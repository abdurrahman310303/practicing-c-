#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    
    cout << "BMI Calculator" << endl;
    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    
    bmi = weight / (height * height);
    
    cout << "Your BMI: " << bmi << endl;
    
    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    } else if (bmi < 25) {
        cout << "Category: Normal weight" << endl;
    } else if (bmi < 30) {
        cout << "Category: Overweight" << endl;
    } else {
        cout << "Category: Obese" << endl;
    }
    
    return 0;
}
