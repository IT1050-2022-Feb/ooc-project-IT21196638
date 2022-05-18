class Resource
 {
	protected:
		int  ResourceID;
		string ResourceName;
		string ResourceType;
		string ResourceLink;

	public:
		Resource();
		Resource(int RID, string RName, string RType, string RLink);
		void addResource();
    	void displayResource();
    	void manageResource(Resource *RE1);
       	~Resource();
 };
