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
using namespace std;

class Distance
{
	private:
		int km,m,cm;
		
	public:
		Distance()
		{
			km=0;m=0;cm=0;
		}
		
		Distance(int k,int m1,int c)
		{
			if(k<0 || m1<0 || c<0){cout<<"\nInvalid Distance entered.";exit(0);}
			
			while(m1>1000 || c>100)
			{
				if(c>=100){c-=100;m1++;}
				
				if(m1>=1000){m1-=1000;k++;}
				
				
			}
			
			cout<<"\nDistance Set As:"<<k<<" km, "<<m1<<" m & "<<c<<"cm.";
			km=k;
			m=m1;
			cm=c;
		}
		
		void display();
		
		Distance operator + (Distance b)
		{
			Distance t;
			t.cm=cm+b.cm;
			t.m=m+b.m;
			t.km=km+b.km;
			if(t.cm>100){t.cm-=100;	t.m++;}
			if(t.m>1000){t.m-=100;	t.km++;}
			
			return t;
						
		}
		
		Distance operator - (Distance b)
		{
			Distance t;
			t.cm=cm-b.cm;
			t.m=m-b.m;
			t.km=km-b.km;
			if(t.km<0){cout<<"Invalid difference";exit(0);}
			if(t.m<0 && t.km>0){t.m+=1000;t.km--;}
			if(t.cm<0 && t.m>0){t.cm+=100;t.m--;}
			
			return t;
		}
};
void Distance::display()
{
	cout<<"Distance Result:"<<km<<" km, "<<m<<" m & "<<cm<<"cm.\n\n";
}
int main()
{
	int k1,m1,c1,k2,m2,c2;
	cout<<"\nEnter 1st distance in km,m,cm:\n";
	cin>>k1>>m1>>c1;
	cout<<"\nEnter 2nd distance in km,m,cm:\n";
	cin>>k2>>m2>>c2;
	
	Distance d1(k1,m1,c1);Distance d2(k2,m2,c2);
	Distance d3=d1+d2;
	cout<<"\nAddition ";d3.display();
	Distance d4=d1-d2;
	cout<<"\nSubtraction ";d4.display();
	return 0;
}
