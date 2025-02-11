// 5 4 3 2 1
// 4 3 2 1
// 3 2 1
// 2 1
// 1
//  print this pattern

#include <iostream>
using namespace std;

int main() 
{
    for (int row = 1; row <= 5; row++) 
	{
        for (int col = row; col <= 5; col++) 
		{
            cout << col << " ";
        }
        cout << endl;
    }

    return 0;
}

