#include<iostream>
#include<math.h>
using namespace std;
int main5()
{
	int a,b;
	cout<<"Enter the two numbers"<<endl;
	cin>>a>>b;
	int max=((a+b)+ abs(a-b) )/2;
	int min=((a+b)- abs(a-b) )/2;
	cout<< "Maximum no is: "<<max<<endl;
	cout<<"Minimum number is: "<<min<<endl;
	return 0;
	
}
