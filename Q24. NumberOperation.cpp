/* To find the reverse, sum of digits and sum of first and last digit of a given number.
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048       */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int num, sum=0, remainder=0, revnum=0;
	double countdigit=0, lastdigit=0, firstdigit=0;
	char choice1, choice2;
	do
	{
		cout<<"Enter the number for the operation: ";
	    cin>>num;
	    system("cls");
    	start: cout<<"\tNumber Operation..."<<endl;
    	cout<<"1. Reverse a number."<<endl;
    	cout<<"2. Sum of the digits of the number."<<endl;
    	cout<<"3. Sum of first and last digit of the number."<<endl;
    	cout<<"Enter your choice: ";
    	cin>>choice1;
    	switch(choice1)
    	{
    		case '1': for(int i=num; i>0; i/=10)
    		          {
    		          	remainder=i%10;
    		          	revnum=revnum*10+remainder;
					  }
					  cout<<"Reversed Number is: "<<revnum;
					  break;
			case '2': for(int i=num; i>0; i/=10)
			          {
			          	remainder=i%10;
			          	sum+=remainder;
					  }
					  cout<<"The sum of digits of the number is: "<<sum;
					  break;
			case '3': lastdigit=num%10;
			          for(int i=num; i>0; i/=10)
			              countdigit++;
			          if(countdigit==1)
			              firstdigit=0;
			          else
			              firstdigit=num/pow(10,countdigit-1);
			          sum=lastdigit+firstdigit;
			          cout<<"The sum of first and last digit of the number is: "<<sum;
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
