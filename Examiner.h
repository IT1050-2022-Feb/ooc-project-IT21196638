//Examiner

#include <iostream> 
#include <cstring>
using namespace std;

class Examiner
 {
 	private:
 		int ExaminerID;
 		string Name;
 		string Address;
 		string ContactNo;
 		double Salary;
 	
 	public:
 		Examiner();
 		Examiner(int exaID, string exaName, string exaAddress, string exaContactNo, double exaSalary);
 		void displayExaminerDetails();
 		double getsalary();
 		void updateExaminerDetails();
		~Examiner();
 };
