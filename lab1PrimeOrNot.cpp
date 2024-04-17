//Check if number is a prime number or not.: 
#include<iostream>
using namespace std;
int main()
{
	int n;
	int flag=0;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			 flag= 0;
			 break;
		}
		else 
		{
			 flag=1;
		}
	}
	if(flag==0)
	{
		cout<<"It is not prime number"<<endl;
	}
	else
	{
		cout<<"Prime number"<<endl;
	}
}
