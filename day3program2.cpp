#include<iostream>
#include<string.h>
using namespace std;
class person 
{
	char *name;
	int age;
	char *city;
	
	public:
		person()
		{
			this->name="abd";
			this->age=24;
			this->city="xyz";
		}
		person(char *name,int age,char *city)
		{
			this->name=new char [strlen(name)+1];
			strcpy(this->name,name);
		    this->age=age;
			this->city=new char [strlen(city)+1];
			strcpy(this->city,city);	
		}
		
		void display()
		{
			cout<<"Name:"<<name<<"   Age:"<<age<<"  City:"<<city<<endl;
		}
		void setname()
		{
			this->name=name;
		}
		char getname()
		{
			return name;
		}
		void setage(char *name)
		{
			this->age=age;
		}
		int getage()
		{
			return age;
		}
		void setcity(char *city)
		{
			this->city=city;
		}
		char getcity()
		{
			return city;
		}
};
int main72()
{   person p2;
	p2.display();
	person p1("shubhangi",25,"nasik");
	p1.display();
	 
}
