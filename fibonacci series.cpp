//fibonacci series: it is a series in which any number of series is direct 
//sum of previous two numbers in the series eg. 0,1,1,2,3,5,8,13,21,34,55,89
#include<iostream>
using namespace std;
int main65()
{
	int a=0;
	int b=1;
	int nextterm;
	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	for(int i=2;i<num;i++)
	{
		nextterm=a+b;
		a=b;
		b=nextterm;
		cout<<nextterm<<" ";
	}
	
}
