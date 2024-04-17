//3:Create a abstract class Shape with pure virtual method area;
//Create Rectangle,Circle,Square class..inherit them from Shape class..Override area method.
//Test these all classes by creating object of respective class.
 #include<iostream>
 using namespace std;
 class shape 
 {
 	virtual int area()=0;
	virtual void display()=0;

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
    int area()
 	{
 		cout<<"Area of Rectangle: "<<length*breadth<<endl;
	}
	void display()
	{   cout<<"Details of rectangle: "<<endl;
		cout<<"Length: "<<length<<"\n"<<"Breadth: "<<breadth<<"\n"<<"Result: "<<length*breadth<<endl;
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
//	 	this->pi=pi;
	 }
 			
 	 int area()
 	{
 		cout<<"Area of circle: "<<pi*rad*rad<<endl;
	}
	void display()
	{   cout<<"Details of circle:"<<endl;
		cout<<"Radius: "<<rad<<"\n"<<"Result: "<<pi*rad*rad<<endl;
	}


 };
 class Square: public shape
 {  private:
 	int length;
 	
 	public:
 		Square(int length)
 		{
 			this->length=length;
		}
 	 int area()
 	{
 	cout<<"Area of square: "<<length*length<<endl;	
	}
	void display()
	{   cout<<"Details of square: "<<endl;
		cout<<"Length: "<<length<<"\n"<<"Result: "<<length*length<<endl;
	}


 };
 int main()
 {
 	Square s(4);
 	s.area();
 	Circle c(3);
 	c.area();
 	Rectangle r(5,6);
 	r.area();
 	s.display();
 	r.display();
 	c.display();
 }
