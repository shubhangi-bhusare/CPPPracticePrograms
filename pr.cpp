//Check if number is a prime number or not.: 
#include<iostream>
using namespace std;

bool isPrime(int n)
{
	if(n<=0)
	return false;
	else
	{
	
	for( int i=2;i<=n/2;i++)
	{   
	   if(n%i==0)
		return false;
	}
	
	return true;}
}
int main8()
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	int result = isPrime(num);
	if(result==1)
	{
		cout<<"the given number is prime "<<endl;
	}
	else
	{
		cout<<"the given number not prime"<<endl;
	}
}
