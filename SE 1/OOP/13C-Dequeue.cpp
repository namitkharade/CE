#include<iostream>
#include<deque>
using namespace std;

class dequeue
{
public:
	int a;
	deque<int> q;
	deque<int>::iterator itr;
	
	void push_front();
	void push_back();
	void pop_front();
	void pop_back();
	void display();
};

void dequeue::push_back()
{
	cout<<"\nEnter the number: ";
	cin>>a;
	q.push_back(a);
}

void dequeue::push_front()
{
	cout<<"\nEnter the number: ";
	cin>>a;
	q.push_front(a);
}

void dequeue::pop_front()
{
	itr=q.begin();
	itr++;
	q.pop_front();
	cout<<"\nDeleted element is: "<<*itr;
}

void dequeue::pop_back()
{
	itr=q.end();
	itr--;
	q.pop_back();
	cout<<"\nDeleted element is: "<<*itr;
}

void dequeue::display()
{
	for(itr=q.begin();itr!=q.end();itr++)
	{
		cout<<*itr;
	}
}

int main()
{
	int ch;
	char ans;
	dequeue obj;
	do
	{
		cout<<"1.Push Front\n2.Pust Back\n3.Pop Front\n4.Pop Back\n5.Display";
		cout<<"\nEnter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1: obj.push_front();
			break;
			case 2: obj.push_back();
			break;
			case 3: obj.pop_front();
			break;
			case 4: obj.pop_back();
			break;y
			case 5: obj.display();
			break;
			default:cout<<"*\nInvalid input*";
		}
		cout<<"\nDo u want to continue?: ";
		cin>>ans;
	}while(ans=='Y'||ans=='y');
}
