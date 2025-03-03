#include <iostream>
using namespace std;

void printTable(int num) 
{
    for (int i = 1; i <= 10; i++) 
	{
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() 
{
    int n;
    
    cout << "Enter a number: ";
    cin >> n;

    cout << "Multiplication Table of " << n << ":\n";
    printTable(n);

    return 0;
}

