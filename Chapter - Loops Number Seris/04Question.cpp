//22, 21, 23, 22, 24, 23, ... Number series print

#include<iostream>
using namespace std;

int main()
{
    int first = 22, second = 21;

    for (int i = 1; i <= 5; i++) 
    {
        cout << first << " " << second << " ";
        first++;  
        second++; 
    }

    return 0;
}

