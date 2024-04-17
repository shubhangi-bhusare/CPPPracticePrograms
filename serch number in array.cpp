//5:Write a program to accept array  from user .Accept number from 
//user and search number is present in array or not.
#include <iostream>
using namespace std;
bool serchNum(int arr[],int size,int n)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==n)
		{
			return true;
		}
	}
	return false;
}
int main11()
{
	int size,num;
	cout<<"Enter the size of an array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"Enter the array elements"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number for search"<<endl;
	cin>>num;
	
	
	if(serchNum)
	{
		cout<<"element is present in the array"<<endl;
	}
	else
	{
		cout<<"element is not present in array"<<endl;
	}
}
