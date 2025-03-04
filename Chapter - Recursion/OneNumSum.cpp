#include <iostream>
using namespace std;


int sum(int n) 
{
    if (n <= 1)
    return n;
    return n + sum(n - 1);
}

int main() 
{
    int n;
    
    cout << "Enter a number: ";
    cin >> n;  
    
    cout << "Sum is"  << sum(n);
    
    return 0;
}

