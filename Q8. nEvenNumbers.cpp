/* To print first n even number
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n to print n even numbers: ";
	cin>>n;
	for(int i=0; i<=(2*n) -2; i+=2)
	    cout<<i<<" ";
	return 0;
}
