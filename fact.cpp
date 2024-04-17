#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0|n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main4()
{
	int num;
	cout<<"Enter the value of num"<<endl;
	cin>>num;
	int result;
	result=factorial(num);
	cout<<"The factorial of given number is: "<<result<<endl;
	return 0;
}
