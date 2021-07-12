/* Array of size n has elements from 1 to n where 1 element is missing and 1 is repeated. Find both the elements. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
void sort(int [], int );
using namespace std;
int main()
{
	int arr[80], size, j, repeated;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements of the Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	sort(arr, size);
	system("cls");
	for(int i=0; i<size; i++)
	    cout<<arr[i]<<" ";
	cout<<endl;
	for(int i=0; i<size; i++)
	{   for(j=i+1; j<size; j++)
	    {
	    	repeated=arr[i];
	    	if(repeated==arr[j])
	    	    break;
		}
		if(repeated==arr[j])
		    break;
    }
	cout<<"Repeated Element in the Array is: "<<repeated<<endl;
	for(int i=1; i<=size; i++)
	    if(arr[i-1]!=i)
	    {
	    	cout<<"The Missing Element in the Array: "<<i;
	    	break;
		}
	return 0;
}
void sort(int arr[], int n)
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
