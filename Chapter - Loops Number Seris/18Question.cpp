//  5.2, 4.8, 4.4, 4, ... this number print

#include <iostream>
using namespace std;

int main() 
{
    float number=5.2;

    for (int i = 1; i <= 10; i++) 
    {
       cout << number << ", ";
       number-=0.4;  
    }
    
    return 0;
}

