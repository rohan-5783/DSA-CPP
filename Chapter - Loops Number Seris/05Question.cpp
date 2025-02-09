//22, 21, 23, 22, 24, 23, ... Number series print

#include<iostream>
using namespace std;

int main() 
{
    int value = 53;

    for (int i = 0; i < 10; i++) 
    {
        cout << value << " " << value;
        cout << " ";
        value -= 13;
    }

    return 0;
}

