//number where the sum of digits of the square of the number is equal to the number
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	int sqr=n*n;
	int rem;
	int res=0;
	while(sqr!=0)
	{
		rem=sqr%10;
		res+=rem;
		sqr/=10;
	}
	if(n==res)
	{
		cout<<"neon number"<<endl;
	}
	else
	{
		cout<<"not neon number"<<endl;
	}
}

