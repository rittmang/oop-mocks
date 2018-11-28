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
using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
		int seconds;
	
	public:
		
		//Time operator <>(Time);
		
		Time()
		{
			hours=0;
			minutes=0;
			seconds=0;
		}
		
		Time(int h,int m,int s)
		{	
			hours=h;
			minutes=m;
			seconds=s;
			
			while(seconds>59||minutes>59)
			{
				if(seconds>=60)
				{
					seconds-=60;
					minutes++;
				}
				if(minutes>=60)
				{
					minutes-=60;
					hours++;
				}
			}
			cout<<"\nTime set as "<<hours<<":"<<minutes<<":"<<seconds<<"\n";	
		}
		
		Time operator + (Time t2)
		{
			Time temp;
			temp.hours=hours+t2.hours;
			temp.minutes=minutes+t2.minutes;
			temp.seconds=seconds+t2.seconds;
			
			if(temp.seconds>60){temp.seconds-=60;temp.minutes++;}
			if(temp.minutes>60){temp.minutes-=60;temp.hours++;}
			
			return temp;
		}
		
		Time operator - (Time t2)
		{
			Time temp;
			
			if(seconds<t2.seconds)
				{seconds+=60;	minutes--;}
			if(minutes<t2.minutes)
				{minutes+=60;	hours--;}
			if(t2.hours<=24 && hours>=1 && t2.hours>hours)
				temp.hours=hours+12-(t2.hours-12);
			else
				temp.hours=hours-t2.hours;
			
			temp.minutes=minutes-t2.minutes;
			temp.seconds=seconds-t2.seconds;

			if (temp.hours<0) 
				temp.hours+=24;//change day to previous day

			return temp;
		}
		
		bool operator != (Time t2)//not equal to operator; same as <>
		{
			if(hours==t2.hours && minutes==t2.minutes && seconds==t2.seconds)
				return false;
				
			return true;	
		}
		void display();					
};
	
	void Time::display()
	{
		cout<<hours<<":"<<minutes<<":"<<seconds;//technically, wrong format since days not taken into account, thus hours can exceed 24;
	}
		
		
	int main()
	{
		int h,m,s;
		Time t3,t4;
		
		
		cout<<"\n*********************TIME ARITHMETIC HH/MM/SS*************************";
		cout<<"\nEnter Time 1:\n";
		cin>>h>>m>>s;
		Time t1(h,m,s);
		cout<<"\nEnter Time 2:\n";
		cin>>h>>m>>s;
		Time t2(h,m,s);
		
		t3=t1+t2;
		cout<<"\nAddition is";
		t3.display();
		
		t4=t1-t2;
		cout<<"\nSubtraction is";
		t4.display();
		bool var=t1!=t2;	//original question on operator '<>' 
		cout<<"\nWhether Time1 != Time2 ? : "<<var;
		return 0;	

	}

