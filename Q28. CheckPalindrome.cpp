/* To chcek whether a number is palindrome or not
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
using namespace std;
int main()
{
	int num, remainder=0, revnum=0;
	cout<<"Enter the number to be checked: ";
	cin>>num;
	for(int i=num; i>0; i/=10)
	{
		remainder=i%10;
		revnum=revnum*10+remainder;
	}
	if(num==revnum)
	    cout<<"Yes, The number is palindrome...";
	else
	    cout<<"No, the number is not palindrome...";
	return 0;
}
