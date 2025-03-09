#include <iostream>
using namespace std;

int main() 
{
    int n = 5; 

    for (int row = n; row >= 1; row--) 
    {
       
        for (int space = 1; space < row; space++) 
        {
            cout << "  ";
        }

        for (int col = row; col <= n; col++) 
        {
            cout << col << " ";
        }

        for (int col = n - 1; col >= row; col--) 
        {
            cout << col << " ";
        }

        cout << endl;
    }

    return 0;
}

