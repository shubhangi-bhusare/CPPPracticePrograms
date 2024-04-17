//7.Person and Student Inheritance:
//Problem Statement: Model a system for handling individuals and students within 
//an educational institution. Create a base class Person with attributes like 
//name and age. Derive a Student class with additional attributes like student
// ID and GPA, inheriting the common attributes from the Person class.

#include<iostream>
#include<string>
using namespace std;
class person 
{
	string name;
	int age;
	
	public:
		person()
		{
			this->name="abd";
			this->age=24;
		}
		person(string name,int age)
		{

            this->name=name;
		    this->age=age;
		    	
		}
		
		void display()
		{
			cout<<"Name:"<<name<<"   Age:"<<age<<endl;
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
};
class student: public person
{
	private:
		int studId;
		int Gpa;
	public:
		student()
		{
			
		}
		student(string name,int age,int studId, int Gpa): person(name,age)
		{
			this->studId=studId;
			this->Gpa=Gpa;
		}
		void display()
		{
			person::display();
			cout<<"studId:"<<studId<<"   Gpa:"<<Gpa<<endl;
		}
		
};
int main3()
{   
    
	person p2;
	p2.display();
	person p1("shilpa",22);
	p1.display();
	student std("Vikas",27,10,89);
	std.display();
	p1.setname("vinit");
	p1.setage(35);
	p1.getage();
	p1.getname();
	p1.display();
	
	 
}

