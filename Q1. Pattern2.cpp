/* Pattern 2
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
		for(int j=0; j<5; j++)
		    if(i>=j)
			    cout<<"* ";
		cout<<endl;
	}
	return 0;
}
