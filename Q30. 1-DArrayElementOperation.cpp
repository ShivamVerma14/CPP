/* Create an array of n elements and find Highest number and index; Lowest number and index; Mean , median and mode of elements. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<iostream>
void highestElement(int [], int );
void lowestElement(int [], int );
void sort(int [], int );
void mean(int [], int );
void median(int [], int );
void mode(int [], int );
using namespace std;
int main()
{
	int arr[80], size;
	char choice1, choice2;
	do
	{
		cout<<"Enter the size of the Array: ";
	    cin>>size;
	    cout<<"Enter the elements in the Array..."<<endl;
	    for(int i=0; i<size; i++)
	        cin>>arr[i];
	    system("cls");
    	start: cout<<"\tArray Element Operation..."<<endl;
    	cout<<"1. To find Highest Number and its index."<<endl;
    	cout<<"2. To find Lowest Number and its index."<<endl;
    	cout<<"3. Mean of the elements."<<endl;
    	cout<<"4. Median of the elements."<<endl;
    	cout<<"5. Mode of the element."<<endl;
    	cout<<"Enter your choice: ";
    	cin>>choice1;
    	switch(choice1)
    	{
    		case '1': highestElement(arr, size);
    		          break;
			case '2': lowestElement(arr, size);
					  break;
			case '3': sort(arr, size);
			          mean(arr, size);
			          break;
			case '4': sort(arr, size);
			          median(arr, size);
			          break;
			case '5': sort(arr, size);
			          mode(arr, size);
			          break;
			default : cout<<"Wrong choice of Options!!!";
			          goto start;
		}
		cout<<"\nDo you want to operate more (Y/N): ";
		cin>>choice2;
		system("cls");
	}while(choice2=='y'||choice2=='Y');
	return 0;
}
void highestElement(int arr[], int n)
{
	int big=arr[0], i, index;
	for(i=1; i<n; i++)
	    if(big<arr[i])
	    {
	    	big=arr[i];
	    	index=i;
		}
	cout<<"The Highest Element is "<<big<<" at index number "<<index<<endl;
}
void lowestElement(int arr[], int n)
{
	int small=arr[0], i, index;
	for(i=1; i<n; i++)
	    if(small>arr[i])
	    {
	    	small=arr[i];
	    	index=i;
		}
	cout<<"The Lowest Element is "<<small<<" at index number "<<index<<endl;
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
void mean(int arr[], int n)
{
	float sum=0, mean;
	for(int i=0; i<n; i++)
	    sum+=arr[i];
	mean=sum/n;
	cout<<"Mean of the Elements in the Array is: "<<mean<<endl;
}
void median(int arr[], int n)
{
	if(n%2!=0)
	    cout<<"Median of the Elements in the Array is: "<<arr[n/2]<<endl;
	else
	    cout<<"Median of the Elements in the Array are: "<<arr[(n/2)-1]<<" and "<<arr[(n/2)]<<endl;
}
void mode(int arr[], int n)
{
	int mode, number=arr[0], count=0, countmode=0;
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		    if(number==arr[j])
		        count++;
		if(count>countmode)
		{
			mode=number;
			countmode=count;
		}
		number=arr[i+1];
		count=0;
	}
	cout<<"The mode of the Array is: "<<mode<<endl;
}
