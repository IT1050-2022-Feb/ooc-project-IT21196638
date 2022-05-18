//RegisteredEmployee
#include "RegisteredEmployee.h"
#include <cstring>
using namespace std; 

RegisteredEmployee::RegisteredEmployee()
{	
}

RegisteredEmployee::RegisteredEmployee(const char eName[],int rEmpID,const char rENIC[], const char eEmail[], int eContactNo, string rAddress)
{
	strcpy(name, eName);
	empID = rEmpID;
	address =rAddress;
	strcpy(NIC, rENIC);
}

char RegisteredEmployee::getName()
{	
}

char RegisteredEmployee::getEmail()
{	
}

char RegisteredEmployee::getContactNo()
{	
}

void RegisteredEmployee::displayUserDetails()
{	
  cout << endl;
	cout << "~~~~~RegisteredEmployee~~~~" << endl;
	cout<< "Employee Name: " << name <<endl;
	cout<< "Employee ID: " << empID <<endl;
	cout<< "Employee Email: " << email <<endl;
	cout<< "Employee NIC: " << NIC <<endl;
	cout<< "Employee Contact No: " << contactNO <<endl;
	cout<< "Employee Address: " << address <<endl;
}

void RegisteredEmployee::updateUserDetails()
{	
}

RegisteredEmployee::~RegisteredEmployee()
{
}
