/*  Write a program to read two numbers p and q. If q is 0 then throw an exception else display the result of p/q. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	double p, q;
	cout<<"Enter the Dividend: ";
	cin>>p;
	cout<<"Enter the Divisor: ";
	cin>>q;
	try
	{
		if(q==0.0)
		    throw q;
		cout<<"Quotient is: "<<p/q<<endl;
	}
	catch(double q)
	{
		cout<<"Error: Quotient is infinite!!!"<<endl;
		exit(0);
	}
}
