#include<iostream>
using namespace std;
int main()
{
	int arr[]={2,4,3,7,9,7};
	int sum=0;
	cout<<sizeof(arr);
	for(int i=0;i<sizeof(arr)/4;i++)
	//for(int i=0;i<6;i++)
	{
		sum = sum + arr[i];
	    cout<<sum<<endl;
	}
	cout<<"Addition of array elements is: "<<sum<<endl;
	return 0;
}
