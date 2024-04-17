//2. Write a program to accept two integers x and n and compute x raised to n.
#include<iostream>
using namespace std;
int main2()
{
	int x,n,res=1;
	cout<<"enter the value of x and n"<<endl;
	cin>>x>>n;
	while(n!=0)
	{
		res*=x;
		--n;
	}
	cout<<"the power of x is :"<<res<<endl;
	return 0;
}

