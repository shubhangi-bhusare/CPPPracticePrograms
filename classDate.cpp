#include<iostream>
using namespace std;

class date 
{
	private:
		int dd,mm,yy;
		
		public:
			date()
			{   cout<<"Default constr"<<endl;
				this->dd=1;
				this->mm=6;
				this->yy=1999;
			}
			date(int dd,int mm,int yy)
			{   cout<<"Parameterized constr"<<endl;
				this->dd=dd;
				this->mm=mm;
				this->yy=yy;
			}
			void display()
			{
				cout<<"Date: "<<"  Day: "<<dd<<"  Month: "<<mm<<"  Year:"<<yy<<endl;
			}
			void setday(int dd)
			{
				this->dd=dd;
			}
			int getday()
			{
				return this->dd;
			}
			void setmonth(int mm)
			{
				this->mm=mm;
			}
			int getmonth()
			{
				return this-> mm;
			}
			void setyear(int yy)
			{
				this->yy=yy;
			}
			int getyear()
			{
				return this-> yy;
			}
};

int main88()
{
	date d1;
	date d3(02,05,1999);
	d1.display();
	d3.display();
	date d4;
	d4.setday(5);
	d4.setmonth(3);
	d4.setyear(2000);
	d4.display();
	date d5;
	//d5.getday();
	d5.display();	
	
	return 0;
}
