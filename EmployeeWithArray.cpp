#include<iostream>
using namespace std;
class employee
{
	protected: 
	int empid;
	string name;
	int salary;
	
	public:
		employee()
		{
			empid = 2;
			name = "ram";
			salary = 10000;
			
		}
		employee(int empid,string name,int salary)
		{
			this->empid=empid;
			this->name=name;
			this->salary=salary;
		}
		virtual void display()
		{
			cout<<"empid: "<<empid<<"  name:"<<name<<"  salary:"<<salary<<endl;
		}
		virtual int calsalary()
		{
			cout<<"salary of employee is: "<<salary<<endl;
		}
};
class manager: public employee
{
	private:
		int incentive;
	
	public:
		manager()
		{
			incentive=5000;
		}
		manager(int empid,string name,int salary,int incentive): employee(empid,name,salary)
		{
			this->incentive=incentive;
		}
		void display()
		{ 
		    employee::display();
			cout<<"Incentives: "<<incentive<<endl;
		}
		
		int calsalary()
		{ 
		    
			cout<<"Salary of manager is: "<<salary+incentive<<endl;
		}
		void managertask()
		{
			cout<<" manager task is here"<<endl;
		}
};
class salesperson : public employee
{
	int ta,fa;
	
	public:
	salesperson()
	{
		ta=2000;
		fa=5000;
	}
	salesperson(int empid,string name,int salary,int ta,int fa): employee(empid,name,salary)
	{
		this->ta=ta;
		this->fa=fa;
	}
	   void display()
		{ 
		    employee::display();
			cout<<"Travelling allowances: "<<ta<<"  Food allowances:"<<fa<<endl;
		}
		int calsalary()
		{ 
		   
		   
			cout<<"Salary of salesperson is: "<<salary+ta+fa<<endl;
		}
		 
};

int main65()
{
	employee e;
	e.display();
	manager m(10,"mahesh",80000,20000);
	m.display();
	///m.calsalary();
	salesperson sp(17,"manish",5000,1000,2000);
	sp.calsalary();
	sp.display();
    m.managertask();
	int i;

	employee* iacsd[3];
	iacsd[0] = &e;
	iacsd[1] = &m;
	iacsd[2] = &sp;
	
	
	 cout<<"\n \n";
	 cout<<"Display details by use of array"<<endl;
	for(i=0;i<3;i++)
	{ 
	     cout<<"---------------------------"<<endl;
		iacsd[i]->display();
		iacsd[i]->calsalary();
	}
	
}
