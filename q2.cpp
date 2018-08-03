#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private:
	string name,department,position;
	int idNumber;
	
	public:
	Employee()
	{
		cout<<"DConstr";
		name=department=position="";
		idNumber=0;	
	}
	
	Employee(string nm,string dep, string pos, int id)
	{
		cout<<"PConstr";
		name=nm;
		department=dep;
		position=pos;
		idNumber=id;
	}
	
	void display();
};
void Employee::display()
{	
	cout<<"\n**********EMPLOYEE BABA************";
	cout<<"\n\tNAME=\t"<<name;
	cout<<"\nID NUMBER=\t"<<idNumber;
	cout<<"\nDEPARTMENT=\t"<<department;
	cout<<"\nPOSITION=\t"<<position;
	cout<<"\n*************************************\n";
}

int main()
{
	string nm,dep,pos;int id;
	cout<<"\nEnter Employee details:";
	cout<<"\nname=";getline(cin,nm);
	cout<<"\nidNumber=";cin>>id;cin.ignore();
	cout<<"\ndept.=";getline(cin,dep);
	cout<<"\nposition=";getline(cin,pos);
	
	
	Employee e(nm,dep,pos,id);
	e.display();
	
	return 0;
}

