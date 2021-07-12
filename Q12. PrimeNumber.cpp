/* Print first n prime numbers 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
using namespace std;
int main()
{
	int n, j, k=3;
	cout<<"Enter the value of n to print first n prime number: ";
	cin>>n;
	cout<<"The First "<<n<<" prime numbers are..."<<endl;
	cout<<"2 ";
	for(int i=2; i<=n; )
	{
		for(j=2; j<k; j++)
		{
			if(k%j==0)
			    break;
		}
		if(j==k)
		{
			cout<<k<<" ";
			i++;
		}
		++k;
	}
	return 0;
}
