/* To check whether a given number is a factorial or not
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int num, factor=1, i;
	cout<<"Enter the number to check whether it is a factorial or not: ";
	cin>>num;
	for(i=1; i<=num; i++)
	{
		factor*=i;
		if(factor==num)
		{
			cout<<"Yes, "<<num<<" is a factorial of "<<i;
			break;  
		}
	}
	if(i>num)
	    cout<<"No, "<<num<<" is not a factorial.";
	return 0;
}
