#include<iostream>
using namespace std;
template<class T>

void selection(T a[],int n)
{
	T temp;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"\nSorted Elements: ";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	int i,ch,n;
	char ans;
	do{
	cout<<"\n1.Integer array\n2.Float array";
	cout<<"\nEnter yor choice: ";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			int a[30];
			cout<<"\nEnter the size of array: ";
			cin>>n;
			cout<<"\nEnter the array of elements: ";
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			selection(a,n);
			break;
			
		case 2: float x[30];
			cout<<"\nEnter the size of array: ";
			cin>>n;
			cout<<"\nEnter the array of elements: ";
			for(i=0;i<n;i++)
			{
				cin>>x[i];
			}
			selection(x,n);
			break;
			
		default: cout<<"\n**Invalid Input**";
	}
	cout<<"Continue?: ";
	cin>>ans;
	}while(ans=='Y'||ans=='y');
	return 0;
}

