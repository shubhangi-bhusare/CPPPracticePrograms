//7. Write a menu driven program to do following operations :
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
//operation. Continue this process until user selects exit option.


#include<iostream>
using namespace std;
int main7()
{
	int ch;
	double r,l,b,bs,h;
	cout<<"1. Compute area of circle  2.Compute area of rectangle  3.Compute area of triangle  4.Exit"<<endl;
	do{
		cout<<"Enter the choice:"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:cout<<"enter the radius of circle"<<endl;
			         cin>>r;
			         cout<<"area of the circle is: "<<(3.14*r*r)<<endl;
				     break;
			case 2:cout<<"enter the length and breadth of rectangle"<<endl;
			       cin>>l>>b;
			       cout<<"area of the rectangle is: "<<l*b<<endl;
				   break;
			case 3:cout<<"enter the base and height of triangle: "<<endl;
			       cin>>bs>>h;
			       cout<<"area of the triangle is: "<<(bs*h)/2<<endl;
				   break;
			case 4:cout<<"Exit "<<endl;
				   break;
			default: 
				cout<<"Invalid choice"<<endl;
								
		}
		
	}while(ch!=4);
}
