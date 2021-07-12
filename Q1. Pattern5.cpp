/* Pattern 5
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
using namespace std;
int main()
{
	for(int i=0; i<5; i++)
	{
		int k=i+1;
		for(int j=0; j<5; j++)
		    if(i>=j)
		    {
		    	cout<<k<<" ";
		    	k--;
			}
		cout<<endl;
	}
	return 0;
}
