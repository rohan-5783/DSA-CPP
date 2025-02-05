//wap to print 1 to n using for loop.

#include <iostream>
using namespace std;

int main()
{
	int number;
	
	cout << "Enter a Number:";
	cin >> number;
	
    for(int i=1; i<=number; i++)
	{
		cout << i << endl;		
	}
	
	return 0;
}
