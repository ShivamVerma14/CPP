/* Sum of first n even numbers
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the value of n to sum n even numbers (starting with 2): ";
	cin>>n;
	for(int i=2; i<=2*n; i+=2)
	    sum+=i;
	cout<<"The sum of first "<<n<<" even numbers is: "<<sum;
	return 0;
}
