#include<iostream>
using namespace std;

class complex
{
public:
	float real,imag;
	complex()
	{
		real=0;
		imag=0;
	}
	
	complex operator+(complex c)
	{
		complex temp;
		temp.real=real+(c.real);
		temp.imag=imag+(c.imag);
		return temp;
    }
	
	complex operator*(complex c)
	{
		complex temp;
		temp.real=(real*c.real)-(imag*c.imag);
		temp.imag=(real*c.imag)+(imag*c.real);
		return temp;
    }
	
	friend istream &operator>>(istream&in,complex&c)
	{
		cin>>c.real>>c.imag;
		return in;
	}
	
	friend ostream &operator<<(ostream&out,complex&c)
	{
		cout<<c.real<<"+"<<c.imag<<"i";
		return out;
	}	
}; 

int main()
{
	complex c1,c2,result;
	cout<<"\nInitial value of c1:";
	cout<<c1;
	cout<<"\nInitial value of c2:";
	cout<<c2;
	cout<<"\nEnter the real and imaginary part of c1: ";
	cin>>c1.real>>c1.imag;
	cout<<"\nEnter the real and imaginary part of c2: ";
	cin>>c2.real>>c2.imag;
	cout<<"\nAddition: ";
	result=c1+c2;
	cout<<result;
	cout<<"\nMultiplication: ";
	result=c1*c2;
	cout<<result;
	return 0;
}
