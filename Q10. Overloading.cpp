/* Create a class Triangle. Include overloaded functions for calculating area. Overload
assignment operator and equality operator.  
Name: Shivam Verma
Course: B.Sc. (H) Computer Science
Semester: 1st
Roll No: 19HCS4048     */

#include<iostream>
#include<cmath>
#include<process.h>
using namespace std;

double findArea(float , float );
double findArea(float , float , float );
double findArea(float );

class Triangle
{
	private:
		float height, side3, side1, side2;
		double area;
	public:
		Triangle()
		{
			height=side1=side2=side3=0;
			area=0.0;
		}
		Triangle(float b, float h)
		{
			height=h;
			side1=b;
			side2=side3=0;
			area=findArea(side1, height);
		}
		Triangle(float s1, float s2, float s3)
		{
			side1=s1;
			side2=s2;
			side3=s3;
			height=0;
			area=findArea(side1, side2, side3);
		}
		Triangle(float equalside)
		{
			side1=side2=side3=equalside;
			height=0;
			area=findArea(equalside);
		}
		void display()
		{
			system("cls");
			cout<<"\t Triangle Information..."<<endl;
			cout<<"Side 1: "<<side1<<endl;
			cout<<"Side 2: "<<side2<<endl;
			cout<<"Side 3: "<<side3<<endl;
			cout<<"Height: "<<height<<endl;
			cout<<"Area of the Triangle: "<<area<<endl;
		}
		void operator=(const Triangle tri)
		{
			height=tri.height;
			side1=tri.side1;
			side2=tri.side2;
			side3=tri.side3;
			area=tri.area;
		}
};
 
int main()
{
	float s1, s2, s3, h;
	char choice1, choice2;
	do
	{
		cout<<"\tClass Triangle Operation..."<<endl;
    	cout<<"1. Triangle with base and height."<<endl;
    	cout<<"2. Triangle with three sides."<<endl;
    	cout<<"3. An Equilateral Triangle."<<endl;
    	cout<<"4. Implementation of Assignment Operator Overloading."<<endl;
		cout<<"Enter your option: ";
    	cin>>choice1;
    	switch(choice1)
    	{
    		case '1': {
    		            	cout<<"Enter the Base and Height of the Triangle: ";
    		                cin>>s1>>h;
    		                Triangle T(s1, h);
    		                T.display();
			            	break;
		              }
    		case '2': {
    		            	cout<<"Enter the three sides of Triangle..."<<endl;
    		                cin>>s1>>s2>>s3;
    		                Triangle T(s1, s2, s3);
    		                T.display();
            				break;
	            	  }
    		case '3': {
    		            	cout<<"Enter the side of Equilateral Triangle: ";
    		                cin>>s1;
    		                Triangle T(s1);
    		                T.display();
    		                break;
           			  }
           	case '4': {
           		            cout<<"Enter the three sides of 1st Triangle..."<<endl;
           		            cin>>s1>>s2>>s3;
           		            Triangle T1(s1, s2, s3);
           		            Triangle T2;
           		            T2=T1;
           		            T2.display();
			            	break;
			          }
    		default : cout<<"Wrong choice of Option!!!";
    		          exit(0);
		}
		cout<<"Do you want to operate more (Y/N): ";
		cin>>choice2;
		system("cls");
	}while(choice2=='y'||choice2=='Y');
	return 0;
}
double findArea(float base, float height)
{
	return (base*height)/2;
}
double findArea(float s1, float s2, float s3)
{
	double s;
	s=(s1+s2+s3)/2;
	double Area;
	Area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
	return Area;
}
double findArea(float equalside)
{
	double Area;
	Area=(sqrt(3)*equalside*equalside)/4.0;
	return Area;
}

