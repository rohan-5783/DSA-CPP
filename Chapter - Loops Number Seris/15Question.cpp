//544, 509, 474, 439, ... this number print
#include <iostream>
using namespace std;

int main() 
{
    int number = 544;

    for (int i = 1; i <= 10; i++) 
    {
       cout << number << ", ";
       number-=35;
    }

    return 0;
}

