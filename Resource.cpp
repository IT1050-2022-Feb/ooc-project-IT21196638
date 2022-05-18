 Resource::Resource()
 {
 	ResourceID=0;
	ResourceName="";
	ResourceType="";
	ResourceLink="";
 }
 
 Resource::Resource(int RID, string RName, string RType, string RLink)
 {
 	ResourceID=RID;
	ResourceName=RName;
	ResourceType=RType;
	ResourceLink=RLink;
 }
 
void Resource::displayResource()
{
   	cout << endl;
    cout << "~~~~~Resource~~~~~" << endl;
    cout << " Resource ID =" << ResourceID << endl;
    cout << " Resource Name =" << ResourceName << endl;
    cout << " Resource Type = " << ResourceType << endl;
    cout << " Resource Link = " << ResourceLink << endl;
}

void manageResource(Resource *RE1)
{	
}

void addResource()
{
}
