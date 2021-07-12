/* Write a program to calculate GCD of two numbers without recursion.  
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
using namespace std;
int main()
{
	int num1, num2, min, hcf=1;
	cout<<"Enter the Two Numbers to calculate their GCD: ";
	cin>>num1>>num2;
	min=(num1<num2)?num1:num2;
	for(int i=1; i<=min; i++)
	    if(num1%i==0&&num2%i==0)
	        hcf=i;
	cout<<"The GCD of "<<num1<<" and "<<num2<<" is: "<<hcf;
	return 0;
}
