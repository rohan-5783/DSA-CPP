// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5 
//print this pattern


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


