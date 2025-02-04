#include <iostream>
using namespace std;

int main() 
{
    int number1, number2;
    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;

    if (number2 != 0) 
	{
        if (number1 % number2 == 0) 
		{
            cout << number1 << " is divide by " << number2 << "." << endl;
        } 
		else 
		{
            cout << number1 << " is not divide by " << number2 << "." << endl;
        }
    } 
	else
	{
        cout << "Division by zero is not allowed!" << endl;
    }

    return 0;
}

