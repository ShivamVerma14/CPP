/* In a sorted array (a), find index i such that a[i] = i. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
using namespace std;
int main()
{
	int arr[80], size;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements of the Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	for(int i=0; i<size; i++)
		if(arr[i]==i)
		{
			cout<<"The Index Number such that arr[i]=i: "<<i;
			break;
		}
}
