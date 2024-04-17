#include<iostream>
using namespace std;
int main1()
{
	int arr[7]={12,41,24,22,27,16,17};
	cout<<"even elements are"<<endl;
	for(int i=0;i<7;i++)
	{
		if(arr[i]%2==0)
		{
			cout<<arr[i]<<endl;
		}
	}
	cout<<"odd elements are"<<endl;
	for(int i=0;i<7;i++)
	{
		if(arr[i]%2!=0)
		{
			cout<<arr[i]<<endl;
		}
	}
}
