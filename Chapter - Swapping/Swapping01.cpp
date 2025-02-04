#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;

    cout << "Enter first number A: ";
    cin >> a;
    cout << "Enter second number B: ";
    cin >> b;

    c = a;
    a = b;
    b = c;

    cout << "After swapping: A = " << a << ", B = " << b << endl;

    return 0;
}

