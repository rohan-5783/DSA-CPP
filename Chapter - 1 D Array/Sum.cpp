#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	
	cout << " Enter a Number of elements:";
	cin >> n;
	
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cout << "Enter numbers:" ;
		cin >> a[i];
	}
	
	cout << endl;

	for(int i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	cout << sum;
}
