//Accept a single digit from the user and display it in words. 
//For example, if digit entered is 9, display Nine.
#include<iostream>
using namespace std;

int main7()
{  
    int digit;
	cout<<"----Menu----"<<endl;
	cout<<"0.Add zero 1.Add One 2.Add Two 3.Add Three 4.Add Four 5. Add five 6.Add Six 7.Add seven 8.Add Eight 9.Add Nine 10.Exit"<<endl;
	do{
	cout<<"Enter your digit"<<endl;
	cin>>digit;
	switch (digit)
	{   
	    case 0:
	    	cout<<"Zero"<<endl;
			break;
	    	
		case 1:
			cout<<"One"<<endl;
			break;
		case 2:
		   cout<<"Two"<<endl;
		   break;
		case 3:
			cout<<"Three"<<endl;
			break;
		case 4:
			cout<<"Four"<<endl;
			break;
		case 5:
			cout<<"Five"<<endl;
			break;
		case 6:
		    cout<<"Six"<<endl; 
		    break;
		case 7:
			cout<<"Seven"<<endl;
			break;
		case 8:
			cout<<"Eight"<<endl;
			break;
		case 9:
			cout<<"Nine"<<endl;
		    break;
		case 10:
			cout<<"Exiting program"<<endl;
			break;	
		default:
		   	cout<<"Invalid digit...please try again"<<endl;
	}
     }while(digit!=10);
}
