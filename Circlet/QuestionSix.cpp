#include <iostream>
using namespace std;

int main() 
{  
    int n = 5; 

   
    for (int i = 1; i <= n; i++) 
    {
        cout << i << " ";
    }

 
    for (int i = n - 1; i >= 1; i--) 
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}

