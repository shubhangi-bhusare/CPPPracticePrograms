#include<iostream>
using namespace std;
int main()
{   
	string s;
	cout<<"Enter a string"<<endl;
	cin>>s;
	string rev;
	for(int i=s.length()-1;i>=0;i--)
	{
		char c= s.at(i);
		rev+=c;
	}
	//cout<<rev<<endl;
	if(s==rev)
	{
		cout<<"Palindrom"<<endl;
	}
	else 
	{
		cout<<"Not palindrome"<<endl;
	}
}
