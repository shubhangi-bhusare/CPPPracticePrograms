//Create cpp application for bank account handling.
//2.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
//Add  constr. (2 constrs : first to accept all details )
//
//2.2 Add Business logic methods
//Methods
//public void withdraw(double amt) 
//public void deposit(double amt)
//
//2.3: Create object of account class and test withdraw and deposit methods.
//---------------------------------------------------------------------------------
#include<iostream>
using namespace std;

class BankAccount
{ private:
	int accno;
	string name;
	double balance;
	
	public:
		BankAccount()
		{
			accno=45639;
			name="xyz";
			balance=50000;
		}
		BankAccount(int accno,string name,double balance)
		{
			this->accno=accno;
			this->name=name;
			this->balance=balance;
		}
		
		void withdraw();
		void deposit();
		void display();
	
};
void BankAccount::deposit()
{   int damt;
	cout<<"Enter the amount for deposit"<<endl;
	cin>>damt;
	balance+=damt;
	cout<<"Balance after depositing "<<damt<<":"<<balance<<endl;
}

void BankAccount::withdraw()
{   
	int wamt;
	cout<<"Enter the amount for withdraw"<<endl;
	cin>>wamt;
	if(wamt>balance)
	{
		cout<<"Insufficient balance to withdraw"<<endl;
	}
	balance-=wamt;
	cout<<"Balance after withdrawing "<<wamt<<":"<<balance<<endl;
}
void BankAccount::display() 
{
	cout<<"Account no: "<<accno<<"  name: "<<name<<"  Balance:"<<balance<<endl;
}
int main2()
{ 
     BankAccount b(5623,"mahesh",900000);
     b.deposit();
     b.withdraw();
     b.display();
     
	
}
