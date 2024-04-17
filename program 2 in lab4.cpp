#include<iostream>
using namespace std;
class person 
{
	char *name;
	int age;
	char *city;
	
	public:
		person()
		{
			
		}
		person(char *name,int age,char *city)
		{
			this->name;
		    this->age=age;
			this->city=city;	
		}
		
		void display()
		{
			cout<<"Name:"<<name<<"Age"<<age<<"City"<<city<<endl;
		}
};
