//HCF of number is the largest positive number that can be divisible by both number
//example. 12 is HCF of 60 and 36
#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	cout<<"enter the numbers"<<endl;
	cin>>n1>>n2;
	int hcf=1;
	for(int i=1;i<=n1||i<=n2;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			hcf=i;
		}
	}
	cout<<"HCF of the number is:"<<hcf<<endl;
}
