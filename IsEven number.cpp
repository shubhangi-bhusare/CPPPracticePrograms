#include<iostream>
using namespace std;
int isEven(int a)
{
if(a%2==0)
   {
	return 1;
	}	
	else
	{
		return 0;  
	}
}
int main1()
{   int n;
	cout<<"Enter digit"<<endl;
	cin>>n;
	int result=isEven(n);
	if(result==1)
	{
		cout<<"Even"<<endl;
	}
	else
	{
	cout<<"Odd"<<endl;	
	}
	return 0;
}
