/* To check whether a given number is perfect square or not
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048      */

#include<iostream>
using namespace std;
int main()
{
	int num, factor, i;
	cout<<"Enter the number to be checked as a perfect square or not: ";
	cin>>num;
	if(num<1)
	    cout<<"Wrong Input!!!";
	else
	{
		for(i=1; i<num/2; i++)
		{
			factor=i*i;
			if(num==factor)
			{
				cout<<"Yes, "<<num<<" is a perfect square of "<<i;
				break;
			}
		}
		if(i>=num/2)
		    cout<<num<<" is not a perfect square.";
	}
	return 0;
}
