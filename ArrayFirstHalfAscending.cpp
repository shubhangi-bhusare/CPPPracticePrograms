#include<iostream>
using namespace std;
int main2()
{
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter elements of array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				
			}
		}
	}
	
	for(int i=size/2;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(arr[i]<arr[j])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	cout<<"Sorted array is:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
