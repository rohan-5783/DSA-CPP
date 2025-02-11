// 5
// 4 4
// 3 3 3
// 2 2 2 2
// 1 1 1 1 1
// print this pattern

#include <iostream>
using namespace std;

int main() 
{
    for (int row = 5; row >= 1; row--) 
	{  
        for (int col = 5; col >= row; col--) 
		{  
            cout << row << " ";
        }
        cout << endl;
    }
    return 0;
}

