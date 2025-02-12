#include <iostream>
using namespace std;

int main() 
{
    for (int row = 1; row <= 5; row++) 
	{
        char ch = 'A';  
        for (int col = 1; col <= row; col++) 
		{
            cout << ch << " ";
            ch++;  
        }
        cout << endl;
    }
    return 0;
}

