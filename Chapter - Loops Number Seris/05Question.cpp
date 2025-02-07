#include<iostream>
using namespace std;

int main() 
{
    int value = 53;

    for (int i = 0; i < 3; i++) 
    {
        cout << value << ", " << value;
        if (i <= 2) { 
            cout << " ";
        }
        value -= 13;
    }

    return 0;
}

