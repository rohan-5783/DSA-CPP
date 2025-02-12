// 1
// 2 3 
// 4 5 6
// 7 8 9 10 
// 11 12 13 14 15
// print this pattern

#include <iostream>
using namespace std;

int main() 
{  int increment=1;
    for (int row = 1; row <= 5 ;row++) 
	{
        for (int col = 1 	; col <= row; col++) 
		{
            cout << increment << " ";
            increment++;
        }
        
        cout << endl;
    }

    return 0;
}
     
