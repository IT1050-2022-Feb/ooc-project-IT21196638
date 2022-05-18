// UnregisteredEmployee
#include <iostream>
#include <cstring>

class UnregisteredEmployee
 {
	protected:
		char name[30];
		char email[30];
		int contactNO;

	public:
		UnregisteredEmployee();
		UnregisteredEmployee(const char eName[], const char eEmail[], int eContactNo);
		void displayUserDetails();
		void updateUserDetails();
		~UnregisteredEmployee();
};
