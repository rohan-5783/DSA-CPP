#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int arr[rows][cols];

    cout << "Enter array elements:";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    
    int maxnumber = arr[0][0];
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            if (arr[i][j] > maxnumber) 
                maxnumber = arr[i][j];
        }
    }

    cout << "Largest element is: " << maxnumber << endl;

    return 0;
}

