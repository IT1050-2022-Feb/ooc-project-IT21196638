//UnregisteredEmployee implimentation
#include "UnregisteredEmployee.h"
#include <cstring>
using namespace std; 

UnregisteredEmployee::UnregisteredEmployee()
{	
}

UnregisteredEmployee::UnregisteredEmployee(const char eName[], const char eEmail[], int eContactNo)
{
	strcpy(name, eName);
	strcpy(email, eEmail);
	contactNO = eContactNo;
}

void UnregisteredEmployee::displayUserDetails()
{
	cout << endl;
	cout << "~~~~~UnregisteredEmployee~~~~~" << endl;
	cout<< "Employee Name: " << name <<endl;
	cout<< "Employee Email: " << email <<endl;
	cout<< "Employee Contact No: " << contactNO <<endl;	
}

void UnregisteredEmployee::updateUserDetails()
{	
}

UnregisteredEmployee::~UnregisteredEmployee()
{	
}
