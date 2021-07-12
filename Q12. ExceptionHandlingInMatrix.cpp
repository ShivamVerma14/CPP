/* Rewrite Matrix class of Q8 with exception handling. 
  Exceptions should be thrown by the functions if matrices passed to them are incompatible and handled by main() function
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
class Matrix
{
	private:
		int matrix1[5][5], matrix2[5][5];
		int m, n, p, q;
	public:
		void InputVal();
		void ShowMat();
		void Transpose();
		void SumMatrices();
		void MulMatrices();
};
void Matrix::InputVal()
{
	cout<<"Enter the Rows and Column of Matrix 1: ";
	cin>>m>>n;
	cout<<"Enter the Elements in the Matrix..."<<endl;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        cin>>matrix1[i][j];
	system("cls");
	cout<<"Enter the Rows and Column of Matrix 2: ";
	cin>>p>>q;
	cout<<"Enter the Elements in the Matrix..."<<endl;
	for(int i=0; i<p; i++)
	    for(int j=0; j<q; j++)
	        cin>>matrix2[i][j];
	system("cls");
}
void Matrix::ShowMat()
{
	cout<<"\tMatrix 1..."<<endl;
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	        cout<<matrix1[i][j]<<" ";
	    cout<<endl;
    }
    cout<<"\tMatrix 2..."<<endl;
	for(int i=0; i<p; i++)
	{
	    for(int j=0; j<q; j++)
	        cout<<matrix2[i][j]<<" ";
	    cout<<endl;
    }
}
void Matrix::SumMatrices()
{
	int result[5][5];
	try
	{
		if(m==p&&n==q)
    	{
    		for(int i=0; i<m; i++)
    		    for(int j=0; j<n; j++)
    		        result[i][j]=matrix1[i][j]+matrix2[i][j];
    		ShowMat();
    		cout<<"The Resultant Matrix is..."<<endl;
        	for(int i=0; i<m; i++)
        	{
        	    for(int j=0; j<n; j++)
        	        cout<<result[i][j]<<" ";
        	    cout<<endl;
            }
    	}
    	else
    	    throw "Invalid";
	}
	catch(const char *s)
	{
		cout<<"Matrix can't be added..."<<endl;
	}
}
void Matrix::Transpose()
{
	ShowMat();
	cout<<"\tTranspose of Matrix 1..."<<endl;
	for(int i=0; i<m; i++)
	{
	    for(int j=0; j<n; j++)
	        cout<<matrix1[j][i]<<" ";
	    cout<<endl;
    }
    cout<<"\tTranspose of Matrix 2..."<<endl;
	for(int i=0; i<p; i++)
	{
	    for(int j=0; j<q; j++)
	        cout<<matrix2[j][i]<<" ";
	    cout<<endl;
    }
}
void Matrix::MulMatrices()
{
	int product[5][5];
	for(int i=0; i<m; i++)
	    for(int j=0; j<q; j++)
	        product[i][j]=0;
	try
	{
    	if(n==p)
    	{
    		ShowMat();
			for(int i=0; i<m; i++)
     		    for(int j=0; j<q; j++)
    		        for(int k=0; k<n; k++)
    		            product[i][j]+=matrix1[i][k]*matrix2[k][j];
    		cout<<"The Resultant Matrix is..."<<endl;
    		for(int i=0; i<m; i++)
        	{
    	        for(int j=0; j<q; j++)
        	        cout<<product[i][j]<<" ";
        	    cout<<endl;
            }
    	}
    	else
    	    throw "Invalid";
	}
	catch(const char *s)
	{
		cout<<"Matrix can't be multiplied..."<<endl;
	}
}
int main()
{
	Matrix M;
	char choice1, choice2;
	M.InputVal();
	do
	{
		cout<<"\tMatrix Calculations"<<endl;
		cout<<"1. Sum of two Matrices."<<endl;
		cout<<"2. Product of two Matrices."<<endl;
		cout<<"3. Transpose of Two Matrices."<<endl;
		cout<<"Choice: ";
		cin>>choice1;
		system("cls");
		switch(choice1)
		{
			case '1': M.SumMatrices();
			          break;
			case '2': M.MulMatrices();
			          break;
			case '3': M.Transpose();
			          break;
			default : cout<<"Wrong choice of Option!!!";
			          exit(0);
		}
		cout<<"Do you want to Operate more (Y/N): ";
		cin>>choice2;
		system("cls");
	}while(choice2=='y'||choice2=='Y');
	return 0;
}
