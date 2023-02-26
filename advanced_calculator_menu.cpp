#include <iostream>
using namespace std;

int main() {
    int choice;
    
    cout << "Advanced Calculator Menu" << endl;
    cout << "1. Percentage Calculator" << endl;
    cout << "2. Compound Interest Calculator" << endl;
    cout << "3. Unit Converter (Length)" << endl;
    cout << "4. BMI Calculator" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1: {
            float total, percentage, result;
            int calc_type;
            cout << "\nPercentage Calculator" << endl;
            cout << "1. Find percentage of a number" << endl;
            cout << "2. Find what percent X is of Y" << endl;
            cout << "3. Find the whole if percentage is known" << endl;
            cout << "Choose: ";
            cin >> calc_type;
            
            if (calc_type == 1) {
                cout << "Enter number: ";
                cin >> total;
                cout << "Enter percentage: ";
                cin >> percentage;
                result = (percentage * total) / 100;
                cout << percentage << "% of " << total << " = " << result << endl;
            } else if (calc_type == 2) {
                float x, y;
                cout << "Enter X: ";
                cin >> x;
                cout << "Enter Y: ";
                cin >> y;
                result = (x * 100) / y;
                cout << x << " is " << result << "% of " << y << endl;
            } else if (calc_type == 3) {
                float part;
                cout << "Enter the part: ";
                cin >> part;
                cout << "Enter percentage: ";
                cin >> percentage;
                result = (part * 100) / percentage;
                cout << "If " << part << " is " << percentage << "%, then whole = " << result << endl;
            }
            break;
        }
        
        case 2: {
            float principal, rate, time, amount;
            int frequency;
            cout << "\nCompound Interest Calculator" << endl;
            cout << "Enter principal amount: ";
            cin >> principal;
            cout << "Enter annual interest rate (%): ";
            cin >> rate;
            cout << "Enter time (years): ";
            cin >> time;
            cout << "Enter compounding frequency per year: ";
            cin >> frequency;
            
            amount = principal;
            float rate_per_period = rate / (100 * frequency);
            int total_periods = frequency * time;
            
            for (int i = 0; i < total_periods; i++) {
                amount = amount * (1 + rate_per_period);
            }
            
            cout << "Principal: " << principal << endl;
            cout << "Rate: " << rate << "% per year" << endl;
            cout << "Time: " << time << " years" << endl;
            cout << "Compounding: " << frequency << " times per year" << endl;
            cout << "Final Amount: " << amount << endl;
            cout << "Compound Interest: " << amount - principal << endl;
            break;
        }
        
        case 3: {
            float value, result;
            int unit_choice;
            cout << "\nLength Unit Converter" << endl;
            cout << "1. Meters to Feet" << endl;
            cout << "2. Feet to Meters" << endl;
            cout << "3. Kilometers to Miles" << endl;
            cout << "4. Miles to Kilometers" << endl;
            cout << "Choose: ";
            cin >> unit_choice;
            
            cout << "Enter value: ";
            cin >> value;
            
            switch (unit_choice) {
                case 1:
                    result = value * 3.28084;
                    cout << value << " meters = " << result << " feet" << endl;
                    break;
                case 2:
                    result = value / 3.28084;
                    cout << value << " feet = " << result << " meters" << endl;
                    break;
                case 3:
                    result = value * 0.621371;
                    cout << value << " kilometers = " << result << " miles" << endl;
                    break;
                case 4:
                    result = value / 0.621371;
                    cout << value << " miles = " << result << " kilometers" << endl;
                    break;
            }
            break;
        }
        
        case 4: {
            float weight, height, bmi;
            cout << "\nBMI Calculator" << endl;
            cout << "Enter weight (kg): ";
            cin >> weight;
            cout << "Enter height (meters): ";
            cin >> height;
            
            bmi = weight / (height * height);
            
            cout << "Weight: " << weight << " kg" << endl;
            cout << "Height: " << height << " m" << endl;
            cout << "BMI: " << bmi << endl;
            
            if (bmi < 18.5) {
                cout << "Category: Underweight" << endl;
            } else if (bmi < 25) {
                cout << "Category: Normal weight" << endl;
            } else if (bmi < 30) {
                cout << "Category: Overweight" << endl;
            } else {
                cout << "Category: Obese" << endl;
            }
            break;
        }
        
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
