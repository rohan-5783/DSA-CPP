//36, 34, 30, 28, 24, ...  Number series print

#include <iostream>
using namespace std;

int main() 
{
    int number = 36;

    for (int i = 0; i < 10; i++) 
	{
        cout << number << " ";
        number -= (2 * i + 2);  
    }

    return 0;
}	

