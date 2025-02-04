#include <iostream>
#include <utility>
using namespace std;

int main() 
{
    int a, b;

    cout << "Enter first number A: ";
    cin >> a;
    cout << "Enter second number B: ";
    cin >> b;
    
    swap(a, b);

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

