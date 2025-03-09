#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements:";
    
    for (int i = 0; i < size; i++) 
        cin >> arr[i];

    cout << "Negative elements: ";
    
    for (int i = 0; i < size; i++) 
        if (arr[i] < 0) 
            cout << arr[i] << " ";

    cout << endl;

    int rows, cols;
    cout << "Enter row size: ";
    cin >> rows;
    cout << "Enter column size: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter array elements:";
    for (int i = 0; i < rows; i++) 
        for (int j = 0; j < cols; j++) 
            cin >> matrix[i][j];

    int row_num, col_num;
    cout << "Enter row number: ";
    cin >> row_num;
    cout << "Enter column number: ";
    cin >> col_num;

    int row_sum = 0, col_sum = 0;

    for (int j = 0; j < cols; j++)
        row_sum += matrix[row_num][j];

    for (int i = 0; i < rows; i++)
        col_sum += matrix[i][col_num];

    cout << "Sum of row " << row_num << ": " << row_sum << endl;
    cout << "Sum of column " << col_num << ": " << col_sum << endl;

    return 0;
}

