#include<iostream>
using namespace std;
int main3()
{
	int r,c,i,j;
	cout<<"Enter the row and column"<<endl;
	cin>>r>>c;
	int arr1[r][c];
	int arr2[r][c];
	int sum[r][c];
	cout<<"enter the elements of first array"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr1[i][j];
			//cout<<arr1[i][j]<<endl;
		}
	}
	cout<<"enter the elements of second matrix"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>arr2[i][j];
			//cout<<arr2[i][j]<<endl;
		}
	}
	
	cout<<"addition of matrix are:"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			sum[i][j]=arr1[i][j]+arr2[i][j];
			cout<<sum[i][j]<<" ";
		}
		cout<<endl;
	}
	 
}
