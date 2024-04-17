//Write a program to check entered number is Armstrong number or not.
//Armstrong number is a number that is equal to the sum of cubes of its digits.

#include<iostream>
using namespace std;
int main9()
{
	int n, rem, res=0;
	cout<<"Enter the three digit number"<<endl;
	cin>>n;
	int no=n;
	
	while(no!=0)
	{
		rem=no%10;
		res+=rem*rem*rem;
		no=no/10;
	}
	if(res==n)
	{
		cout<<n<<":"<<"Armstrong number"<<endl;
	}
	else
	{
		cout<<n<<":"<<"Not armstrong number"<<endl;
	}
}
