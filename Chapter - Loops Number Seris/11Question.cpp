//  1.5, 2.3, 3.1, 3.9, ... Number series print


#include <iostream>
using namespace std;

int main() 
{
    float number = 1.5;

    for ( int i = 1; i<=10 ; i++)
    {
    	cout << number << ", ";
    	number += 0.8;
	}
	
    return 0;
}

