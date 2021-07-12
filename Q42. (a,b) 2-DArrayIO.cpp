/*Input and Output of 2-D Array 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
#include<process.h>
using namespace std;
int main()
{
	int a[5][5], m, n;
	char choice;
	cout<<"Choose the way to input the values in 2-D Array..."<<endl;
	cout<<"1. Row Major"<<endl;
	cout<<"2. Column Major"<<endl;
	cout<<"Option :";
	cin>>choice;
	system("cls");
	cout<<"Enter the rows and column of the array: ";
	cin>>m>>n;
	switch(choice)
	{
		case '1': cout<<"Enter the elements of the array..."<<endl;
		          for(int i=0; i<m; ++i)
		              for(int j=0; j<n; j++)
		                  cin>>a[i][j];
		          system("cls");
				  cout<<"The matrix is..."<<endl;
				  for(int i=0; i<m; ++i)
		          {    for(int j=0; j<n; j++)
		                  cout<<a[i][j]<<" ";
		               cout<<endl;
		          }
		          break;
		case '2': cout<<"Enter the elements of the array..."<<endl;
		          for(int i=0; i<m; i++)
		              for(int j=0; j<n; j++)
		                  cin>>a[j][i];
		          system("cls");
				  cout<<"The matrix is..."<<endl;
				  for(int i=0; i<m; ++i)
		          {    for(int j=0; j<n; j++)
		                  cout<<a[i][j]<<" ";
		               cout<<endl;
		          }
		          break;
		default : cout<<"Wrong Choice of Option!!!";
		          exit(0); 
	}
	return 0;
}
