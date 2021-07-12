/* Sum of squares of first n natural numbers
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048       */

#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the value of n till which you want to find the sum of squares of natural numbers: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	    sum+=(i*i);
	cout<<"Sum of squares of first "<<n<<" natural numbers is: "<<sum;
	return 0;
}
