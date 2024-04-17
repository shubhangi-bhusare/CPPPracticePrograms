#include<iostream>
using namespace std;
int main()
{
	int size;
	cout<<"Enter the size of an array"<<endl;
	cin>>size;
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the array elements"<<endl;
		cin>>arr[i];
	}
	cout<<"Array elements are:"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
