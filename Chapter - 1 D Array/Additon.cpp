#include <iostream>
using namespace std;

int main() 
{
    int n;
   
    cout << "Enter the size of the arrays: ";
    cin >> n;

    int arr1[n], arr2[n], sum[n];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) 
	{
        sum[i] = arr1[i] + arr2[i];
    }

    cout << "Sum of both arrays: ";
    
    for (int i = 0; i < n; i++)
	{
        cout << sum[i] << " ";
    }

}

