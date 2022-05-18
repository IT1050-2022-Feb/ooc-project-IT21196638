//Exam
#include "Question.h"
#include <cstring>
#include <iostream.h>


class Exam
 {
	private:
		int examID;
		string examName;
		double examFee;
		Question * ques[SIZE];
		
	public:
		Exam ();		
		Exam (int exNo, string exName, double exFee, Question *q1, Question *q2);		
		void displayExamDetails();		
		void DisplayQuestion ();
		void displayExamQandA();						
		~Exam();
};