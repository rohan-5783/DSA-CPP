#include <iostream>
using namespace std;

int main() 
{
    float percentage;
    
    cout << "Enter student percentage: ";
    cin >> percentage;

    if (percentage >= 90 && percentage <= 100)
	{
        cout << "Grade: A+" ;
    } 
	else if (percentage >= 80 && percentage < 90) 
	{
        cout << "Grade: A" ;
    } 
	else if (percentage >= 70 && percentage < 80) 
	{
        cout << "Grade: B" ;
    } 
	else if (percentage >= 60 && percentage < 70) 
	{
        cout << "Grade: C" ;
    } 
	else if (percentage >= 40 && percentage < 60) 
	{
        cout << "Grade: D" ;
    } 
	else if (percentage >= 0 && percentage < 40) 
	{
        cout << "Grade: F - Fail" << endl;
    } 
	else 
	{
        cout << "Invalid percentage.";
    }

}

