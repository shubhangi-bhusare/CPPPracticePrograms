#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter three numbers"<<endl;
	cin>>a>>b>>c;
	if(a>b)
	{
		if(a>c)
		{
			cout<<" Greater number is "<<a<<endl;
		}
		else
		{
		cout<<"Greater number is "<<c<<endl;	
		}
		
	}
	else if (b>a)
	{ 
	     if(b>c)
		cout<<"Greater number is"<<b<<endl;
		else 
		cout<<"greater no is: "<<c<<endl;	}
	return 0;
}

