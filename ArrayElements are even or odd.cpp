#include<iostream>
using namespace std;
int main4()
{    int i;
	int arr[]={23,4,5,35,85,76,54,8,1,3,7,9,22,11,65 };
		cout<<"Odd array elements are"<<endl;
		//for(int i=0;i<sizeof(arr);i++)
		for(int i=0;i<15;i++)
		{
			if(arr[i]%2!=0)
			{
				cout<<"ODD"<<" "<<arr[i]<<endl;
		
			}
			else
			{
				cout<<"EVEN"<<" "<<arr[i]<<endl;
			}
		}
	
	return 0;
}
