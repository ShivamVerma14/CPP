/*  Write a program that prints a table indicating the number of occurrences of each alphabet in the text entered as command line arguments. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
#include<process.h>
#include<string.h>
using namespace std;
int main(int argc, char *argv[])
{
	string str="";
	int alphabet[26];
	if(argv[1])
    	for(int i=1; i<argc; i++)
		    str+=argv[i];
	else
	{
		cout<<"No Command Line Argument...";
		exit(0);
	}
	for(int i=0; i<26; i++)
	    alphabet[i]=0;
	for(int i=0; i<str.length(); i++)
	    if(str[i]>='a'&&str[i]<='z')
	        alphabet[str[i]-97]++;
	    else if(str[i]>='A'&&str[i]<='Z')
	        alphabet[str[i]-65]++;
	cout<<"\tAlphabet Occurrences..."<<endl;
	for(int i=0; i<26; i++)
	    if(alphabet[i]!=0)
	        cout<<char(i+97)<<" - "<<alphabet[i]<<endl;
	return 0;
}
