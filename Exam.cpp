//Exam
#include "exam.h"
using namespace std; 
#include <cstring>

Exam::Exam () 
{
	examID = 0;
	examName = "";
	examFee = 0;
	ques [0] = new Question(0, "");
	ques [1] = new Question(0, "");
}
		
Exam::Exam (int exNo, string exName, double exFee, Question *q1, Question *q2)
{
	examID = exNo;
	examName = exName;
	examFee = exFee;
	ques [0] = q1;
	ques [1] = q2;
}
		
void Exam::displayExamDetails()
{
	cout << endl;
	cout<< endl;
	cout << "~~~~~Exam Details~~~~~" << endl;
	cout<<"Exam ID : "<<examID<<endl<<"Exam Name : "<<examName<<endl<<"Exam Fee : "<<examFee<<endl;
}
		
void Exam::DisplayQuestion ()
{
	for (int i=0; i<SIZE; i++){
		ques[i]->displayQuestion();
	}		
}
void Exam::displayExamQandA()
{
	for (int i=0; i<SIZE; i++){
		ques[i]->displayQandA();
		cout<<endl;
	}
}
						
Exam::~Exam()
{
	cout<< "Deleting Exam "<<endl;	
	for (int i=0; i<SIZE; i++){
		delete ques[i];
	}	
}