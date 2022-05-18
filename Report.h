#include <iostream>
#include "Administrator.h"
using namespace std;

//Report
class Report
 {
 	private:
	   int reportID;
       string reportName;
       string reportDate;
       
    public:
    	Report();
    	Report(int rID, string rName, string rDate);
		void addAdmin(Administrator *A1);
    	void displayReport();
		~Report();	
 };
