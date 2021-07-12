/* Write a menu driven program to perform following operations on strings (without using inbuilt string functions):
   a) Show address of each character in string
   b) Concatenate two strings.  
   c) Compare two strings  
   d) Calculate length of the string (use pointers)  
   e) Convert all lowercase characters to uppercase  
   f) Reverse the string
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048   */

#include<iostream>
#include<cstdio>
void showaddress();
void concatenate();
void compare();
void calclength();
void lowtoup();
void reverse();
using namespace std;
int main()
{
	int a[5][5], t[5][5], m, n;
	char choice, ch;
	do
	{
		cout<<"\t String Operation"<<endl;
		cout<<"1. Show address of each character in string."<<endl;
    	cout<<"2. Concatenate two strings."<<endl;
    	cout<<"3. Compare two strings."<<endl;
    	cout<<"4. Calculate length of the string."<<endl;
    	cout<<"5. Convert all lowercase characters to uppercase."<<endl;
    	cout<<"6. Reverse the string."<<endl;
    	cout<<"Option :";
    	cin>>choice;
		system("cls");
		switch(choice)
		{
			case '1': showaddress();
			          break;
			case '2': concatenate();
			          break;
			case '3': compare();
			          break;
			case '4': calclength();
			          break;
			case '5': lowtoup();
			          break;
			case '6': reverse();
			          break;
			default : cout<<"Wrong choice of option!!!";
			          exit(0);
		}
		cout<<endl<<"Do you want to operate more (Y/N): ";
		cin>>ch;
		system("cls");	
	}while(ch=='y'||ch=='Y');
	return 0;
}
void showaddress()
{
	char string[100];
	cout<<"Enter the String: ";
	cin.ignore();
	gets(string);
	for(int i=0; string[i]!='\0'; i++)
	    cout<<string[i]<<" - "<<(void*)&(string[i])<<endl;
}
void concatenate()
{
	char string1[100], string2[100], string3[200];
	int j=0;
	cout<<"Enter the String 1: ";
	cin.ignore();
	gets(string1);
	cout<<"Enter the String 2: ";
	gets(string2);
	for(int i=0; string1[i]!='\0'; i++)
	    string3[j++]=string1[i];
	for(int i=0; string2[i]!='\0'; i++)
	    string3[j++]=string2[i];
	cout<<"New String is..."<<endl;
	for(int i=0; i<j; i++)
	    cout<<string3[i];
}
void compare()
{
	char string1[100], string2[100];
	int count1=0, count2=0, flag=0;
	cout<<"Enter the String 1: ";
	cin.ignore();
	gets(string1);
	cout<<"Enter the String 2: ";
	gets(string2);
	for(int i=0; string1[i]!='\0'; i++)
	    count1++;
	for(int i=0; string2[i]!='\0'; i++)
	    count2++;
	if(count1!=count2)
	    cout<<"The Two Strings are not similar...";
	else
	{
		for(int i=0; string1[i]!='\0'; i++)
		    if(string1[i]!=string2[i])
		        flag++;
		if(flag==0)
		    cout<<"The Two Strings are similar.";
		else
		    cout<<"The Two Strings are not similar.";
	}
}
void calclength()
{
	char string[100], *ptr;
	ptr=string;
	int count=0;
	cout<<"Enter the String: ";
	cin.ignore();
	gets(string);
	for(int i=0; ptr[i]!='\0'; i++)
	    count++;
	cout<<"The length of the String is: "<<count;
}
void lowtoup()
{
	char string[100];
	cout<<"Enter the String: ";
	cin.ignore();
	gets(string);
	for(int i=0; string[i]!='\0'; i++)
	    if(int(string[i])>=97&&int(string[i])<=122)
	        int(string[i]-=32);
	cout<<"The new String is: ";
	for(int i=0; string[i]!='\0'; i++)
	    cout<<string[i];
}
void reverse()
{
	char string[100], reverse[100];
	int count=0, i;
	cout<<"Enter the String: ";
	cin.ignore();
	gets(string);
	for(int i=0; string[i]!='\0'; i++)
	    count++;
	int end=count-1;
	for(i=0; i<count; i++)
	{
	    reverse[i]=string[end];
	    end--;
    }
    reverse[i]='\0';
    cout<<"The Reversed string is: ";
    for(int i=0; reverse[i]!='\0'; i++)
	    cout<<reverse[i];
}
