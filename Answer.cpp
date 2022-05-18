//Answer
#include "Answer.h"
#include <cstring>
using namespace std; 

Answer::Answer()
{
	answerID = 0;
	answerDes = "";
}	
Answer::Answer( int aID, string aDes)
{
	answerID = aID;
	answerDes = aDes;
}
void Answer::addQuestion(Question *q1)
{
	q = q1;
}
void Answer::printAnswer()
{
cout<<"Answer : "<<answerDes;
}
void Answer::displayAnswer()
{
cout << endl;
cout << "~~~~~Answer~~~~~" ;
cout<<endl<<"Answer No: "<<answerID<< endl; cout<<"Answer : "<<answerDes;
}