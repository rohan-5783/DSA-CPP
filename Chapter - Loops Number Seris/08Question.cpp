//3, 4, 7, 8, 11, 12, ...  Number series print

#include <iostream>
using namespace std;

int main() 
{
    int number = 3;
    for (int i = 1; i <= 10; i++) 
    {
        cout << number << " ";
 
        if (i % 2 == 0) 
        {
            number += 3;
        } 
        else 
        {
            number += 1;
        }
    }

    return 0;
}

