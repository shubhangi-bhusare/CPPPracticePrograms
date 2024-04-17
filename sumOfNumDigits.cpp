//2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8
#include<iostream>
using namespace std;
int main9()
{
	int n,res=0,rem;
	cout<<"Enter the number"<<endl;
	cin>>n;
    while(n!=0)
    {
    	rem=n%10;
    	res+=rem;
    	n/=10;
	}
	cout<<"Sum of its digits are:"<<res<<endl;

}
