#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int arr[size];
    cout << "Enter array elements: ";
    
    for (int i = 0; i < size; i++) 
        cin >> arr[i];

    cout << "Negative elements: ";
    
    for (int i = 0; i < size; i++) 
        if (arr[i] < 0) 
            cout << arr[i] << " ";

    cout << endl;
    return 0;
}

