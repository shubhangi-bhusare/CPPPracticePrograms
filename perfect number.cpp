//perfect number: is the positive number which is the sum of all 
//its divisor excluding itself. ex 28 => 1,2,4,7,14 => 1+2+4+7+14=28
#include<iostream>
using namespace std;
int main46()
{
	int n,sum=0;
	cout<<"enter the number"<<endl;
	cin>>n;
	int num=n;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
		  sum=sum+i;	
		}
		 
	}
	if(num==sum)
	{
		cout<<"perfect number: "<<num<<endl;
	}
	else
	{
		cout<<"not perfect number: "<<num<<endl;
	}
}
