#include <iostream>
#include "Report.h"
#include "Administrator.h"
using namespace std;

//Report
Report::Report(int rID, string rName, string rDate)
{
	reportID = rID;
	reportName = rName;
	reportDate = rDate;
}
	
void Report::addAdmin(Administrator *A1)
{
     A1->displayAdminDetails();
}
    
void Report::displayReport()
{
    cout << endl;
    cout << "~~~~~Report~~~~~" << endl;
    cout << " Report ID =" << reportID << endl;
    cout << " Report Name =" << reportName << endl;
    cout << " Report Date = " << reportDate << endl;
}
