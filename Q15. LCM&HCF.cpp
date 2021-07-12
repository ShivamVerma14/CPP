/* To find the LCM and HCF of two given numbers
Name: Shivam Verma
Course: B.Sc. (h) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
using namespace std;
int main()
{
	int num1, num2, max, min, lcm, hcf;
	char choice1, choice2;
	do
	{
		start: cout<<"Enter the two positive numbers to operate upon:";
	    cin>>num1>>num2;
	    if(num1<0||num2<0)
	        goto start;
	        
		system("cls");
		cout<<"Choose the option..."<<endl;
		cout<<"1. LCM"<<endl;
		cout<<"2. HCF"<<endl;
		cin>>choice1;
		if(choice1=='1')
		{
			max=(num1>num2)?num1:num2;
			for(int i=1; ; i++)
			{
				if(max%num1==0&&max%num2==0)
				{
					lcm=max;
					break;
				}
				else
				    max++;
			}
			cout<<"The LCM of two numbers is:"<<lcm<<endl;
		}
		else if(choice1=='2')
		{
			min=(num1<num2)?num1:num2;
			for(int i=1; i<=min; i++)
			{
				if(num1%i==0&&num2%i==0)
				    hcf=i;
			}
			cout<<"The HCF of the two numbers is:"<<hcf<<endl;
		}
		cout<<"Do you want to operate again (Y/N) :";
		cin>>choice2;
		system("cls");
	}while(choice2=='y'||choice2=='Y');
	return 0;
}
