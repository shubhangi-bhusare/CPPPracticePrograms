#include<iostream>
using namespace std;
class employee
{
	private:
		string name;
		int empid;
	protected:
		double salary;
		
	public:
		employee()
		{
		   name="ram";
		   empid=10;
		   salary=10000;	
		}
		employee(string nm, int id, double sal)
		{
			this->name=nm;
			this->empid=id;
			this->salary=sal;
		}
	    virtual void display()
		{
			cout<<"Name:"<<name<<"  Empid:"<<empid<<"  Salary:"<<salary<<endl;
		}
		virtual void calsalary()
		{
			cout<<"the salary of employee"<<salary<<endl;
		}
};
class manager: public employee
{
	private: int incentive;
	public:
		manager()
		{
			

		}
		manager(string name, int empid, double salary,int incentive): employee(name,empid,salary)
		{
			this->incentive=incentive;
		}
		void calsalary()
		{ 
		      
			cout<<"Salary of manager is: "<<salary+incentive<<endl;
		}
		void display()
		{
			employee::display();
			cout<<"incentives: "<<incentive<<endl;
		}
		void managertask()
		{
			cout<<"manager task"<<endl;
		}
		 
};
class salesperson: public employee
{
	private: int fa,ta;
	public:
		salesperson()
		{
			

		}
		salesperson(string name, int empid, double salary,int fa,int ta): employee(name,empid,salary)
		{
			this->fa=fa;
			this->ta=ta;
		}
		void calsalary()
		{ 
		     
			cout<<"Salary of salesperson is: "<<salary+fa+ta<<endl;
		}
		void display()
		{
			employee::display();
			cout<<"Fa: "<<fa<<"  Ta:"<<ta<<endl;
		}
		
};
int main1()
{
	manager m("mahesh",101,80000,20000);
	m.display();
	m.calsalary();
	cout<<"-----------------------------"<<endl;
	employee e;
	e.display();
	e.calsalary();
	cout<<"-----------------------------"<<endl;
	salesperson sp("manish",102,20000,100,200);
	sp.display();
	sp.calsalary();
	cout<<"-----------------------------"<<endl;
    employee * iacsd[3];
    iacsd[0]=&e;
    iacsd[1]=&m;
    iacsd[2]=&sp;
    for(int i=0;i<3;i++)
    {
    	iacsd[i]->display();
	}
	employee* ptr=&m;
	ptr->display();
//	manager* ptr1=&m;
//	ptr1->managertask();
	manager *ptr1 = dynamic_cast <manager*> (ptr);
	ptr1->managertask();
}





