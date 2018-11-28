/*
_________________________________________________
|              DO NOT COPY THIS       			|
|               STUPID PROGRAM.       			|	
|												|
|												|
|			NOT THAT THIS WILL TEACH			| 
|               YOU NOTHING.					|
|												|	
|		© 2018 @rittmang / Ritom Gupta			|
|												|
|				I OWN THIS. ;)					|
|_______________________________________________|
*/
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee
{
	protected:
	string firstname,lastname;
	long ssn;
	
	
	Employee()
	{
		firstname="";lastname="";
		ssn=0;
	}
	Employee(string fn,string ln,long sn)
	{
		firstname=fn;
		lastname=ln;
		ssn=sn;
		
	}
	void printDetails()
	{
		cout<<"\nपहला नाम:"<<firstname<<"\nअंतिम नाम:"<<lastname<<"\nसामाजिक सुरक्षा संख्या:"<<ssn;
	}
};

class CommissionEmployee: protected Employee
{
	private: float commissionrate, grossSales;
	
	public:	
	CommissionEmployee()
	{
		commissionrate=0;
		grossSales=0;
		
	}
	CommissionEmployee(string fn,string ln,long sn,float cr,float gs):Employee(fn,ln,sn)
	{
		commissionrate=cr/100;//commission rate in %
		grossSales=gs;
	}
	void earning()
	{
		float earning=grossSales+grossSales*commissionrate;
		cout<<fixed<<setprecision(2)<<"\nकमाई:"<< earning;
	}
	void printDetails()
	{
		//earning();
		Employee::printDetails();//calling base class function
		//cout<<"\nकमाई:"<<weeklysalary;
		earning();
		
	}
	
};

int main()
{
	string fn,ln;long ssn;float gs,cr;
	cout<<"\nOnly 1 COMMISSION EMPLOYEE PROGRAM";
	cout<<"\nEnter firstname, lastname, ssn,  Gross Sales, Commission Rate(%)\n";
	getline(cin,fn);
	getline(cin,ln);
	cin>>ssn>>gs>>cr;
	
	CommissionEmployee c(fn,ln,ssn,gs,cr);
	c.printDetails();
	return 0;
}
