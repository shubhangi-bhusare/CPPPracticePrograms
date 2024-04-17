#include<iostream>
using namespace std;


int factorial(int n)
{
	if (n==0||n==1)
	return 1;
	else 
	return n*factorial(n-1);
}
int main()
{
	 int number;
	 cout<<"enter the no"<<endl;
	 cin>>number;
	 if(number<=0)
	 {
	 	cout<<"factorial of negative no cant define"<<endl;
	 } 
	 else
	 {
	 	int fact=factorial(number);
	 	cout<<"factorial of number is:"<<fact<<endl;
	 } 
	 
	
}
