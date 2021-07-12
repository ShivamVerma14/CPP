/* 1. Write a program to compute the sum of the first n terms of the following series:
  S = 1 - 1 / (2 ^ 2) + 1 / (3 ^ 3) - ... 1 / (n ^ n) where ^ is exponentiation.  
  The number of terms n is to be taken from user through command line. 
  If command line argument is not found then prompt the user to enter the value of n. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
#include<cmath>
using namespace std;
int main(int argc, char *argv[])
{
	int n, flag=1;
	float sum=0.0;
	if(argv[1])
	    n=*argv[1];
	else
	{
		cout<<"Enter the value of n: ";
		cin>>n;
	}
	for(int i=1; i<=n; i++)
	{
		sum+=(flag*(1/(pow(i,i))));
		flag*=-1;
	}
	cout<<"The Sum of the Series is: "<<sum;
	return 0;
}
