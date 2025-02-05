//wap to print 1 to n using while loop.

#include <iostream>
using namespace std;

int main()
{
	int number,i=1;
	
	cout << "Enter a Number:";
	cin >> number;
	
	while(i<=number)
	{
		cout << i << endl;
		i++;		
	}
	
	return 0;
}
