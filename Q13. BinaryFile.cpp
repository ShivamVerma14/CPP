/* Create a class Student containing fields for Roll No., Name, Class, Year and Total Marks.
Write a program to store 5 objects of Student class in a file. Retrieve these records from file and display them.
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048    */

#include<fstream>
#include<cstdio>
#include<iostream>
using namespace std;
class Student
{
private:
    int rollno;
    char name[30];
    int Class;
    int year;
    int totmarks;
public:
    void display();
    void InputVal();
};
void Student::display()
{
	cout<<"Name: "<<name<<endl;
	cout<<"Class: "<<Class<<endl;
	cout<<"Roll No: "<<rollno<<endl;
	cout<<"Year: "<<year<<endl;
	cout<<"Total Marks: "<<totmarks<<endl;
}
void Student::InputVal()
{
	cout<<"Enter the details..."<<endl;
	cout<<"Name: ";
	cin.ignore();
	gets(name);
	cout<<"Class: ";
	cin>>Class;
	cout<<"Roll No: ";
	cin>>rollno;
	cout<<"Year: ";
	cin>>year;
	cout<<"Total Marks: ";
	cin>>totmarks;
	system("cls");
}
int main()
{
	int num;
	ofstream fout;
	fout.open("Student.dat", ios::binary);
	if(!fout)
    {
        cout<<"File doesn't exist!!!";
        exit(0);
    }
    cout<<"Enter the number of records to write in File: ";
    cin>>num;
    Student st[num];
    for(int i=0; i<num; i++)
    {
        st[i].InputVal();
        fout.write((char *)&st[i], sizeof(st[i]));
    }
    fout.close();
    system("cls");
    Student s;
    ifstream fin;
    fin.open("Student.dat", ios::binary);
    cout<<"\tRecords in the file..."<<endl;
    while(fin.read((char *)&s, sizeof(s)))
        s.display();
    fin.close();
    return 0;
}
