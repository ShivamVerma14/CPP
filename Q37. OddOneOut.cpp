/* Array of size n out which n-1 elements are same and one is different. Find the odd one out. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int arr[80], size, count;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements in the Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	for(int i=0; i<size; i++)
	{
		count=0;
		for(int j=0; j<size; j++)
		    if(arr[i]==arr[j])
		        count++;
		if(count==1)
		{
			cout<<"The Odd One Out is: "<<arr[i];
			break;
		}
	}
	return 0;
}
