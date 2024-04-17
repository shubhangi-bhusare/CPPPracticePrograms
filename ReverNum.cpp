//Write a  program to enter a number and print its reverse.
#include<iostream>
using namespace std;
int main1()
{ 
    int num;
    int rev=0;
    int rem;
	cout<<"Enter the number"<<endl;
	cin>>num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num/=10;
	}
	cout<<rev<<endl;
}
