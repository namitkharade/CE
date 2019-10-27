#include<iostream>
#include<string.h>
using namespace std;

class book
{
private:
	char *publisher;
	int len;
public:
	char *author,*title;
	float *price;
	int *stock;
	
	book()
	{}
	
	book(const char *tit,const char *aut,const char *pub, float pr,int st)
	{
		len=strlen(tit);
		title=new char[len+1];
		strcpy(title,tit);
		
		len=strlen(aut);
		author=new char[len+1];
		strcpy(author,aut);
		
		len=strlen(pub);
		publisher=new char[len+1];
		strcpy(publisher,pub);
		
		price=new float;
		*price=pr;
		
		stock=new int;
		*stock=st;
	}
	
	void display()
	{
		cout<<"\n"<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<*price<<"\t"<<*stock;	
	}	
};

int main()
{
	char tit1[50],t[50],aut1[50],a[50],pub1[50],ans ;
	float pr1,*p=0,total=0;
	int st1,*s=0,flag=0,c=0,n,i;
	cout<<"\nEnter how many books entry u want: ";
	cin>>n;
	book *b=new book[n];
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter the title: ";
		cin>>tit1;
		cout<<"\nEnter the author: ";
		cin>>aut1;
		cout<<"\nEnter the publisher: ";
		cin>>pub1;
		cout<<"\nEnter the price: ";
		cin>>pr1;
		cout<<"\nEnter the stock: ";
		cin>>st1;
		b[i]=book(tit1,aut1,pub1,pr1,st1);
	}
	do
	{
	for(i=0;i<n;i++)
	{
		b[i].display();
	}
	
	cout<<"\n*Search*";
	cout<<"\nEnter the title and author: ";
	cin>>t;
	cin>>a;
	for(i=0;i<n;i++)
	{
		if(strcmp(b[i].title,t)==0 && strcmp(b[i].author,a==0))
		{
			p=b[i].price;
			s=b[i].stock;
			flag=1;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		cout<<"\nBook found";
		yo:
		cout<<"\nEnter the number of copies: ";
		cin>>c;
		if(c>st1)
		{
			cout<<"\nCopies not available";
			goto yo;
		}
		total=c*pr1;
		cout<<"\nTotal amount: "<<total;	
	}
	else
	{
		cout<<"\nBook not available";
	}
	cout<<"\n\nSearch again?: ";
	cin>>ans;
	}while(ans=='Y'||ans=='y');
	return 0;
}
