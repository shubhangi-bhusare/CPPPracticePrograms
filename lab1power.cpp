//Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3
#include<iostream>
using namespace std;

int pow(int m,int n)
{
	int result=1;
	for(int i=0;i<n;i++)
	{
		result=result*m;
	}
	cout<<result<<endl;
}
int main1()
{
	int m=3;
	int n=4;
	pow(3,4);
	
	
}
