#include<iostream>
using namespace std;
int main()
{
	int first=0,second=3,i,n;
	
	cout << " Enter no:";
	cin >> n;

	cout << first << " " << second << " ";
	
	for ( int i=1; i<n; i++)
	{
		second = second + i + (i+3);
		cout << second << " ";;
	}
	
}
