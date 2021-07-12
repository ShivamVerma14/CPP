/*   Write a program to merge two ordered arrays to get a single ordered array. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
void merge(int [], int [], int [], int , int , int &);
using namespace std;
int main()
{
	int a[50], b[50], c[100], m, n, k;
	cout<<"Enter the size of two arrays: ";
	cin>>m>>n;
	cout<<"Enter the 1st array in ascending order..."<<endl;
	for(int i=0; i<m; ++i)
	    cin>>a[i];
	cout<<"Enter the 2nd array in descending order..."<<endl;
	for(int i=0; i<n; ++i)
	    cin>>b[i];
	merge(a, b, c, m, n, k);
	system("cls");
	cout<<"The merged array is..."<<endl;
	for(int i=0; i<k; i++)
	    cout<<c[i]<<" ";
	return 0;
}
void merge(int a[], int b[], int c[], int m, int n, int &k)
{
	int i, j;
	for(i=0, j=n-1, k=0; i<m&&j>=0; )
	{
		if(a[i]>b[j])
		    c[k++]=b[j--];
		else
		    c[k++]=a[i++];
	}
	if(i<m)
	    while(i<m)
	        c[k++]=a[i++];
	else
	    while(j>=0)
	        c[k++]=b[j--];
}
