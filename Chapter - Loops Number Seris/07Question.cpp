//58, 52, 46, 40, 34, ...  Number series print
#include <iostream>

using namespace std;

int main() 
{
  int first = 58;

  for (int i = 1; i <= 10; i++) 
  {
    cout << first;
    cout << ", ";
    first -= 6;
  }

  return 0;
}
