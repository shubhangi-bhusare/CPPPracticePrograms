//5. Write a program to calculate factors of a given number.
//In this program, an integer entered by user is stored in variable n . 
//Then, for loop is executed with an initial condition i = 1 and checked 
//whether n is perfectly divisible by i or not. If n is perfectly divisible by i then, i will be the factor of n .
// In each iteration, the value of i is updated (increased by 1).
#include<iostream>
using namespace std;
int main5()
{
	int num;
	cout<<"Enter the value of num"<<endl;
	cin>>num;
	int n=num;
	cout<<"The factors of given number are:"<<endl;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			
			cout<<i<<" ";
		}
	}
	
	
}
