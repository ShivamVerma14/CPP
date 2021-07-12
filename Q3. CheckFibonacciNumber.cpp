/* To check a number whether it belongs to Fibonacci Series or not
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int num, a=0, b=1, c=0;
	cout<<"Enter the number to be checked: ";
	cin>>num;
	if(num==a||num==b)
	    cout<<"Yes, "<<num<<" is a Fibonacci Number.";
	else
	{
		while(c<=num)
		{
			c=a+b;
			if(num==c)
			{
				cout<<"Yes, "<<num<<" is a Fibonacci Number.";
				break;
			}    
			else
			{
				a=b;
				b=c;
			}
		}
		if(c!=num)
		    cout<<"No, "<<num<<" is not a Fibonacci Number.";
	}
	return 0;
}
