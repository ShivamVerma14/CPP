/* To find the missing element in the array of size n-1 having elements in the range 1-n.
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048      */

#include<iostream>
void sort(int [], int );
using namespace std;
int main()
{
	int arr[80], n;
	cout<<"Enter the size of the Array: ";
	cin>>n;
	cout<<"Enter the elements in the array..."<<endl;
	for(int i=0; i<n; i++)
	    cin>>arr[i];
	sort(arr, n);
	for(int i=1; i<=n; i++)
	    if(arr[i-1]!=i)
	    {
	    	cout<<"The missing element in the Array is: "<<i;
	    	break;
		}
	return 0;
}
void sort(int arr[80], int n)
{
	int temp;
	for(int i=0; i<n; i++)
	    for(int j=0; j<n-1; j++)
	        if(arr[j]>arr[j+1])
	        {
	        	temp=arr[j];
	        	arr[j]=arr[j+1];
	        	arr[j+1]=temp;
			}
}
