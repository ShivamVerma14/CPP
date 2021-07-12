/* To create an array of n elements and find and return the position of element x.
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048      */

#include<iostream>
using namespace std;
int main()
{
	int arr[80], size, element;
	cout<<"Enter the size of Array: ";
	cin>>size;
	cout<<"Enter the elements of Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	cout<<"Enter the element to be searched: ";
	cin>>element;
	for(int i=0; i<size; i++)
	    if(arr[i]==element)
	    {
	    	cout<<element<<" is found in the Array at "<<i+1<<"th position.";
	    	break;
		}
	return 0;
}
