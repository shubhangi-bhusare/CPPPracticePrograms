#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main86()
{
	string name;
	cout<<"enter file name"<<endl;
	cin>>name;
	
	ofstream outFile(name.c_str());
	
	if(outFile.is_open()){
		        	cout<<"open or Created  "<<endl;
				}
		        else{
		        	cout<<"Error "<<endl;
				}
				outFile.close();
}
