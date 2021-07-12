/* Write a program to search a given element in a set of N numbers using Binary search with recursion 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
void BinarySearch(int [], int , int , int );
using namespace std;
int main()
{
	int arr[80], size, num;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements of the Array in ascending order..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	int beg=0, last=size-1;
	cout<<"Enter the number to be searched: ";
	cin>>num;
	BinarySearch(arr, num, beg, last);
	return 0;
}
void BinarySearch(int a[], int num, int beg, int last)
{
	int mid;
	if(beg>last)
	{
		cout<<"Number is not found...";
		exit(0);
	}
	else
	{
		mid=(beg+last)/2;
		if(a[mid]==num)
		{
			cout<<num<<" is found in the array at "<<mid+1<<"th position.";
			exit(0);
		}
		else if(a[mid]>num)
		    BinarySearch(a, num, beg, mid-1);
		else
		    BinarySearch(a, num, mid+1, last);
	}
}
