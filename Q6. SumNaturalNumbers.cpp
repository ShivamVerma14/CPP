/* Sum of first n natural numbers
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the value of n till which you want to find the sum of natural numbers: ";
	cin>>n;
	for(int i=1; i<=n; i++)
	    sum+=i;
	cout<<"The sum of first "<<n<<" Natural Numbers is: "<<sum;
	return 0;
}
