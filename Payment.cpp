Payment::Payment()
{
		payID = 0;
		payType = "";
		amount = 0;
		date = "";	
}

Payment::Payment(int id,string type, int amo,string dt, Enrollment *en)
{
	payID = id;
	payType=type;
	amount = amo;
	date=dt;
	enrl = en;	
};

void Payment::displayPayment()
{
	    cout << endl;
    	cout << "~~~~~Payment~~~~" << endl;
    	cout << " Payment ID =" << payID << endl;
        cout << " Payment Type =" << payType << endl;
        cout << " Payment Amount = " << amount << endl;
        cout << " Payment Date = " << date << endl;	
}

void Payment::updatePayment()
{	
}
