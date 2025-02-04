#include <iostream>
using namespace std;

int main() {
    int units, bill = 0;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    if (units >= 0) {
        if (units <= 100) {
            bill = units * 0.5;
            cout << "For " << units << " units: Rs 0.50 per unit." << endl;
        }
        else {
            if (units <= 200) {
                bill = 50 + (units - 100) * 1;  // Rs 50 for first 100 units, Rs 1 for next units
                cout << "First 100 units: Rs 50." << endl;
                cout << "Next " << units - 100 << " units: Rs 1 per unit." << endl;
            }
            else {
                if (units <= 300) {
                    bill = 150 + (units - 200) * 1.5;  // Rs 150 for first 200 units, Rs 1.5 for next units
                    cout << "First 200 units: Rs 150." << endl;
                    cout << "Next " << units - 200 << " units: Rs 1.5 per unit." << endl;
                }
                else {
                    bill = 300 + (units - 300) * 2;  // Rs 300 for first 300 units, Rs 2 for next units
                    cout << "First 300 units: Rs 300." << endl;
                    cout << "Next " << units - 300 << " units: Rs 2 per unit." << endl;
                }
            }
        }
        cout << "Total Electricity Bill: Rs " << bill << endl;
    } else {
        cout << "Invalid input. Units must be a non-negative number." << endl;
    }

    return 0;
}

