/* Pattern 6
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
using namespace std;
int main()
{
	int j;
	for(int i=1; i<=5; i++, j=0)
	{
		int p=1, fact=0;
		for(int k=1; k<=5-i; k++)
		    cout<<"  ";
		for(j=0; j!=2*i-1; j++)
		{
		    cout<<p<<" ";
		    if(p<i&&fact==0)
		        p++;
		    else
		        fact=1;
		    if(fact==1)
		        p--;
    	}
		cout<<endl;
	}
	return 0;
}
