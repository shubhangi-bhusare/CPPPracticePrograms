#include<iostream>
using namespace std;
int main()
{    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    int temp=n;
	int rev=0;
	while(n>0)
	{
		int rem=n%10;
		rev=rem+(rev*10);
		n=n/10;
	}
	//cout<<rev<<endl;
	if(rev==temp)
	{
		cout<< "palindrome"<<endl;
	}
	else
	{
		cout<<"Not palindrome"<<endl;
	}
	return 0;
}
