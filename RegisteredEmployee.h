//RegisteredEmployee
#include "Feedback.h"
#include <iostream>
#include <cstring>

class RegisteredEmployee : public UnregisteredEmployee
 {
	protected:
		int empID;
		string address;
		char NIC[10];
		Feedback*fb[FSIZE];

	public:
		RegisteredEmployee();
		RegisteredEmployee(const char eName[],int rEmpID,const char rENIC[], const char eEmail[], int eContactNo, string rAddress);
		char getName();
		char getEmail();
		char getContactNo();
		void displayUserDetails();
		void updateUserDetails();
		~RegisteredEmployee();
 };
