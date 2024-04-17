// Employee Inheritance:
//Problem Statement: Build a system for managing employees. Create a base 
//class Employee with attributes such as name, employee ID, and salary. 
//Then, derive classes like Manager and Developer, each with its own attributes and methods.
 //Implement a common method, like calculate_salary(), in the base class.

#include<iostream>
#include<string.h>
using namespace std;
 class Employee 
 {
 	protected:
 		string name;
 		int empid;
 		double salary;
 		
 		public:
 		Employee()
 		{
 		name="abc";
		empid=10;
		salary=10000;	
		
		}
		
		Employee(string name,int empid,double salary)
		{
			this->name=name;
			this->empid=empid;
			this->salary=salary;
		
		}
	virtual	void display()
		{
			cout<<"Name:"<<name<<" EmpId:"<<empid<<" Salary: "<<salary<<endl;
		}
		
	virtual	double calSalary()
		{
		     return 0;
		}
 };
 
 class Manager: public Employee
 {
 	private:
 		double incentives;
 		
 		public:
 		Manager()
 		{
 			incentives=1000;
		}
        
        Manager(string name,int empid,double salary,double incentives):Employee(name,empid,salary)
        {
        	this->incentives=incentives;
		}
		
		void display()
		{   
		    Employee::display();
			cout<<"Incentives: "<<incentives<<" Salary:"<<salary<<endl;
		}
		
		double calSalary()
		{
			cout<<"Salary of manager is: "<<salary+incentives<<endl;
		}
 };
 
 class Developer : public Employee
 {
 	private:
 		double allowances;
 		
 		public:
 		Developer()
 		{
 			allowances=1000;
		}
        
        Developer(string name,int empid,double salary,double allowances):Employee(name,empid,salary)
        {
        	this->allowances=allowances;
		}
		void display()
		{
			Employee::display();
			cout<<"Allowances: "<<allowances<<endl;
		}
		
		double calSalary()
		{
			cout<<"Salary of developer is: "<<salary+allowances<<endl;
		}
 };
 
 int main1()
 {
 	Employee e("manish",21,12000);
 	e.display();
 	Manager m("Mahesh",31,100000,20000);
 	m.display();
 	m.calSalary();
 	Developer d("shubhangi",45,50000,10000);
 	d.display();
 	d.calSalary();
 	
 	
 }
