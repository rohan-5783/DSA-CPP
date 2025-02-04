#include <iostream>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter first number A: ";
    cin >> a;
    cout << "Enter first number B: ";
    cin >> b;

    a = a + b;
    b = a - b;
    a = a - b;

    
    cout << "After swapping: A = " << a << ", B = " << b << endl;

    return 0;
}

