//Sum of series :
//	1+2+3+….+n
#include<iostream>
using namespace std;
int main23()
{
	int n;
	int sum=0;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		sum+=i;
	}
	cout<<sum;
}
