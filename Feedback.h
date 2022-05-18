//Feedback
#include "Administrator.h"
#include <cstring>
#include <iostream.h>

class Feedback
 {
	private:
		int FeedbackID;
		char Email;
		
		string message;
		string FeedbackMsg;
		Administrator *admin; 
		RegisteredEmployee *user;
	
	public:
		Feedback();
		Feedback(string pMessage); 
		string getMessage();
		void manageFeedback(Administrator *a); 
		void displayFeedbackDetails();	
 };
