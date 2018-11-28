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

#include<math.h>

class Complex
{
	private: float real, imaginary;

	public:
	Complex()
	{
		real=0.0;
		imaginary=0.0;
	}
	void getComplex()
	{
		cout<<"Input real number=";
		cin>>real;

		cout<<"Input imaginary number=";
		cin>>imaginary;
	}
	void printComplex()
	{

		cout<<"Complex Number=\t"<<real<<" + "<<imaginary<<"i";

	}
	
	//friend istream& operator >> (istream& , Complex&);

	//friend ostream& operator << (ostream& , Complex& );

	/*void add(Complex a, Complex b)
	{
		real=a.real+b.real;
		imaginary=a.imaginary+b.imaginary;
	}
	void subtract(Complex a, Complex b)
		{
			real=a.real-b.real;
			imaginary=a.imaginary-b.imaginary;
		}
	void multiply(Complex a, Complex b)
		{
			real=a.real*b.real-a.imaginary*b.imaginary;
			imaginary=a.imaginary*b.real+b.imaginary*a.real;
		}
	void divide(Complex a, Complex b)
		{
			real=(a.real*b.real+a.imaginary*b.imaginary)/(pow(b.real,2)+pow(b.imaginary,2));
			imaginary=(a.imaginary*b.real-a.real*b.imaginary)/(pow(b.real,2)+pow(b.imaginary,2));
		}*/
	Complex operator + (Complex b)
	{
		Complex temp;
		temp.real=real+b.real;
		temp.imaginary=imaginary+b.imaginary;
		return temp;
	}
	Complex operator * (Complex b)
		{
			Complex temp;
			temp.real=real*b.real-imaginary*b.imaginary;
			temp.imaginary=imaginary*b.real+b.imaginary*real;
			return temp;
		}

};
/*istream& operator >> (istream&  input , Complex& c)
{
	input>>c.real>>c.imaginary;
	return input;
}
ostream& operator << (ostream& output, Complex& c)
{
	output<<c.real<<" +"<<c.imaginary<<"i";
	return output;
}*/
int main()
	{
		
	Complex c1,c2,c3;
	
	c1.getComplex();
	c2.getComplex();
	
	int choice=0;
	do
	{
	cout<<"\n*******************";
	cout<<"\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n0.Exit\n";
	cin>>choice;
	switch(choice)
	{
	case 1: c3 = c1+c2;//Overloading + to add complex numbers
			//c3.add(c1,c2);
			cout<<"Addition result=";
				//Overloading << to print Complex number
			c3.printComplex();
			break;

	case 2: //c3.subtract(c1,c2);
			cout<<"[DISABLED-FBYAUTHOR]Subtraction result=";
			//c3.printComplex();
			break;

	case 3: c3=c1*c2;
			cout<<"Multiplication result=";
			
			c3.printComplex();
			break;

	case 4: //c3.divide(c1,c2);
			cout<<"[DISABLED-FBYAUTHOR]Division result=";
			//c3.printComplex();
			break;

	default:break;
	}
	}while(choice!=0);
}


