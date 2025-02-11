// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
// print this pattern


#include <iostream>
using namespace std;

int main() 
{
    for (int row = 1; row <= 5; row++) 
	{
        for (int col = 5; col >= row; col--) 
		{
            cout << col << " ";
        }
        cout << endl;
    }
    return 0;
}

