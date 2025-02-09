// 2, 4, 6, 8, 10, ...   Number series print

#include <iostream>
using namespace std;

int main() 
{
    int number=2; 

    for (int i = 1; i <=10; i++) 
    {
        cout << number << ", ";
        number += 2; 
    }

    return 0;
}

