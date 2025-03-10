#include <iostream>
using namespace std;

class Employee
{ 
   public:
   string name;
   string jobRole;
   int id_no;
   int salary;
	
};

int main()
{
	Employee emp1,emp2,emp3;

	emp1.name = "dev";
	emp1.jobRole = "helper";
	emp1.id_no = 123;
	emp1.salary = 20000;
	
	cout << emp1.name << endl ;
	cout << emp1.jobRole << endl ;
	cout << emp1.id_no << endl ;
	cout << emp1.salary << endl ;
	
	cout << endl;
	
	emp2.name = "akash";
	emp2.jobRole = "accounter";
	emp2.id_no = 456;
	emp2.salary = 40000;
	
	cout << emp2.name << endl ;
	cout << emp2.jobRole << endl ;
	cout << emp2.id_no << endl ;
	cout << emp2.salary << endl ;
	
	cout << endl;
	
	emp3.name = "samay";
	emp3.jobRole = "supervisior";
	emp3.id_no = 546;
	emp3.salary = 50000;
	
	cout << emp3.name << endl ;
	cout << emp3.jobRole << endl ;
	cout << emp3.id_no << endl ;
	cout << emp3.salary << endl ;
}
