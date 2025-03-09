#include <iostream>
using namespace std;

int main() 
{
    int rows, cols;
    
    cout << "Enter the array's row size: ";
    cin >> rows;
    cout << "Enter the array's column size: ";
    cin >> cols;

    int matrix[rows][cols], transpose[cols][rows];

    cout << "Enter array's elements:";
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < cols; j++) 
        {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:";
    for (int i = 0; i < cols; i++) 
    {
        for (int j = 0; j < rows; j++) 
        {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

