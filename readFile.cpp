#include<iostream>
#include<fstream>

#include<string.h>
using namespace std;
int main()
{
	string name;
	cout<<"Enter file name"<<endl;
	cin>>name;
	
	ifstream fout;
	fout.open(name);
	if(fout.fail())
	{
		cout<<"file not exist"<<endl;
	}
	else
	{
		cout<<"----Reading from file---"<<endl;
		string filedata;
		
		while(getline(fout,filedata))
		{
			cout<<filedata<<endl;
		}
	
		}
		fout.close();
}

