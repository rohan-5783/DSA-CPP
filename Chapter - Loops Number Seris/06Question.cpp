//21, 9, 21, 11, 21, 13, 21, ...  Number series print

#include <iostream>
using namespace std;

int main() 
{
    int firstnumber = 21, secondnumber = 9;

    for (int i = 0; i < 10; i++)
    { 
        cout << firstnumber << ", " << secondnumber << ", ";
        secondnumber += 2;  
    }
    cout << firstnumber << endl;

    return 0; 
}

