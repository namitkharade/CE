#include<iostream>
#include<stack>
#include<string.h>
#include<stdlib.h>
using namespace std;

stack<int> read();
stack<int> add(stack<int>&s1,stack<int>&s2);
stack<int> display(stack<int>&s1);

stack<int> read()
{
	char a[10];
	stack<int> s;
	cout<<"\nEnter binary numbers: ";
	cin>>a;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='1')
			s.push(1);
		else if(a[i]=='0')
			s.push(0);
	}
	return s;
}

stack<int> display(stack<int>&s)
{
	while(!s.empty())
	{
		cout<<s.top();
		s.pop();
	}
}

stack<int> add(stack<int>&s1,stack<int>&s2)
{
	int bit1,bit2,sum,carry;
	bit1=bit2=sum=carry=0;
	stack <int> s;
	while(!s1.empty()||!s2.empty())
	{
		if(!s1.empty())
		{
			bit1=s1.top();
			s1.pop();
		}
		if(!s2.empty())
		{
			bit2=s2.top();
			s2.pop();		
		}	
		sum=(bit1+bit2+carry)%2;
		carry=(bit1+bit2+carry)/2;
		s.push(sum);
	}
	if(carry==1)
	{
		s.push(1);
		return s;
	}
}

int main()
{
	stack <int> s1,s2,s3;
	int ch;
	char y;
	do
	{
		cout<<"\n\n\t\t\tSTACK MENU";
		cout<<"\n1.ADITION OF BINARY NUMBERS";
		cout<<"\n2.QUIT";
		cout<<"\n\nENTER YOUR CHOICE ==> ";
		cin>>ch;

		switch(ch)
		{
			case 1:
					s1=read();
					s2=read();
					cout<<"\n ADDITION OF BINARY NUMBERS ==> ";
					s3=add(s1,s2);
					display(s3);
					break;

			case 2:
					exit(0);

		    default:
					cout<<"\n\nWRONG CHOICE... TRY AGAIN ";
	    }

		cout<<"\n\nDO YOU WISH TO CONTINUE ? (Y/y)";
		cin>>y;

	}while(y=='Y'||y=='y');

	return 0;
}
