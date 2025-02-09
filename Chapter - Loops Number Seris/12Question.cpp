//  14, 28, 20, 40, 32, 64, ...  Number series print

#include <iostream>
using namespace std;

int main() 
{
    int number = 14; 

    for (int i = 1; i <=5; i++) 
    {
        cout << number << ", ";
        number *= 2; 
		cout << number << ", ";
		number -= 8;    
    }

    return 0;
}

