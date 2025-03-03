#include <iostream>
using namespace std;


void printNumbers(int i , int n) 
{
    if (i <= n) 
	{  
        cout << i << " ";  
        i++;  
        printNumbers(i,n); 
    }
}

int main() 
{
    int n;
    
    cout << "Enter a number: ";
    cin >> n;

    printNumbers(1,n);

    return 0;
}

