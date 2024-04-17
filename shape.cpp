//Geometric Shapes with Polymorphism:
//Problem Statement: Extend the shape hierarchy example by implementing polymorphism. 
//Define a base class Shape with methods to calculate area and perimeter. Then, 
//create derived classes like Circle, Rectangle, and Triangle, each with its own implementation of these methods.
#include<iostream>
 using namespace std;
 class shape 
 {
 	public:
 		virtual void calArea()
 		{
 		   cout<<"The area of shape is: "<<endl;	
		}
		 void CalPerimeter()
		{
			cout<<"The perimeter of shape is: "<<endl;
		}
		virtual void display()
		{
			
		}

 };
 class Rectangle: public shape
 {  
    private: int length,breadth;
    public:	
    Rectangle()
    {
    	
	}
	Rectangle(int length, int breadth)
	{
		this->length=length;
		this->breadth=breadth;
	}
    void calArea()
 	{
 		shape::calArea();
 		cout<<"Area of Rectangle: "<<length*breadth<<endl;
	}
	void display()
	{   
	    shape::display();
	    cout<<"Details of rectangle: "<<endl;
		cout<<"Length: "<<length<<"\n"<<"Breadth: "<<breadth<<"\n"<<"Result: "<<length*breadth<<endl;
	}
	void CalPerimeter()
	{
		cout<<"The perimeter of rectangle is: "<<2*length+2*breadth<<endl;
	}

 };
 class Circle: public shape
 {
 	private:
 		int rad;
 		float pi=3.14;
 		
 	public:
 	
 	Circle()
 	{
 		
	}
	 Circle(int rad)
	 {
	 	this->rad=rad;
	 }
 			
 	 void calArea()
 	{
 		shape::calArea();
 		cout<<"Area of circle: "<<pi*rad*rad<<endl;
	}
	void display()
	{   
	    shape::display();
		cout<<"Details of circle:"<<endl;
		cout<<"Radius: "<<rad<<"\n"<<"Result: "<<pi*rad*rad<<endl;
	}


 };
 class Triangle: public shape
 {  private:
 	int base,height;
 	
 	public:
 		  
 		Triangle(int base,int height)
 		{
 			this->base=base;
 			this->height=height;
		}
 	void calArea()
 	{
 	    //shape::calArea();
		cout<<"Area of Triangle: "<<(base*height)/2<<endl;	
	}
	void display()
	{   
	    shape::display();
		cout<<"Details of Triangle: "<<endl;
		cout<<"base: "<<base<<"Height: "<<height<<"\n"<<"Result: "<<(base*height)/2<<endl;
	}


 };
 int main()
 {
 	Triangle t(4,8);
 	t.calArea();
 	Circle c(3);
 	c.calArea();
 	Rectangle r(5,6);
 	r.calArea();
 	t.display();
 	r.display();
 	c.display();
 }


 				  
