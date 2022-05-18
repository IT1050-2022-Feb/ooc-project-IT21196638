//Answer
#include <cstring>
#include <iostream.h>


class Answer
{
	private:		
		int answerID;
		string answerDes;
		Question *q;
	
	public:
		Answer();		
		Answer( int aID, string aDes);		
		void addQuestion(Question *q1);		
		void printAnswer();
		void displayAnswer();
		~Answer();
};