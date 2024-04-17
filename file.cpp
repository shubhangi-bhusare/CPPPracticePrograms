#include<iostream>
#include<fstream>
using namespace std;
int main2()
{
//	ofstream fout;
//	fout.open("demo.txt");
//	fout<<"hello i am shubhangi"<<endl;
//	
	ifstream fin;
	string s;
	fin.open("demo.txt");
	fin>>s;
//	cout<<s;
//	s=fin.get();
	
	while(!fin.eof())
	{
		cout<<s;
		s=fin.get();
	}
	return 0;
}
