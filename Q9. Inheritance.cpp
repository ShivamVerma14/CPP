/* Define a class Person having name as a data member. Inherit two classes Student and
Employee from Person. Student has additional attributes as course, marks and year and
Employee has department and salary. Write display() method in all the three classes to display
the corresponding attributes. Provide the necessary methods to show runtime polymorphism. 
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
#include<cstring>
using namespace std;
class Person
{
	private:
		char name[80];
	public:
		Person()
		{
			strcpy(name, "Shivam");
		}
		void display();
};
void Person::display()
{
	cout<<"Name of the Person: "<<name<<endl;
}
class Student: public Person
{
	private:
		char course[30];
		int marks;
		int year;
	public:
		Student()
		{
			strcpy(course, "Computer Science Hons");
			marks=95;
			year=2019;
		}
		void display();
};
void Student::display()
{
	cout<<"Course: "<<course<<endl;
	cout<<"Marks: "<<marks<<endl;
	cout<<"Year: "<<year<<endl;
}
class Employee: public Person
{
	private:
		char department[50];
		int salary;
	public:
		Employee()
		{
			strcpy(department, "Computer Science");
			salary=100000;
		}
		void display();
};
void Employee::display()
{
	cout<<"Department: "<<department<<endl;
	cout<<"Salary: "<<salary<<endl;
}
int main()
{
	Person P;
	Student S;
	Employee E;
	P.display();
	S.display();
	E.display();
}
