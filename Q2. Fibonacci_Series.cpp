/* Fibonacci Series
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main(void)
{
	int a=0, b=1, c=0, n;
	cout<<"Enter the value of n to which you want to print Fibonacci Series:";
	cin>>n;
	system("cls");
	cout<<'\t'<<"The Fibonacci Series..."<<endl;
	cout<<a<<'\n'<<b<<'\n';
	for(int i=3; i<=n; i++)
	{
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
	}
	return 0;
}
