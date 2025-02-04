#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (a <= b) 
	{
        cout << "Minimum Number is: " << a << endl;
    } 
	else 
	{
        cout << "Minimum Number is: " << b << endl;
    }

    return 0;
}

