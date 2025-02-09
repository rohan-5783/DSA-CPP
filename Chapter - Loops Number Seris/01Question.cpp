//2, 1, (1/2), (1/4), ...Number series print

#include<iostream>
using namespace std;

int main()
{
	int first=2,second=1,i=1,n=2;
	
	cout << first << " " << second << " " ;
	
	while(i<=10)
	{
		cout << "1/" << n << " "; 
		n*=2;
		i++;
	}

	return 0;
}
