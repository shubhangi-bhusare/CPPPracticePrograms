#include<iostream>
using namespace std;
int main9()
{  int n,count;
cout<<"enter digit"<<endl;
cin>>n;
    
	for(int i=1;i<=n;i++)
	{  count=0;
	for(int j=2;j<=i;j++)
	{
	  
		if(i%j==0)
		{
			count++;
		}
	}
		 if(count==1)
		{
			cout<<i<<endl;
		}	
	
}
	return 0;
}
