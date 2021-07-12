/* Sum of first n odd numbers
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int n, sum=0;
	cout<<"Enter the value of n to sum n odd numbers: ";
	cin>>n;
	for(int i=1; i<=2*n; i+=2)
	    sum+=i;
	cout<<"The sum of first "<<n<<" odd numbers is: "<<sum;
	return 0;
}
