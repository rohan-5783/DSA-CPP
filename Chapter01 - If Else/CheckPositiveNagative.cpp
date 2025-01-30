#include <iostream>
using namespace std;

int main() 
{
    int num;

    cout << "Enter an Number:- ";
    cin >> num;

    if (num > 0)
	{
        cout << "The number is positive.";
    } 
	else if (num < 0) 
	{
        cout << "The number is negative.";
    } 
	else 
	{
        cout << "The number is zero.";
    }
}

