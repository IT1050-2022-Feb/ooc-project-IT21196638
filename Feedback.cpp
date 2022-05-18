//Feedback
#include "Feedback.h"
#include "Administrator.h"
using namespace std; 
#include <cstring>
#include <iostream> 

Feedback::Feedback()
{
message = "";
}

Feedback::Feedback(string pMessage)
{
message = pMessage;
}

string Feedback::getMessage()
{
return FeedbackMsg;
}

void Feedback::manageFeedback(Administrator *a )
{
}

void Feedback::displayFeedbackDetails()
{
	cout << endl;
	cout << "~~~~~~~~~~~~Feedback's Details~~~~~~~~~~~" << endl;; cout << "Message : " << message ;
	cout << endl;
}
