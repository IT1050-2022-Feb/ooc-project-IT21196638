//Administrator
#include <iostream>
#include "Administrator.h"
#include "Feedback.h"
#include "Resource.h"

using namespace std;

class Administrator
 {
	private:
 		int adminID;
 		string adminName;
 		int adminContactNo;
 		string adminEmail;
 		Feedback *fb[FSIZE];
 		Resource *RE[RSIZE];
 		
	public:
 		Administrator();
 		Administrator(int aID,string aName,int aContactNo , string aEmail);	
		void displayAdminDetails();
		void manageFeedback(Feedback *fb1);
		void manageResource(Resource *RE1);	
		~Administrator();
 };

Administrator::Administrator(int aID,string aName,int aContactNo , string aEmail)
{
 	adminID = aID;
	adminName = aName;
	adminContactNo = aContactNo;
	adminEmail = aEmail;
}	
void Administrator::displayAdminDetails()
{
	cout << endl;
	cout << "~~~~~Administrator~~~~~" << endl;
	cout << " Admin ID =" << adminID << endl;
    cout << " Admin Name =" << adminName << endl;
    cout << " Admin Contact Number = " << adminContactNo << endl;
    cout << " Admin Email = " << adminEmail << endl;
}
void Administrator::manageFeedback(Feedback *fb1)
{	
}

void Administrator::manageResource(Resource *RE1)
{	
}
