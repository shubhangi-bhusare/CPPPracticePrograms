#include<iostream>
using namespace std;
int main()
{
	float annualSalary, tax;
	cout<<"Enter the annual salary"<<endl;
	cin>>annualSalary;
	if(annualSalary<=1,50,000)
	{
		tax=0;
		cout<<"Tax is:"<<tax<<endl;
	}
	else if(annualSalary>1,50,000 && annualSalary<=3,00,000)
	{
		tax= 0.2 * annualSalary; 
		cout<<"Tax is:"<<tax<<endl;
	}
	else
	{
	    tax= 0.3 * annualSalary; 
		cout<<"Tax is:"<<tax<<endl;	
	}
	cout << "Income tax to be paid: " << tax << endl;

	return 0;
	
}
