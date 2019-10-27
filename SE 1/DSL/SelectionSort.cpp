#include <iostream>
using namespace std;

class sort
{
public:
	void selection();
	void bubble();
};

void sort::selection()
{
	int n, min, temp;
	cout<<"\nEnter no. of elements to sort: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the percentage: ";
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++)
	{
		min = i;
		for(int j=i+1; j<n; j++)
			if(a[j]<a[min])
				min = j;
		temp = a[min];
		a[min] = a[i];
		a[i] = temp;
	}
	cout<<"Sorted Array: ";
	for(int i=0; i<n; i++)
		cout<<a[i]<<" ";
	
	cout<<"\nTop Five: ";
	for(int i=n-1;i>=n-5;i--)
	{
		cout<<a[i]<<endl;
	}
}

void sort::bubble()
{
	int n;
	cout<<"\nEnter no. of elements to sort: ";
	cin>>n;
	int a[n];
	cout<<"\nEnter the percentage: ";
	for(int i=0; i<n ;i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	cout<<"\nAfter Sorting: "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\nTop Five: ";
	for(int i=n-1;i>=n-5;i--)
	{
		cout<<a[i]<<endl;
	}
}

int main()
{
	int ch;
	char ans;
	sort s;
	do
	{
		cout<<"\n1.Selection sort\n2.Bubble sort";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: s.selection();
			break;
			case 2: s.bubble();
			break;
			default: cout<<"\nInvalid Input";
		}
		cout<<"\nDo you want to continue?: ";
		cin>>ans;
	}while(ans=='Y'||ans=='y');
	return 0;
}
