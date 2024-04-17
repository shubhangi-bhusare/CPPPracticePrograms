#include<iostream>
using namespace std;
class Box
{
	private:
		int length,height;
		int *breadth;
	public:
		Box()
		{
			length=height=10;
			*breadth=10;
		}
		Box(int length,int height,int breadth)
		{ 
		    this->breadth=new int;
			this->length=length;
			this->height=height;
			*this->breadth=breadth;
		}
		
		Box(const Box &obj)
		{
			this->breadth=new int;
			this->length=obj.length;
			this->height=obj.height;
			*breadth=*obj.breadth;
			
		}
		void display()
	{
		cout<<"\n\n length="<<length
			<<"   Breadth="<<*breadth 
			<<"  Height="<<this->height<<endl;
	}
	~Box()
	{
		delete breadth;
	}
		
};
int main()
{
	Box box(10,40,30);
	box.display();
	
	Box box2(box);
	box2.display();
	
}
