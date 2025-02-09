// 31, 29, 24, 22, 17, ... Number series print


#include <iostream>
using namespace std;

int main() 
{
    int number = 31; 

    for (int i = 1; i <=5; i++) 
    {
        cout << number << ", ";
        number -= 2; 
		cout << number << ", ";
		number -= 5;    
    }

    return 0;
}

