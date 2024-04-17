//Harshad number- is a number which is divisible by sum of its digits
//ex. 21 => 2+1=3 => 21%3=0
#include<iostream>
using namespace std;
int main1()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int num=n;
	int rem;
	int sum=0;
	//num=number;
	
	while(n!=0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	if(num%sum==0)
	{
		cout<<"Harshad Number"<<endl;
	}
	else
	{
		cout<<"Not harshad number"<<endl;
	}
}
