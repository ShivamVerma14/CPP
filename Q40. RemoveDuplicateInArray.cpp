/*To find the duplicate terms in an array and print only unique ones 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
void removeDuplicate(int [], int &);
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
	cout<<"The original Array is..."<<endl;
	for(int i=0; i<size; i++)
	    cout<<arr[i]<<" ";
	removeDuplicate(arr, size);
	cout<<endl<<"The modified Array is..."<<endl;
	for(int i=0; i<size; i++)
	    cout<<arr[i]<<" ";
}
void removeDuplicate(int a[], int &n)
{
	int j=0;
	while(j<n)
	{
		for(int i=j+1; i<n; i++)
		    if(a[j]==a[i])
		    {
		    	for(int k=i; k<n; k++)
		    	    a[k]=a[k+1];
				n--;
				i--;
			}
		j++;
	}
}
