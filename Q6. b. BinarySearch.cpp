/* Write a program to search a given element in a set of N numbers using Binary search without recursion 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
void BinarySearch(int [], int , int );
using namespace std;
int main()
{
	int arr[80], size, num;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements of the Array in ascending order..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	cout<<"Enter the number to be searched: ";
	cin>>num;
	BinarySearch(arr, size, num);
	return 0;
}
void BinarySearch(int a[], int size, int num)
{
	int beg, mid, last;
	beg=0;
	last=size-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(a[mid]==num)
		{
			cout<<num<<" is found in the array at "<<mid+1<<"th position.";
			exit(0);
		}
		else if(a[mid]>num)
		    last=mid-1;
		else
		    beg=mid+1;
	}
	if(beg>last)
	{
		cout<<"Number is not found...";
		exit(0);
	}
}
