#include <iostream>
using namespace std;

int main() {
    int units;
    int bill;

    cout << "Enter the number units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 0.5;
    } 
    else if (units <= 200) {
        bill = 50 + (units - 100) * 1;
    } 
    else if (units <= 300) {
        bill = 150 + (units - 200) * 1.5;
    } 
    else {
        bill = 350 + (units - 300) * 2;
    }

    cout << "Electricity Bill: Rs " << bill << endl;

    return 0;
}

