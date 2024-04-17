//For Example: 145 
//145 = 1! x 4! x 5! =  145
#include<iostream>
using namespace std;
int facto(int n)
{ 
	if(n==0)
	return 1;
	return n*facto(n-1);
}

int main89()
{
   int num;
   cout<<"enter the number"<<endl;
   cin>>num;
   int rem;
 int res=0;
 int digit=num;
 
 while(digit!=0)
 {
 	rem=digit%10;
 	res=res+facto(rem);
 	digit=digit/10;
 }
   
   if(res==num )
  {
  	cout<<num<<": strong no"<<endl;
   }  
   else
 {
 	cout<<num<<": not strong number"<<endl;
 }

}
