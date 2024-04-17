#include<iostream>
#include<string.h>
using namespace std;

int main()
{ 
    
	string str = "mahesh";
	char arr[str.length()];
   for(int i=0;i<str.length();i++)
    {
      	 arr[i]=str.at(i);
      	 cout<<arr[i]<<" "<<endl; 
	} 

	cout<<endl;
	for(int i=0;i<str.length();i++)
	{
	    for(int j=i+1;j<str.length();j++)
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
