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
		Box
		{
			this->length=length;
			this->heigh=height;
			this->breadth=new int;
			*this->breadth=breadth;
		}
		
		Box(const Box &obj)
		{
			this->breadth=new int;
			this->length=obj.length;
			this->height=obj.height;
			*breadth=*obj.breadth
			
		}
		
};
int main()
{
	Box box;
	
}
