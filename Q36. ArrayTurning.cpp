/* A sorted array is rotated around some point which needs to be determined 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
using namespace std;
int main()
{
	int arr[80], size, point;
	cout<<"Enter the size of the Array: ";
	cin>>size;
	cout<<"Enter the elements of the Array..."<<endl;
	for(int i=0; i<size; i++)
	    cin>>arr[i];
	system("cls");
	for(int i=0; i<size; i++)
	{
	    if(arr[0]>arr[i])
	        point=arr[i];
	    while(i<size-1)
	    {
	    	if(arr[i]<arr[i+1])
	    	    point=arr[i+1];
	    	i++;
		}
		break;
    }
    cout<<"The Array is..."<<endl;
    for(int i=0; i<size; i++)
        cout<<arr[i]<<" ";
    cout<<"\nThe Turning point is: "<<point;
    return 0;
}
