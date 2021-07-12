/* To arrange the elements of the given array in ascending order
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
void bubblesort(int [], int );
using namespace std;
int main()
{
	int arr[80], size;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements of the Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	system("cls");
	cout<<"The Original Array..."<<endl;
	for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
	bubblesort(arr, size);
	cout<<"\nThe Sorted Array..."<<endl;
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    return 0;
}
void bubblesort(int a[], int n)
{
	int temp;
	for(int i=0; i<n; i++)
	    for(int j=0; j<n-1; j++)
	        if(a[j]>a[j+1])
	        {
	        	temp=a[j];
	        	a[j]=a[j+1];
	        	a[j+1]=temp;
			}
}

