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
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"*"<<endl;
	}
	return 0;
}
