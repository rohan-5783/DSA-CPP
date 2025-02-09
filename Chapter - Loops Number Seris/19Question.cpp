// 8, 6, 9, 23, 87 , ... this number print

#include <iostream>
using namespace std;

int main() 
{
    float number=8;

    for (int i = 1; i <= 10; i++) 
    {
       cout << number << ", ";
       number = number * i - (i + 1);  
    }
    
    return 0;
}

