#include<iostream>
using namespace std;
int main3()
{
 int n,j=1;
 char a;
 cout<<"enter char :"<<endl;
 cin>>a;
 cout<<"enter limit :"<<endl;
 cin>>n;
 while(j<=n)
 {
  a=a+1;
  if(a=='z' || a=='Z')
  {
   cout<<"large limit\n";
   j=n;
  }
  else
  cout<<a<<endl;
    j++;
 }
}
