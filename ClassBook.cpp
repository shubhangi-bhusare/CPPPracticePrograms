#include<iostream>
using namespace std;
class book 
{
   private:
   	string bname;
	int id;
    string author;
    double price;
    
    public:
    	book()
    	{    
		    cout<<"Default constructor called"<<endl;
    		this->bname="abc";
    		this->id=101;
    		this->author="xyz";
    		this->price=100.2;
		}
		book(string bname,int id,string author,double price)
		{  
		    cout<<"Parameterized constructor called"<<endl;
			this->bname=bname;
			this->id=id;
    		this->author=author;
    		this->price=price;
			
		}
		void display()
		{
			cout<<"Book name: "<<bname<<"  Id:"<<id<<"  Author:"<<author<<"  Price:"<<price<<endl;
		}
		void setname(string bname)
		{
			this->bname=bname;
		}
		string getname()
		{
			return this->bname;
		}
		void setid(int id)
		{
			this->id=id;
		}
		int getid()
		{
			return this->id;
		}
		void setauthor(string author)
		{
			this->author=author;
		}
		string getauthor()
		{
			return this->author;
		}
		void setprice(double price)
		{
			this->price=price;
		}
		double getprice()
		{
			return this->price;
		}
};
int main()
{
	book b1;
	b1.display();
	book b2("C Programming",10,"dennis ritchie",500.75);
	b2.display();
	b2.setauthor("abd");
	b2.display();
	b2.getauthor();
}
