/* To find the largest in the array
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
using namespace std;
int main()
{
	int largest, arr[80], size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	cout<<"Enter the elements of the array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	largest=arr[0];
	for(int i=1; i<size; i++)
	    if(largest<arr[i])
	        largest=arr[i];
	cout<<"The largest element in the Array is: "<<largest;
	return 0;
}
