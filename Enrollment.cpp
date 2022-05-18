#include <iostream>
#include "Enrollment.h"
#include "RegisteredEmployee.h"
#include "Exam.h"
#include "Payment.h"

using namespace std;

//Enrollment
class Enrollment
{
	private:
		RegisteredEmployee *emp;
		Exam *exam;
		double marks;
		Payment *pmnt;
		
			
	public:
		Enrollment();		
		Enrollment(RegisteredEmployee *em, Exam *ex);
		void addPayment(Payment *p);		
		void addMarks(double m);		
		double getMarks();		
		void deleteMarks();		
		void displayEnrollment();			
		~Enrollment();		
};

//Enrollment
 Enrollment::Enrollment()
{
	marks = 0;
}
		
Enrollment::Enrollment(RegisteredEmployee *em, Exam *ex)
{
	emp = em;
	exam = ex;
	marks = 0;	
}

void Enrollment::addPayment(Payment *p)
{
	pmnt = p;
}
		
void Enrollment::addMarks(double m)
{
	if ((m < 100) && ( m > 0)){
		marks = m;
	}	
}
		
double Enrollment::getMarks(){
	return marks;
}
		
void Enrollment::deleteMarks(){
	marks = 0;
}
		
void Enrollment::displayEnrollment()
{	
}	
		
Enrollment::~Enrollment()
{
}
