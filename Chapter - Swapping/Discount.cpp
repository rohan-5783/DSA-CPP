#include <iostream>
using namespace std;

int main()
 {
    int amount, discount, finalAmount;

    cout << "Enter the Amount: ";
    cin >> amount;

    if (amount > 0 && amount <= 1000) 
	{
        discount = 0.05 * amount; 
        finalAmount = amount - discount;
    } else if (amount > 1000 && amount <= 5000) 
	{
        discount = 0.10 * amount; 
        finalAmount = amount - discount;
    } else if (amount > 5000 && amount <= 10000)
	{
        discount = 0.15 * amount;
		finalAmount = amount - discount; 
    }
	 else if  (amount > 10000)
	 {
        discount = 0.25 * amount;
		finalAmount = amount - discount;      
     }

    cout << "Final Amount: " << finalAmount << endl;

    return 0;
}

