/* Write a program to calculate GCD of two numbers with recursion.  
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
int gcd(int , int );
using namespace std;
int main()
{
	int num1, num2, result;
	cout<<"Enter the Two Numbers to calculate their GCD: ";
	cin>>num1>>num2;
	result=gcd(num1, num2);
	cout<<"The GCD of "<<num1<<" and "<<num2<<" is: "<<result;
	return 0;
}
int gcd(int a, int b)
{
	if(b==0)
	    return a;
	else
	    return gcd(b, a%b);
}
