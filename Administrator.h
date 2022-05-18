#include <iostream>
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
