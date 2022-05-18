//Question
#include "Answer.h"
#include <cstring>

class Question
{
	private:
		int questionNo;
		string qDes;
		Answer *ans;
	
	
	public:
		Question ();
		Question (int qNo, string des);	
		void addAnswer(Answer *a);		
		void displayQuestion();
		void displayQandA();
		~Question ();	
};
