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

class salariedEmployee: protected Employee
{
	private: float weeklysalary;
	
	public:	
	salariedEmployee()
	{
		weeklysalary=0;
		
	}
	salariedEmployee(string fn,string ln,long sn,float ws):Employee(fn,ln,sn)
	{
		weeklysalary=ws;
	}
	void earning()
	{
		float earning=weeklysalary;
		cout << fixed << setprecision(2) <<"\nकमाई:"<< earning<<endl;
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
	string fn,ln;long ssn;float ws;
	cout<<"\nOnly 1 SALARIED EMPLOYEE PROGRAM";
	cout<<"\nEnter firstname, lastname, ssn, & weekly Salary\n";
	getline(cin,fn);
	getline(cin,ln);
	cin>>ssn>>ws;
	
	salariedEmployee s(fn,ln,ssn,ws);
	s.printDetails();
	return 0;
}
