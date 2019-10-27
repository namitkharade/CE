#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main()
{
	char name[20];
	cout<<"\nEnter the name of file: ";
	cin>>name;
	ofstream fout;
	fout.open(name);
	if(!fout)
	{
		cout<<"\nError opening file";
	}
	
	cout<<"\nWriting to file";
	cout<<"\nEnd with Ctrl+D";
	string data;
	while(getline(cin,data))
	{
		if(data=="^D")
		{
			fout<<data;
			exit(1);
		}
	}
	fout.close();
	ifstream fin;
	fin.open(name);
	if(!fin)
	{
		cout<<"\nError opening file";
	}
	while(fin)
	{
		getline(fin,data);
		cout<<data;
	}
	fout.close();
	return 0;
}
