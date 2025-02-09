// 2, 6, 18, 54, ... this number print

#include <iostream>
using namespace std;

int main() 
{
    int number = 2;

    for (int i = 1; i <= 10; i++) 
    {
       cout << number << ", ";
       number*=3;
    }

    return 0;
}

