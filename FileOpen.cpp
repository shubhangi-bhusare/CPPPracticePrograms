#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	string name;
	cout<<"Enter file name"<<endl;
	cin>>name;
	
	fstream fout;
	fout.open(name);
	
	if(fout.fail())
	cout<<"Not Exist"<<endl;
	else
	cout<<"Done"<<endl;
	fout.close();
}
