//Write a program to print following pattern.
//*
//* *
//* * *
//* * * *
//* * * * *
#include<iostream>
using namespace std;
int main()
{
	int rows;
	cout<<"Enter the number"<<endl;
	cin>>rows;
	for(int i=1;i<=rows;++i)
	{
		for(int j=1;j<=i;++j)
		{
			cout<<"*";
		}
		cout<<endl;
		 
	}
	return 0;
}
