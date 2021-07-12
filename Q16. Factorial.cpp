/* To find the factorial of a given number
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main(void)
{
	int number, factorial=1;
	start: cout<<"Enter the number to find its factorial:";
	cin>>number;
	if(number<0)
	{
		cout<<"Invalid Input..."<<endl;
		goto start;
	}
	if(number==0)
	{
		factorial=1;
	}
	else
	{
		for(int i=number; i>=1; --i)
	        factorial*=i;
	}
	cout<<"The Factorial of "<<number<<" is :"<<factorial;
	return 0;
}
