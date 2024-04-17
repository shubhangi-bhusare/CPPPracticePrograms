#include<iostream>
using namespace std;
int main5()
{
	int num;
	cout<<"Enter a number"<<endl;
	cin>>num;
	if(num%5==0 && num%7==0)
	{
		cout<<"Divisible by both 5 and 7"<<endl;
	}
	else
	{
		cout<<"Not Divisible by both 5 and 7"<<endl;
	} 
	return 0;
}
