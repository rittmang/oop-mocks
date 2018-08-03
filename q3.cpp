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
#include<iomanip>//for precision
using namespace std;
class BankAccount
{
	private:
	string deps_name, type;
	long ac_no;
	float amount;//std::cout << std::fixed << std::setprecision(2) << d; in display
	
	public:
	BankAccount(string dn, string t, long acn, float amt)
	{
		if(dn!="" && t!="" && acn>0 && amt>=0)
		{
			deps_name=dn;
			type=t;
			ac_no=acn;
			amount=amt;		
			cout<<t<<" account created successfully for "<<deps_name;		
		}
		
		else
		{
			cout<<"\nRe-enter Correct Details.";
		}
		cout<<"\n___________________________***___***_____________________________\n\n\n\n";
	}
	
	void deposit(float d);
	void withdraw(float w);
	void display();
};
void BankAccount::deposit(float d)
{
	amount+=d;
	
}

void BankAccount::withdraw(float w)
{
	if((amount-w)>=0)
		amount-=w;
	
	else
	cout<<"Insufficient Funds available! Add more money to withdraw.";
}
void BankAccount::display()
{
	cout<<"\nUser Name:"<<deps_name;
	cout<<"\nUpdated amount:";
	cout << fixed << setprecision(2) << amount;
}
int main()
{
	string nm,ty;long acn;float bl;int rno=0;//refresh number to keep track of record in terminal
	cout<<"\n*****************Linux Development Finance Corporation (LDFC) BANK***********************";
	cout<<"\nEnter Name:";getline(cin,nm);
	cout<<"\nEnter A/c No:";cin>>acn;
	cout<<"\nEnter A/c Type (Savings/Current):";cin.ignore(); getline(cin,ty);
	cout<<"\nEnter Balance Amount:";cin>>bl;
	
	BankAccount ba(nm,ty,acn,bl);
	cout<<"\n***OPERATIONS (choose digit):***\t\t"<<"Refresh Number";
	cout<<"\n_________________________________________________________________\n";
	int choice=0;
	do
	{
		cout<<"\n\t\t\t\t\t\t\t"<<rno<<"\n1.Deposit"<<"\n2.Withdraw"<<"\n3.Display Current"<<"\n0.Exit LDFC\n";
		cin>>choice;
		switch(choice)
		{
			case 1:{cout<<"\nAmount to deposit:";
					float a;
					cin>>a;
					ba.deposit(a);
					ba.display();
					break;
					}
					
			case 2:{cout<<"\nAmount to withdraw:";
					float a;
					cin>>a;
					ba.withdraw(a);
					ba.display();
					break;
					}
			case 3:{
					ba.display();
					break;
					}
					
			case 0:break;
					
		}
	cout<<"\n_________________________________________________________________\n";
	rno++;
	}while(choice!=0);
	
	return 0;
	
}
