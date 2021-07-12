/* Matrix Operation
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
void showmatrix(int [5][5], int , int );
void sumele(int [5][5], int , int );
void sumdia(int [5][5], int , int );
void sumnondia(int [5][5], int , int );
void sumuptri(int [5][5], int , int );
void sumlowtri(int [5][5], int , int );
void transpose(int [5][5], int [5][5], int , int );
using namespace std;
int main()
{
	int a[5][5], t[5][5], m, n;
	char choice, ch;
	do
	{
		cout<<"\t Matrix Operation"<<endl;
		cout<<"1. Sum of all Elements"<<endl;
    	cout<<"2. Sum of Diagonal Elements"<<endl;
    	cout<<"3. Sum of Non-diagonal Elements"<<endl;
    	cout<<"4. Sum of Upper Triangle Elements"<<endl;
    	cout<<"5. Sum of lower Triangle Elements"<<endl;
    	cout<<"6. Transpose the Matrix"<<endl;
    	cout<<"Option :";
    	cin>>choice;
    	system("cls");
    	cout<<"Enter the rows and column of the matrix: ";
    	cin>>m>>n;
        cout<<"Enter the elements of the Matrix..."<<endl;
		for(int i=0; i<m; i++)
		    for(int j=0; j<n; j++)
			    cin>>a[i][j];
		system("cls");
		switch(choice)
		{
			case '1': showmatrix(a, m, n);
			          sumele(a, m, n);
			          break;
			case '2': showmatrix(a, m, n);
			          sumdia(a, m, n);
			          break;
			case '3': showmatrix(a, m, n);
			          sumnondia(a, m, n);
			          break;
			case '4': showmatrix(a, m, n);
			          sumuptri(a, m, n);
			          break;
			case '5': showmatrix(a, m, n);
			          sumlowtri(a, m, n);
			          break;
			case '6': showmatrix(a, m, n);
			          transpose(a, t, m, n);
			          showmatrix(t, m, n);
			          break;
			default : cout<<"Wrong choice of option!!!";
			          exit(0);
		}
		cout<<endl<<"Do you want to operate more (Y/N): ";
		cin>>ch;
		system("cls");	
	}while(ch=='y'||ch=='Y');
	return 0;
}
void showmatrix(int a[5][5], int m, int n)
{
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		    cout<<a[i][j]<<" ";
		cout<<endl;
	}
}
void sumele(int a[5][5], int m, int n)
{
	int sum=0;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        sum+=a[i][j];
	cout<<"Sum of all Elements is: "<<sum;
}
void sumdia(int a[5][5], int m, int n)
{
	int sum=0;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        if(i==j)
	            sum+=a[i][j];
	cout<<"Sum of Diagonal Elements is: "<<sum;
}
void sumnondia(int a[5][5], int m, int n)
{
	int sum=0;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        if(!(i==j))
	            sum+=a[i][j];
	cout<<"Sum of Non-Diagonal Elements is: "<<sum;
}
void sumuptri(int a[5][5], int m, int n)
{
	int sum=0;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        if(j>=i)
	            sum+=a[i][j];
	cout<<"Sum of Upper Triangle Elements is: "<<sum;
}
void sumlowtri(int a[5][5], int m, int n)
{
	int sum=0;
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        if(i>=j)
	            sum+=a[i][j];
	cout<<"Sum of Low Triangle Elements is: "<<sum;
}
void transpose(int a[5][5], int t[5][5], int m, int n)
{
	for(int i=0; i<m; i++)
	    for(int j=0; j<n; j++)
	        t[i][j]=a[j][i];
	cout<<endl;
	cout<<"The Transpose of the Matrix..."<<endl;
}
