#include<iostream>
using namespace std;
int main3()
{
	int num1, num2, temp;
	cout<<"Enter two numbers"<<endl;
	cin>>num1;
	cin>>num2;
	temp=num1;
     num1=num2;
     num2=temp;
	cout<<"Numbers after swapping"<<" "<<num1<<endl<<num2<<endl;

// by using arithmetic operation
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
cout<<"Numbers after swapping"<<" "<<num1<<endl<<num2<<endl;
	return 0;
	
}
