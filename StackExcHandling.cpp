#include<iostream>
using namespace std;


   void push(int arr[],int size)
	{  
		cout<<"Enter the elements in array"<<endl;
		for(int i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		cout<<"Added elements in stack are: "<<endl;
		for(int i=0;i<size;i++)
		{
			cout<<" "<<arr[i];
		}	
	}
		 
    int pop()
        {
	      
		}		 
int main()
{    
    int arr[10];
	push(arr,10);
	pop();
	return 0;
	
}
