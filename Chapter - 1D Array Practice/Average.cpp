#include <iostream>
using namespace std;

int main() 
{
    int n;
    float sum = 0, average;

    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n]; 


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
        sum += arr[i]; 
    }
  
    average = sum / n;

    cout << "The average of the array is: " << average << endl;

}

