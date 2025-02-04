#include <iostream>
using namespace std;

int main() 
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) 
	{
        cout << "Given number is even." << endl;
    } 
	else 
	{
        cout << "Given number is odd." << endl;
    }

    return 0;
}

