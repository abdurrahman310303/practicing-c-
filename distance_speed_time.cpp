#include <iostream>
using namespace std;

int main() {
    float distance, time, speed;
    int choice;
    
    cout << "Distance-Speed-Time Calculator" << endl;
    cout << "What do you want to calculate?" << endl;
    cout << "1. Distance (when speed and time are known)" << endl;
    cout << "2. Speed (when distance and time are known)" << endl;
    cout << "3. Time (when distance and speed are known)" << endl;
    cout << "Enter choice: ";
    cin >> choice;
    
    switch (choice) {
        case 1:
            cout << "Enter speed (km/h): ";
            cin >> speed;
            cout << "Enter time (hours): ";
            cin >> time;
            distance = speed * time;
            cout << "\nCalculation: Distance = Speed × Time" << endl;
            cout << "Distance = " << speed << " × " << time << endl;
            cout << "Distance = " << distance << " km" << endl;
            break;
            
        case 2:
            cout << "Enter distance (km): ";
            cin >> distance;
            cout << "Enter time (hours): ";
            cin >> time;
            if (time != 0) {
                speed = distance / time;
                cout << "\nCalculation: Speed = Distance ÷ Time" << endl;
                cout << "Speed = " << distance << " ÷ " << time << endl;
                cout << "Speed = " << speed << " km/h" << endl;
            } else {
                cout << "Time cannot be zero!" << endl;
            }
            break;
            
        case 3:
            cout << "Enter distance (km): ";
            cin >> distance;
            cout << "Enter speed (km/h): ";
            cin >> speed;
            if (speed != 0) {
                time = distance / speed;
                cout << "\nCalculation: Time = Distance ÷ Speed" << endl;
                cout << "Time = " << distance << " ÷ " << speed << endl;
                cout << "Time = " << time << " hours" << endl;
                cout << "Time = " << time * 60 << " minutes" << endl;
            } else {
                cout << "Speed cannot be zero!" << endl;
            }
            break;
            
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
