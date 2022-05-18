#include "Question.h"
using namespace std; 
#include <cstring>
#include "Answer.h"

//Question implementaion
 Question::Question (int qNo, string des)
{
	questionNo = qNo;
	qDes = des; 
};
		
void Question::addAnswer(Answer *a)
{
	ans = a;
}

void Question::displayQuestion()
{
	cout << endl;
	cout << "~~~~~Question~~~~~";
	cout<<endl<<"Question No : "<< questionNo << endl; cout<<"Question : "<<qDes<<endl;
}

void Question::displayQandA()
{
	cout<< questionNo << ". "<<qDes<<endl;
	ans->printAnswer();	
	cout<<endl;
}

Question::~Question()
{
cout<<"Deleting Question "<<questionNo<<endl;
}
