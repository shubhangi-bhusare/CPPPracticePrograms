//Automorphic number: is the number whose square ends with the 
//same digit as number itself eg. 5=25, 6=36, 76=5776
#include<iostream>
using namespace std;
int checkAutomor(int n)
{
	int sqr=n*n;
	while (n!=0)
	{
		if(n%10!=sqr%10)
		{
			return 0;
		}
		n/=10;
		sqr/=10;
		return 1;	
	}
}
int main32()
{
	int num;
	cout<<"enter the number"<<endl;
	cin>>num;
	if(checkAutomor(num))
	{
		cout<<"Automorphic number: "<<num<<endl;
	}
	else
	{
		cout<<"Not Automorphic number: "<<num<<endl;
	}
}
