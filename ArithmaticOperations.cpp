// Write a program, which accepts two integers and an 
//operator as a character (+ - * / ), performs the 
//corresponding operation and displays the result.

#include<iostream>
using namespace std;
int Add(int x,int y)
{
	cout<<"The Addition of two numbers is: "<<x+y<<endl;
}
int Substract(int x, int y)
{
	cout<<"The Substraction of two numbers is: "<<x-y<<endl;
}
int Multiply(int x, int y)
{
	cout<<"The Multiplication of two numbers is: "<<x*y<<endl;
}
int Divide(int x, int y)
{
	cout<<"The Division of two numbers is: "<<x/y<<endl;
}
int main8()
{
	int a,b;
	char op, choice;
	cout<<"Enter the two integer value"<<endl;
	cin>>a>>b;
	//int ch;
	cout<<"1.Addition 2.Substraction 3.Multiplication 4.Division 5.Exit"<<endl;
	
	do{ 
	cout<<"Enter choice"<<endl;
	cin>>op;
	switch(op)
	{     
	    case '+':
	    	cout<<"Enter operator +"<<endl;	
	    	Add(a,b);
	    	break;
	    case '-':
	    	cout<<"Enter operator -"<<endl;
	    	Substract(a,b);
	    	break;
	    case '*':
	    	cout<<"Enter operator *"<<endl;
	    	Multiply(a,b);
	    	break;
	    case '/':
	    	cout<<"Enter operator /"<<endl;
	    	Divide(a,b);
	    	break;
	    case 5:
	    	cout<<"Exiting the program"<<endl;
	    	break;
	    default:
	    	cout<<"Invalid choice...please try again"<<endl;
	    	
		
	}
	cout << "Do you want to perform another operation? (Y/N): ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');
}
