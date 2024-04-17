#include<iostream>
using namespace std;

int getDivisorsum(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			sum=sum+i;	
	}
	return sum;
}
int main()
{
	int n1,n2;
	cout<<"Enter the numbers"<<endl;
	cin>>n1>>n2;
	int sum1=getDivisorsum(n1);
	int sum2=getDivisorsum(n2);
	if(sum1/n1==sum2/n2)
	{
		cout<<"It is friendly pair"<<endl;
	}
	else
	{
		cout<<"It is not friendly pair"<<endl;
	}
getDivisorsum(7);
	
}
