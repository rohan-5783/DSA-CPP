//8, 22, 8, 28, 8, ...   Number series print

#include <iostream>
using namespace std;

int main() 
{
    int firstnumber = 8, secondnumber = 22;

    for (int i = 0; i < 10; i++)
    { 
        cout << firstnumber << " " << secondnumber << ", ";
        secondnumber += 6;  
    } 

    return 0; 	
}

