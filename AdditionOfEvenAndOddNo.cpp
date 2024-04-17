//14:Write a  program to find sum of all even and odd numbers between 1 to n.
#include<iostream>
using namespace std;

int main10()
{
   int n,i;
   int sum=0;
   int sumodd=0;
   cout<<"Enter the value of n"<<endl;
   cin>>n;
   int arr[n];
   cout<<"Enter the array elements"<<endl;
   for(i=0;i<n;i++)
   {
   	cin>>arr[i];
   }
   
   
   for(i=0;i<n;i++)
   {
   	
   		if(arr[i]%2==0)
   		{
           sum+=arr[i];
           
		}
		else
		{
    		sumodd+=arr[i];
		}
		
	
    }
    cout<<"Sum of even numbers is: "<<sum<<endl;
	cout<<"Sum of odd numbers is:"<<sumodd<<endl;

}
