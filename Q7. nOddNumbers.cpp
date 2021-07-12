/* To print first n odd number
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n to print n odd numbers: ";
	cin>>n;
	for(int i=1; i<=2*n; i+=2)
	    cout<<i<<" ";
	return 0;
}
