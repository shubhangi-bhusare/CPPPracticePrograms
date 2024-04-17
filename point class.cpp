//4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
//getters and setters for all the data members. Also add the display function. Create the object of this 
//class in main method and invoke all the methods in that class. 

#include<iostream>
using namespace std;
class point 
{
   private:
   	int x;
   	int y;
    
    public:
    	point()
    	{    
		    cout<<"Default constructor called"<<endl;
    		this->x=0;
    		this->y=0;
		}
		point(int x,int y)
		{  
		    cout<<"Parameterized constructor called"<<endl;
			this->x=x;
			this->y=y;
			
		}
		void display()
		{
			cout<<"point x: "<<x<<" point y: "<<y<<endl;
		}
		void setptX()
		{
			this->x=x;
		}
		int getptX()
		{
			return this->x;
		}
		void setptY()
		{
			this->y=y;
		}
		int getptY()
		{
			return this->y;
		}
	
};
int main()
{
	point p;
	p.display();
	point p1(10,20);
	p1.display();
}

