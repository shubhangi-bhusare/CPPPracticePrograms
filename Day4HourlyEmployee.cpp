//Employee Payroll System with Abstract Classes:
//Problem Statement: Design an employee payroll system. Create an abstract 
//class Employee with attributes like name and employee ID. Derive concrete classes 
//like HourlyEmployee and SalariedEmployee. Define abstract methods for calculating pay in the base 
//class and implement them in the derived classes.
#include<iostream>
#include<string.h>
using namespace std;
 class Employee 
 {
 	protected:
 		string name;
 		int empid;
 		
 		public:
 		Employee()
 		{
 		name="abc";
		empid=10;
	
		}
		
		Employee(string name,int empid)
		{
			this->name=name;
			this->empid=empid;
		
		}
	virtual	void display()=0;
//		{
//			cout<<"Name:"<<name<<" EmpId:"<<empid<<endl;
//		}
		virtual	double calPay()=0;
	
 };
 
 class HourlyEmployee: public Employee
 {
 	private:
 		int hours;
 		double salaryperHr;
 		double NetPay;
 		
 		
 		public:
 		HourlyEmployee()
 		{
 			hours=0;
 			salaryperHr=10000;
		}
        
        HourlyEmployee(string name,int empid,int hours,double salaryperHr):Employee(name,empid)
        {
        	this->hours=hours;
        	this-> salaryperHr=salaryperHr;
		}
		
		void display()
		{   
		    Employee::display();
			cout<<"hours: "<<hours<<" salaryperHr:"<<salaryperHr<<"  NetPay: "<<NetPay<<endl;
		}
		
		double calPay()
		{ 
		    NetPay=salaryperHr*hours;
			cout<<"NetPay of hourlyWorked Employee per day is: "<<NetPay<<endl;
		}
 };
 int main6()
 {
 	HourlyEmployee h("shubha",3,8,1000);
 	h.calPay();
 	h.display();
 }
 
