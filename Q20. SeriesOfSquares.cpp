/* To print the series 1,4,9,16... n terms
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048       */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n till which you have to print the square in the series: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	    cout<<i*i<<" ";
	return 0;
}
