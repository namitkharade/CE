#include<iostream>
#include<string.h>
using namespace std;

class info
{
private:	
	int count,age;
	char city[20];
	char ans;
	double salary;
	
public:
	void get_age();
	void get_salary();
	void get_city();
	void get_vehicle();
	void display();	
};

void info::get_age()
{
	label1:
	try
	{
		cout<<"\nEnter your age: ";
		cin>>age;
		if(age<18||age>55)
		{
			throw 1;
		}
	}
	catch (int a)
	{
		cout<<"Age is invalid:";
		goto label1;
	}
}

void info::get_salary()
{
	label2:
	try
	{
		cout<<"\nEnter your salary: ";
		cin>>salary;
		if(age>5000&&age<100000)
		{
			throw 1;
		}
	}
	catch (int b)
	{
		cout<<"Salary is not in the range";
		goto label2;
	}
}

void info::get_city()
{
	label3:
	try
	{
		cout<<"\nEnter your city: ";
		cin>>city;
		if(strcmp(city,"Pune")==1||strcmp(city,"Mumbai")==1||strcmp(city,"Chennai")==1||strcmp(city,"Bangalore")==1)
		{
			throw 1;
		}
	}
	catch (int c)
	{
		cout<<"City is invalid";
		goto label3;
	}
}

void info::get_vehicle()
{
	try
	{
		cout<<"\nDo you own a Car?:";
		cin>>ans;
		if(ans=='Y'||ans=='y')
		{
			count=1;
		}
		else{
			throw 1;
		}
	}
	catch (int c)
	{
		cout<<"User has no car";
	}
}

void info::display()
{
	cout<<"\n\n\n****DETAILS***"<<endl;
	cout<<age<<endl;
	cout<<salary<<endl;
	//cout<<city<<endl;
	if(count==1)
	{
		cout<<"\nHas a 4-wheeler";
	}
	else{
		cout<<"\nNo 4-wheeler";
	}
}

int main()
{
	info E;
	E.get_age();
	E.get_salary();
	//E.get_city();
	E.get_vehicle();
	E.display();
	return 0;
}
