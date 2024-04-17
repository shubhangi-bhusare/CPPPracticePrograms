#include<iostream>
using namespace std;
int main()
{
	int size, element;
	int gEle=0;
	int gElecount=0;
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int arr[size];
	cout<<"enter array elements "<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"array elements are"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	cout<<"sorted array is:"<<endl;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if( arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				   
			}
			 
		}
		cout<<arr[i]<<" ";
	}
	cout<<endl;
    for(int i=0;i<size;i++)
	  {  
	     int localElecount;
	     int localEle=arr[i];
	        localElecount=1;
		for(int j=i+1;j<size;j++)
	   	{    
	   	
	   		if(arr[i]==arr[j])
	   		{
	
	   			localElecount++;
		    }
		      
	    }
	    if(gEle<localEle)
		    {
		       gEle=localEle;
		       gElecount=localElecount;
			}
	
	  }
	  cout<<"most occuring elements are:"<<endl;
	  cout<<gEle<<endl;
	  cout<<"count of most occuring element is:"<<endl;
	   cout<<gElecount<<endl;
}
