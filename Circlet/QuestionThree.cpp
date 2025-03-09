#include <iostream>
using namespace std;

int main() 
{
    int n = 5;  

    for (int row = 0; row < n; row++) 
    {
      
        for (int space = 0; space < row; space++) 
        {
            cout << "  ";  
        }

        for (int col = 0; col < (n - row); col++) 
        {
            cout << (col % 2) << " ";
        }

        cout << endl;
    }

    return 0;
}

