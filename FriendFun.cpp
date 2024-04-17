#include<iostream>
using namespace std;

class Rectangle
{   
   private:
	int l;
	int b;
	
	public:
		
		Rectangle()
		{
			cout<<"Default constructor"<<endl;
			l=10;
			b=20;
		}
		
		Rectangle(int l,int b)
		{
			this->l=l;
			this->b=b;
		}
	 
	void area()
	{
		cout<<"Area of rectangle: "<<l*b<<endl;
	}
	void show()
	{
		cout<<"Length: "<<l<<"  Breadth:"<<b<<"  Area: "<<l*b<<endl;
	}
	
	friend int changeDimension(Rectangle &rect);
	
	
};
int changeDimension(Rectangle &rect)
{
	rect.l=100;
	rect.b=200;
	rect.show();
}

int main23()
{
    Rectangle rect;
    rect.show();
    rect.area();
    changeDimension(rect);
   //rect.show();
}
