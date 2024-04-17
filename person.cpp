
//1. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
//members. Also add the display function. Create Default and Parameterized constructors. Create the 
//object of this class in main method and invoke all the methods in that class. 

#include<iostream>
#include<string>
using namespace std;
class person 
{
	string name;
	int age;
	string city;
	
	public:
		person()
		{
			this->name="abd";
			this->age=24;
			this->city="xyz";
		}
		person(string name,int age,string city)
		{
//			this->name=new char [strlen(name)+1];
//			strcpy(this->name,name);
            this->name=name;
		    this->age=age;
		    this->city=city;
//			this->city=new char [strlen(city)+1];
//			strcpy(this->city,city);	
		}
		
		void display()
		{
			cout<<"Name:"<<name<<"   Age:"<<age<<"  City:"<<city<<endl;
		}
		void setname(string name)
		{
			this->name=name;
		}
		string getname()
		{
			return name;
		}
		void setage( int age)
		{
			this->age=age;
		}
		int getage()
		{
			return age;
		}
		void setcity(string city)
		{
			this->city=city;
		}
		string getcity()
		{
			return city;
		}
};
int main1()
{   person p2;
	p2.display();
	person p1("shubhangi",25,"nasik");
	p1.display();
	p1.setname("manisha");
	p1.setage(35);
	p1.setcity("mumbai");
	p1.getage();
	p1.getcity();
	p1.getname();
	p1.display();
	
	 
}
