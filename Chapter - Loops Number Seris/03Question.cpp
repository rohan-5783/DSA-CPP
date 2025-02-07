#include <iostream>
using namespace std;

int main() 
{
    int number = 36;

    for (int i = 0; i < 10; i++) 
	{
        cout << number << " ";
        number -= (i % 2 == 0) ? 2 : 4;
    }

    return 0;
}

