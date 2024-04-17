#include<iostream>
using namespace std;
int main()
{
	int n,count,j;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{ 
	   count =0;
		for(int j=2;j<=i;j++)
		{
			if(j%i==0)
			{
				count++;
			}
			if(count==1)
			{
				cout<<count<<endl;
			}
		}
	}
}
