#include<iostream>
using namespace std;
class employee
{
	protected: 
	int empid;
	string name;
	int salary;
	
	public:
//		employee()
//		{
//			this->empid = 2;
//			this->name = "ram";
//			this->salary = 10000;
//			
//		}
		employee(int empid,string name,int salary)
		{
			this->empid= empid;
			this->name= name;
			this->salary= salary;
		}
		 void display()
		{
			cout<<"empid: "<<empid<<"  name:"<<name<<"  salary:"<<salary<<endl;
		}
		 int calsalary()
		{
			cout<<"salary of employee is: "<<salary<<endl;
		}
};
class salesperson: virtual public employee
{
	private:
		int noofsale;
//		salesperson()
//		{
//			this->noofsale = 2;	
//		}
public:
		salesperson(int empid,string name,int salary,int noofsale): employee(empid, name, salary)
		{
			this->noofsale=noofsale;
		}
	      void display()
		{ 
		    employee::display();
			cout<<"noofsale: "<<noofsale<<endl;
		}
	      int calsalary()
		{
			employee::calsalary();
			cout<<"salary of salesperson is: "<<salary<<endl;
		}
};
class manager : virtual public employee
{
	private:
		int incentive;
		
	public:
//		manager()
//		{
//			incentive = 20000;	
//		}
		manager(int empid,string name,int salary,int incentive):employee(empid, name, salary)
		{
			this->incentive=incentive;
		}
	    void display()
		{ 
		    employee::display();
			cout<<"incentive: "<<incentive<<endl;
		}
	    int calsalary()
		{
			employee::calsalary();
			cout<<"salary of manager is: "<<salary<<endl;
		}
		
};
class salemanager : public salesperson, public manager
{
	private:
		string dept;
		
	public:
//		salemanager():salesperson(), manager()
//		{
//			dept = 20000;	
//		}
		salemanager(int empid, string name, int salary, int noofsale, int incentive, string dept) :  
		salesperson(empid, name, salary, noofsale), manager(empid, name, salary,incentive), 
		employee(empid, name, salary)
		{
			this->dept=dept;
		}
	    void display()
		{ 
		    salesperson::display();
		    manager::display();
			cout<<"department : "<<dept<<endl;
		}
	    int calsalary()
		{
			salesperson::display();
		    manager::display();
			cout<<"salary of salemanager is: "<<endl;
		}
};
int main23()
{
//	employee e;
//	e.display();
	salesperson sp(10,"nilesh",50000,3);
	//sp salesperson :: display();
	manager m(11,"nitin",40000,2000);
	//m manager::display();
	salemanager sm (12,"nilay",30000,4,3000,"QA");
	sm.display();
	
	return 0;
	
}
