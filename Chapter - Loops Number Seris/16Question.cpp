//80, 10, 70, 15, 60, ... this number print

#include <iostream>
using namespace std;

int main() 
{
    int number1 = 80 , number2 = 10;

    for (int i = 1; i <= 10; i++) 
    {
       cout << number1 << ", " << number2 << ", ";
       number1-=10;
       number2+=5;
    }

    return 0;
}

