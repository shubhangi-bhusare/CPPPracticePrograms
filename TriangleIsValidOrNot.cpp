// Write a  program to input angles of a triangle 
// and check whether triangle is valid or not
#include<iostream>
using namespace std;
int main()
{
	int angle1,angle2,angle3;
	int triangle;
	cout<<"Enter the angles of triangle"<<endl;
	cin>>angle1>>angle2>>angle3;
	triangle=angle1+angle2+angle3;
	if(triangle==180 && angle1>0 && angle2>0 && angle3>0)
	{
		cout<<"Triangle is valid"<<endl;
	}
	else
	{
		cout<<"Triangle is not valid"<<endl;
	}
	return 0;
}
