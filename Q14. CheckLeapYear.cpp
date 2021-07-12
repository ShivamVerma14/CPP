/* Check Leap Year
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int year, ans=0;
	cout<<"Enter the Year to be checked as Leap Year: ";
	cin>>year;
	if(year%400==0)
	    ans=1;
	else
	{
		if(year%100==0)
		    ans=0;
		else
		{
			if(year%4==0)
			    ans=1;
			else
			    ans=0;
		}
	}
	if(ans==0)
	    cout<<year<<" is not a Leap Year.";
	else
	    cout<<year<<" is a Leap Year.";
	return 0;
}
