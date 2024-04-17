#include<iostream>
using namespace std;
int main()
{
	char arr[7]={'a','k','d','r','c','w','q'};
	for(int i=0;i<7;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		cout<<arr[i]<<endl;
	}
}
