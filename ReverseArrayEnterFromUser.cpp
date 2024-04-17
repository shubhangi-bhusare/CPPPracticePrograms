#include<iostream>
using namespace std;
int main()
{   int size;
    cout<<"Enter size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<size;i++)
    {
    	cin>>arr[i];
    	
	}
	cout<<"Array elements are: "<<endl;
	for(int i=0;i<size;i++)
	{
		 cout<<arr[i]<<" ";
	
	}
	cout<<"\n";
     cout<<"Reverse array elements are"<<endl;
		for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
