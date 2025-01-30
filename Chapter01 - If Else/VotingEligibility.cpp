#include<iostream>
using namespace std;

int main()
{
		int age;
		
		cout << "Enter Your Age:- ";
		cin >> age ;
		
		if ( age <= 0 || age > 100  )
		{
			cout << "Your Age Must 1 and 100";
		}
		else if ( age >= 18 )
		{	
			cout << "Your eligible for votting.";
		}
		else 
		{
		    cout << "You are not eligible for votting!";
		}
	
	
}
