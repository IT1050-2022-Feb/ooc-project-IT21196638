class Payment
 {
	private:	
		int payID;
		string payType;
		int amount;
		string date;
		Enrollment *enrl;
			
	public :
		Payment();
		Payment(int id,string type, int amo,string dt, Enrollment *en);	
		void displayPayment();
		void updatePayment();
		~Payment();
 };
