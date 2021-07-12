/* To calculate m raised to the power n.
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048       */

#include<iostream>
using namespace std;
int main()
{
	int n, m, ans;
	cout<<"Enter the value of n and m for n^m: ";
	cin>>n>>m;
	if(m==0)
	    ans=1;
	else
	{
		ans=n;
		for(int i=2; i<=m; i++)
		    ans*=n;
	}
	cout<<"The Value of "<<n<<"^"<<m<<": "<<ans;
	return 0;
}
