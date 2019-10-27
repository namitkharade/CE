#include <iostream>
using namespace std;

int n, i;

struct student
{
	int rno;
	string name;
	float mark;
}st[100];

void average()
{
	float sum = 0;
	for(i=0; i<n; i++)
	{
		if(st[i].mark!=-1)
			sum=sum+st[i].mark;
	}
	float avg = sum/n;
	cout<<"Average marks of the class: " <<avg<<endl;
}

void hl_mark()
{
	int i,high,low;
	float a[n];
	high=st[0].mark;
	for(i=0; i<n; i++)
	{
		if(high<st[i].mark)
		{
			high=st[i].mark;
		}
	}
	low=st[0].mark;
	for(i=0; i<n; i++)
	{
		if(st[i].mark!=-1)
		{
			if(st[i].mark<low)
			{
				low=st[i].mark;
			}
		}
	}
	cout<<"Highest mark: "<<high<<endl;
	cout<<"Lowest mark: "<<low<<endl;
}

void max_mark()
{
	float new_arr[n];
	int j=0;
	for(i=0; i<n; i++)
	{
		if(st[i].mark!=-1)
		{
			new_arr[j++] = st[i].mark;
		}
	}
	float prev = new_arr[0];
	int cnt = 1;
	for(int i=1; i<j; i++)
	{
		if(new_arr[i]==prev) cnt++;
		else
		{
			cout<<cnt<<" students scored "<<prev<<" marks."<<endl;
			prev = new_arr[i];
			cnt = 1;
		}
	}
	cout<<cnt<<" students scored "<<prev<<" marks."<<endl;
}

void absent()
{
	int sno = 1;
	cout<<"\nAbsent Students"<<endl;
	cout<<"Sr. No.\tRoll No.\tName of Student"<<endl;
	for(int i=0; i<n; i++)
	{
		if(st[i].mark == -1)
		{
			cout<<sno++<<'\t'<<st[i].rno<<"\t"<<st[i].name<<endl;
		}
	}
}


int main()
{
	int ch;
	char ans;
	cout<<"Enter number of students (If a student was absent, enter -1): ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		cout<<"\nName: ";
		cin>>st[i].name;
		cout<<"Roll no.: ";
		cin>>st[i].rno;
		cout<<"Marks (out of 50): ";
		cin>>st[i].mark;
	}
	cout<<"\nRoll No.\tName of Student\tMarks"<<endl;
	for(i=0; i<n; i++)
		cout<<st[i].rno<<"\t"<<st[i].name<<"\t"<<st[i].mark<<endl;
	do
	{
		cout<<"\n1. Average Marks of the class"<<endl;
		cout<<"2. Highest and lowest marks of the class"<<endl;
		cout<<"3. Marks scored by most of the students"<<endl;
		cout<<"4. Students absent in the test"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case 1:	average();
			break;
			case 2:	hl_mark();
			break;
			case 3:	max_mark();
			break;
			case 4: absent();
			break;
			default: cout<<"Invalid choice"<<endl;
			break;
		}
		cout<<"Do u want to continue?";
		cin>>ans;
	}while(ans=='Y'||ans=='y');
	return 0;
}
