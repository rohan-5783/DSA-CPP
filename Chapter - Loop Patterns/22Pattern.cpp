#include <iostream>
using namespace std;

int main() 
{
    char ch = 'A';
    
    for (int row = 1; row <= 5; row++) 
	{
        for (int col = 1; col <= row; col++) 
		{
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}

