// 201, 202, 204, 207, ...  Number series print

#include <iostream>
using namespace std;

int main() 
{
    int number = 201;
    int increment = 1; 

    for (int i = 1; i <= 10; i++) 
    {
        cout << number << ", ";
        number += increment; 
        increment++;  
    }

    return 0;
}

