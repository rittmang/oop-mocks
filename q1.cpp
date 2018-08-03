#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
class StudentDB
{
	private:
	string name,clas,bloodgroup,address;
	int roll,div,dt,mnth,yr;
	long tel,driveli;
	
	public:
	StudentDB()
	{
		cout<<"\nStudent Database Set using Default Values";
		name="";clas="";bloodgroup="";address="";
		roll=div=dt=mnth=yr=0;
		tel=driveli=0;
	}
	
	StudentDB(string nm, int rn,string cl,int di,int d,int m, int y,string bg,string add, long t, long dr)
	{
		
		if((d>31 || d<0) || (m>12||m<0) || (y<0 || y>2018))
		{
			cout<<"\nInvalid DOB. Goodbye!";exit(0);
		}
		if(std::to_string(t).length()!=10 | (std::to_string(t)[0]!='7' && std::to_string(t)[0]!='8' && std::to_string(t)[0]!='9' ))
		{
			cout<<"\nInvalid Indian Number. Goodbye!";exit(0);
		}
		cout<<"\nStudent Database Set using Parameter Values";
		name=nm;
		roll=rn;
		clas=cl;
		div=di;
		dt=d;mnth=m;yr=y;
		bloodgroup=bg;
		address=add;
		tel=t;
		driveli=dr;
	}
	
	void printDetails();
	~StudentDB();
	
	
};

void StudentDB::printDetails()
{
	cout<<"\nDETAILS OF STUDENT:";
	cout<<"\nName:"<<name;
	cout<<"\nRoll Number:"<<roll;
	cout<<"\nClass:"<<clas;
	cout<<"\nDivision:"<<div;
	cout<<"\nDOB:"<<dt<<"/"<<mnth<<"/"<<yr;
	cout<<"\nBlood Group:"<<bloodgroup;
	cout<<"\nAddress:"<<address;
	cout<<"\nTelephone:"<<tel;
	cout<<"\nDriving License Number:"<<driveli;	
	
}
	StudentDB::~StudentDB()
	{
		cout<<"\n\n\n\n\nStudent Database Destroyed\n\n";
	}
int main()
{
	
	cout<<"*****************************STUDENT DATABASE**************************************";
	cout<<"Input Name, Roll, Class, Division, Date, Month, Year,Blood Group, Address, Telephone, Driving License Number:\n";
	string nam,cla,bloodgrou,addres;
	int rol,di,d,mnt,y;
	long tl,drivel;
	
	getline(cin,nam);//to input string with whitespaces
	cin>>rol;
	
	cin.ignore();//to ignore previous encountered whitespace in cin
	getline(cin,cla);//start new string input with whitespaces, delimiter is newLine
	cin>>di>>d>>mnt>>y>>bloodgrou;
	
	cin.ignore();//use between a cin and getline, not the other way, nor between 2 getline() 
	getline(cin,addres);
	cin>>tl>>drivel;;
	StudentDB sdb(nam,rol,cla,di,d,mnt,y,bloodgrou,addres,tl,drivel);
	sdb.printDetails();
	return 0;
	
}

