//wap to print only an even number from n to 1 using while/for loop.

#include <iostream>
using namespace std;

int main()
{
	int number,i=1;
	cout << "Enter a Number:";
	cin >> number;
	
	while(i<=number)
	{
		if(i %  2 == 0)
		{
			cout << i  << endl;
		}
		i++;
		
	}
	
	
	return 0;
}
