#include<iostream>
using namespace std;
int fib(int n)
{
	if(n<=1)
	return n;
	return fib(n-1)+fib(n-2);
}
int main68()
{
	int a=0;
	int b=1;
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	cout<<a<<","<<b<<",";
	for(int i=2;i<num;i++)
	{
		cout<<fib(i)<<",";
	}
	 
	return 0;
}
