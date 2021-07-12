/* A sorted array of size n and a number k. Find two number a,b in the array such that a+b=k.
Name: Shivam Verma
Course: B.Sc. (H) Computer science
Semester: 1st
Roll No: 19HCS4048      */

#include<iostream>
using namespace std;
int main()
{
	int arr[80], size, k, a, b;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the sorted elements of the Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	cout<<"Enter the number k, such that a+b=k: ";
	cin>>k;
	for(int i=0; i<size; i++)
	{   
	    a=arr[i];
		for(int j=0; j<size; j++)
	    {
	    	b=arr[j];
	    	if(a+b==k)
	    	    break;
		}
		if(a+b==k)
		    break;
    }
    cout<<"The two numbers in the Array such that a+b=k are: "<<a<<" and "<<b;
    return 0;
}
