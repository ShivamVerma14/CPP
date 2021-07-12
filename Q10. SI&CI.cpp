/* To find Simple Interest and Compound Interest
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048      */

#include<iostream>
#include<cmath>     //To use pow() to evaluate power
using namespace std;
int main()
{
	double principal, rate, time;
	long double SI, CI, F;
	char choice;
	cout<<"Enter the choice between SI and CI (S/C): ";
	cin>>choice;
	cout<<"Enter Principal, Rate and Time: ";
	cin>>principal>>rate>>time;
	if(choice=='S'||choice=='s')
	{
		SI=(principal*rate*time)/100;
		cout<<"Simple Interest: "<<SI;
	}
	else if(choice=='C'||choice=='c')
	{
		CI=principal*pow((1+rate/100),time);
		cout<<"Compound Interest: "<<CI;
	}
	else
	{
		cout<<"Wrong choice of option!!!";
	}
	return 0;
}
