/* To convert the Decimal into Octal and vice versa
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048       */

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	char choice2;
	do
	{
    	double decimal=0, oct=0, remainder=0;
    	int octal[10], j=0, k=0;
    	char choice1;
		start: cout<<"\tNumber Conversion..."<<endl;
    	cout<<"1. Decimal to Octal."<<endl;
    	cout<<"2. Octal to Decimal."<<endl;
    	cout<<"Enter your choice: ";
    	cin>>choice1;
    	switch(choice1)
    	{
    		case '1': cout<<"Enter the Decimal Number: ";
    		          cin>>decimal;
			          for(int i=decimal; i>0; i/=8)
    		          {
    		          	octal[j]=i%8;
    		          	j++;
					  }
					  cout<<"Octal Number is: ";
					  for(int i=j-1; i>=0; i--)
					      cout<<octal[i];
					  break;
			case '2': cout<<"Enter the octal number: ";
			          cin>>oct;
			          for(int i=oct; i>0; i/=10)
			          {
			          	remainder=i%10;
			          	decimal+=remainder*pow(8, k);
			          	k++;
					  }
					  cout<<"Decimal number is: "<<decimal;
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
