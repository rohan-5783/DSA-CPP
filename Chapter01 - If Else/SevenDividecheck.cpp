#include <iostream>
using namespace std;

int main() 
{
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
   
    if (number % 7 == 0) 
	{
        cout <<"This Number divisible by 7.";
    }
	 else 
	{
        cout << "This Number not divisible by 7.";
    }
}

