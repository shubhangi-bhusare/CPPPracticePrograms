#include<iostream>
using namespace std;

int main2()
{
  int n;
cout<<"Enter a number"<<endl;
cin>>n;
int sqr=n*n;
  int sum=0;
  while(sqr>0)
  {
  	int rem=sqr%10;
  	sum += rem;
  	sqr=sqr/10;
  	
  }	
  if(n==sum)
  {
  	cout<<"Neon"<<endl;
  }
  else{
  	cout<<"Not Neon"<<endl;
  }
  return 0;
}
