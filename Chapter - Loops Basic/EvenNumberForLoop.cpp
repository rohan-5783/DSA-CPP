//wap to print only an even number from n to 1 using while/for loop.

#include <iostream>
using namespace std;

int main()
{
	int number;
	cout << "Enter a Number:";
	cin >> number;
	
	for(int i=1; i<=number; i++)
	{
		if(i %  2 == 0)
		{
			cout << i  << endl;
		}
		
	}
	
	
	return 0;
}
