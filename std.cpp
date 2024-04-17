#include<iostream>
using namespace std;
class student
{
	int rollno;
	string name;
	
	public:
		
		student()
		{
			
		}
		student(int rollno,string name)
		{
			this->rollno=rollno;
			this->name=name;	 
		}
		void setrollno(int rollno)
		{
			this->rollno=rollno;
		}
		int getrollno()
		{
			return this->rollno;
		}
		void setname(string name)
		{
			this->name=name;
		}
		string getname()
		{
			return this->name;
		}
		
		void display()
		{
			cout<<"Rollno: "<<rollno<<"  Name:"<<name<<endl;
		}
};
int main()
{   
    int rollno;
    string name;
	student std[3];
	std[0]={101,"shilpa"};
	std[1]={102, "mahesh"};
	std[2]={103,"shubhangi"};
	
	for(int i=0;i<3;i++)
	{
		std[i].display();
	}
	cout<<"enter rollno and naame"<<endl;
	cin>>rollno>>name;
	for(int i=0;i<3;i++)
	{
		if(std[i].getrollno()==rollno && std[i].getname()==name)
		{   
		    cout<<"student details are:"<<endl;
			std[i].display();
		}

		
		 
	}
}
