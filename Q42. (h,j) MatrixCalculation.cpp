/* Array Calculation
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
void inputMatrix(int [5][5], int &, int &);
void sumrows(int [5][5], int , int , int );
void sumcolumns(int [5][5], int , int , int );
void addition(int [5][5], int [5][5], int , int );
void subtraction(int [5][5], int [5][5], int , int );
void division(int [5][5], int [5][5], int , int );
using namespace std;
int main()
{
	int a[5][5], b[5][5], m, n, p, q, row, column;
	char choice1, choice2;
	do
	{
		cout<<"\t Matrix Calculation"<<endl;
		cout<<"1. Sum of rows of the Matrix"<<endl;
    	cout<<"2. Sum of columns of the Matrix"<<endl;
    	cout<<"3. Addition of two Matrices"<<endl;
    	cout<<"4. Subtraction of two Matrices"<<endl;
    	cout<<"5. Division of Two Matrices"<<endl;
    	cout<<"Option :";
    	cin>>choice1;
    	system("cls");
		switch(choice1)
		{
			case '1': inputMatrix(a, m, n);
			          cout<<"Enter the row number to give out the sum: ";
			          cin>>row;
			          sumrows(a, m, n, row);
			          break;
			case '2': inputMatrix(a, m, n);
			          cout<<"Enter the column number to give out the sum: ";
			          cin>>column;
			          sumcolumns(a, m, n, column);
			          break;
			case '3': inputMatrix(a, m, n);
			          inputMatrix(b, p, q);
			          if(m==p&&n==q)
			              addition(a, b, m, n);
			          else
			              cout<<"Addition, Not Possible...";
			          break;
			case '4': inputMatrix(a, m, n);
			          inputMatrix(b, p, q);
			          if(m==p&&n==q)
			              subtraction(a, b, m, n);
			          else
			              cout<<"Subtraction, Not Possible...";
			          break;
			case '5': inputMatrix(a, m, n);
			          inputMatrix(b, p, q);
			          if(m==p&&n==q)
			              division(a, b, m, n);
			          else
			              cout<<"Division, Not Possible...";
			          break;
			default : cout<<"Wrong choice of option!!!";
			          exit(0);
		}
		cout<<endl<<"Do you want to operate more (Y/N): ";
		cin>>choice2;
		system("cls");	
	}while(choice2=='y'||choice2=='Y');
	return 0;
}
void inputMatrix(int a[5][5], int &m, int &n)
{
	cout<<"Enter the rows and column of the Matrix: ";
    cin>>m>>n;
    cout<<"Enter the elements of the Matrix..."<<endl;
	for(int i=0; i<m; i++)
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	system("cls");
}
void sumrows(int a[5][5], int m, int n, int row)
{
	int sum=0;
	for(int j=0; j<n; j++)
	    sum+=a[row-1][j];
	cout<<"The sum of the elements of "<<row<<" row is: "<<sum;
}
void sumcolumns(int a[5][5], int m, int n, int column)
{
	int sum=0;
	for(int i=0; i<n; i++)
	    sum+=a[i][column-1];
	cout<<"The sum of the elements of "<<column<<" column is: "<<sum;
}
void addition(int a[5][5], int b[5][5], int m, int n)
{
	int c[5][5];
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        c[i][j]=a[i][j]+b[i][j];
	cout<<"The Resultant Matrix is..."<<endl;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
	        cout<<c[i][j]<<" ";
	    cout<<endl;    
    }
}
void subtraction(int a[5][5], int b[5][5], int m, int n)
{
	int c[5][5];
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        c[i][j]=a[i][j]-b[i][j];
	cout<<"The Resultant Matrix is..."<<endl;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
	        cout<<c[i][j]<<" ";
	    cout<<endl;    
    }
}
void division(int a[5][5], int b[5][5], int m, int n)
{
	int c[5][5];
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	    {
	    	if(b[i][j]==0)
	    	    c[i][j]=-1;
	    	else
	    	    c[i][j]=a[i][j]/b[i][j];
		}    
	cout<<"The Resultant Matrix is..."<<endl;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
	        cout<<c[i][j]<<" ";
	    cout<<endl;    
    }
}
