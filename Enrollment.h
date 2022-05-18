#include <iostream>
#include "RegisteredEmployee"
#include "Exam"
#include "Payment"

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
