/* Check Prime Number 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
using namespace std;
int main()
{
	int num, j;
	start: cout<<"Enter the to check as Prime Number: ";
	cin>>num;
	if(num<=1)
	{
		cout<<"Invalid Input..."<<endl;
		goto start;
	}
	if(num==2)
	    cout<<"Yes, It is a Prime Number.";
	else
	{
       	for(j=2; j<num; j++)
    		if(num%j==0)
    		{
    			cout<<"No, It is not a Prime Number.";
    			break;
			}
    	if(j==num)
    	    cout<<"Yes, It is a Prime Number.";
	}
	return 0;
}
