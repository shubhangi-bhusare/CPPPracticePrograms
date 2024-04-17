#include<iostream>
using namespace std;
int main1()
{
	int size;
	int result=0;
	cout<<"Enter the size"<<endl;
	cin>>size;
	int arr[size];
	//int arr[i];
	cout<<"Enter the elements in array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		if(arr[i]<=0)
		{
		  cout<<"invalid number i.e Negative number"<<endl;	
		  break; 
		}
		else
		{
			result=result+arr[i];
		}
		 
	}
	cout<<"sum of the given numbers are: "<<result<<endl;
	return 0;
}
