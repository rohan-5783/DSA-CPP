#include <iostream>
using namespace std;

int main() 
{
    int a, b, c, d;
    cout << "Enter four numbers: ";
    cin >> a >> b >> c >> d;

    if (a >= b) 
	{
        if (a >= c)
		 {
            if (a >= d) 
			{
                cout << "Maximum number is : " << a << endl;
            }
			 else 
			{
                cout << "Maximum number is: " << d << endl;
            }
        } 
		else 
		{
            if (c >= d)
			{
                cout << "Maximum number is : " << c << endl;
            } 
			else
			{
                cout << "Maximum number is: " << d << endl;
            }
        }
    } 
	else
	 {
        if (b >= c) 
		{
            if (b >= d)
			{
                cout << "Maximum number is: " << b << endl;
            } else 
			{
                cout << "Maximum number is : " << d << endl;
            }
        } 
		else
		 {
            if (c >= d) 
			{
                cout << "Maximum number is: " << c << endl;
            } 
			else
			 {
                cout << "Maximum number is: " << d << endl;
            }
        }
    }

    return 0;
}

