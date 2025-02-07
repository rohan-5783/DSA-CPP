// fibonacci series

#include<iostream>
using namespace std;

int main()
{
	int first = 0,second = 1,third ,i = 1,f;
	cout << "Enter A Number: ";
	cin >> f;
	
	cout << first << " " <<  second  << " ";
	
	while(i<=f)
	{   
	    third = first + second;
		cout << third << " ";
		first = second;
		second = third;
		i++;
	}
	
	return 0;
	
}
