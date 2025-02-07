#include<iostream>
using namespace std;

int main()
{
    int firstnum = 21; 
    int secondnum = 9;

    
    for (int i = 0; i < 3; i++) 
	{ 
        cout << firstnum << ", " << secondnum << ", ";
        secondnum += 2; // 
    }
    
    cout << firstnum << endl;

    return 0;
}
