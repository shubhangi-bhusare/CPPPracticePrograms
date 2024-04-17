//Create menu driven program for Pizza Shop.And display total amount,
#include<iostream>
using namespace std;

int main6()
{
	
	int ch,n;
	
	cout<<"1. No. of ordered pizza 2.Display total amount 3.Exit"<<endl;
	do
	{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter no of ordered pizza"<<endl;
				cin>>n;
				break;
			case 2:
				cout<<"Total amount for pizza is:"<<n*600<<endl;
				break;
			case 3:
				cout<<"Exiting program"<<endl;
				break;
			default:
				cout<<"Invalid choice"<<endl;
		}
	}while(ch!=0);
}
