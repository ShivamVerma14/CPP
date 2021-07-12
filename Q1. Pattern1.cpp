/* Pattern 1
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
using namespace std;
int main()
{
	int k=1;
	for(int i=0; i<4; i++)
	{
		for(int j=0; j<4; j++)
		    if(i>=j)
		    {
		    	cout<<k<<" ";
		    	k++;
			}
		cout<<endl;
	}
	return 0;
}
