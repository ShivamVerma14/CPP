/* To chcek if a number is odd or even
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048      */

#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number to be checked as even or odd: ";
	cin>>num;
	if(num%2==0)
	    cout<<num<<" is even.";
	else
	    cout<<num<<" is odd.";
	return 0;
}
