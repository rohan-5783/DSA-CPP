#include <iostream>
using namespace std;

int main() 
{
    int first = 58;

    for (int i = 1; i <=5;i++)    
	 {  
        cout << first;
        if (i < 5)	
		 {
            cout << ", ";
        }
        first -= 6;  
    }

    return 0;
}

