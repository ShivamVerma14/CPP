/* Swapping of two values using pointers
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
using namespace std;
int main()
{	
	int num1, num2, *ptr1, *ptr2, temp;
	cout<<"Enter the Number 1: ";
	cin>>num1;
	cout<<"Enter the Number 2: ";
	cin>>num2;
	ptr1=&num1;
	ptr2=&num2;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	cout<<"Number 1: "<<num1<<endl;
	cout<<"Number 2: "<<num2;
	return 0;
}
