#include <iostream>
#include <cstdlib>
using namespace std;

int i, j;

void read_matrix(int m[10][10], int row, int col)
{
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			cout<<"A["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
}

void display_matrix(int m[10][10], int row, int col)
{
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
			cout<<m[i][j]<<"\t";
		cout<<endl;
	}
}

void saddle(int m[10][10], int row, int col)
{
	int k,c,min;
	for(i=0; i<row; i++)
	{
		min=m[i][0];
		for(j=0; j<col; j++)
		{
			if(min>m[i][j])
			{
				min=min>m[i][j];
				c=j;
			}
			for(k=0; k<row; k++)
			{
				if(min<m[k][c])
				{
					break;
				}
			}
		}
	}
	if(k==row)
	{
		cout<<"\nValue of Saddle point: "<<min;
	}
	else
	{
		cout<<"\nSaddle point is not present";
	}
}

int main()
{
	int ch, m1[10][10],row1,col1;
	x:cout<<"In square matrix, row = column.\n(Note that the row and column must be less than 10)\nEnter value: ";
	cin>>row1;
	if(row1>10 || row1<1)
		goto x;
	col1 = row1;
	cout<<"\nMatrix : \nRow = "<<row1<<", "<<"Column = "<<col1<<endl;
	cout<<"Enter "<<row1*col1<<" numbers for first matrix"<<endl;
	read_matrix(m1, row1, col1);
	cout<<"\nHere is the matrix: "<<endl;
	display_matrix(m1, row1, col1);
	saddle(m1, row1, col1);
	return 0;
}
