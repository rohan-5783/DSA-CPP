#include <iostream>
using namespace std;

int main() 
{
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b) 
	{
        if (a >= c) 
		{
            cout << "Maximum Number is : " << a << endl;
        } 
		else 
		{
            cout << "Maximum Number is: " << c << endl;
        }
    } 
	else 
	{
        if (b >= c)
		{
            cout << "Maximum Number is: " << b << endl;
        } 
		else
		{
            cout << "Maximum Number is: " << c << endl;
        }
    }

    return 0;
}

