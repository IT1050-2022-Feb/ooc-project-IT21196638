//Examiner
#include "Examiner.h"
using namespace std; 
#include <cstring>
#include <iostream> 

Examiner::Examiner()
 {
 	ExaminerID=0;
 	Name="";
 	Address="";
 	ContactNo="";
 	Salary=0;
 }
 
Examiner::Examiner(int exaID, string exaName, string exaAddress, string exaContactNo, double exaSalary)
 {
 	ExaminerID=exaID;
 	Name=exaName;
 	Address=exaAddress;
 	ContactNo=exaContactNo;
 	Salary=exaSalary;
 }
 
void Examiner::displayExaminerDetails()
 {
 	cout << endl;
	cout << "~~~~~~~~~~~~Examiner~~~~~~~~~~~~" << endl; cout << "ID : " << ExaminerID << endl;
	cout << "Name : " << Name << endl; cout << "Address : " << Address << endl;
	cout << "Contact NO : " << ContactNo << endl; cout << "Salray : " << Salary << endl;
	cout << endl;
 }
 
double Examiner::getsalary()
 {
	return Salary;
 }
 
void Examiner::updateExaminerDetails()
 {
 	cout << "Enter new contact number : "; 
	cin >> ContactNo;
    cout << "Enter new salary : "; 
	cin >> Salary;
 }
 
Examiner::~Examiner()
 {
	cout << "Examiner object " << ExaminerID << " Deleted " << endl;;
 }
