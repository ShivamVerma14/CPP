/* Copy the contents of one text file to another file, after removing all whitespaces.
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<fstream>
#include<iostream>
using namespace std;
int main()
{
	char ch;
	ofstream fout;
	fout.open("OriginalFile.txt");
	if(!fout)
    {
        cout<<"File doesn't exist!!!";
        exit(0);
    }
    fout<<"My name is Shivam Verma.";
    fout.close();
    ifstream fin;
    fin.open("OriginalFile.txt");
    if(!fin)
    {
        cout<<"Error!! Can't open OriginalFile";
        exit(0);
    }
    ofstream file1;
    file1.open("NewFile.txt");
    if(!file1)
    {
        cout<<"NewFile doesn't exist!!!";
        exit(0);
    }
    while(fin.get(ch))
        if(ch!=' ')
            file1.put(ch);
    fin.close();
    file1.close();
    ifstream file2;
    file2.open("NewFile.txt");
    while(file2.get(ch))
        cout<<ch;
    file2.close();
    return 0;
}
