#include <iostream>
using namespace std;

int factorial(int n) 
{
    if (n <= 1) 
	return 1;
    return n * factorial(n - 1);
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n; 
    
    if (n > 0)
    {
    	cout << "Factorial is " << factorial(n) << endl;
	}

    return 0;
}

