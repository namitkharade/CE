#include<iostream>
#include<list>
using namespace std;

class queue
{
public:
	int a;
	list<int> q;
	list<int>::iterator itr;
	
	void push();
	void pop_stack();
	void pop_queue();
	void display();
};

void queue::push()
{
	cout<<"\nEnter a number: ";
	cin>>a;
	q.push_back(a);
}

void queue::pop_stack()
{
	itr=q.end();
	itr--;
	q.pop_back();
	cout<<"\nDeleted number is: "<<*itr;
}

void queue::pop_queue()
{
	itr=q.begin();
	q.pop_front();
	cout<<"\nDeleted number is: "<<*itr;
}

void queue::display()
{
	cout<<"\nElements: ";
	for(itr=q.begin();itr!=q.end();itr++)
	{
		cout<<*itr;
	}
}

int main()
{
	int ch;
	char ans;
	queue obj;
	do{
		cout<<"\n1.Add\n2.Delete from stack\n3.Delete from queue\n4.Display";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:obj.push();
			break;
			case 2:obj.pop_stack();
			break;
			case 3:obj.pop_queue();
			break;
			case 4:obj.display();
			break;
			default:cout<<"\n*Invalid input*";
			break;
		}
	cout<<"\nDo you want to continue??: ";
	cin>>ans;
	}while(ans=='Y'||ans=='y');
	return 0;
}

