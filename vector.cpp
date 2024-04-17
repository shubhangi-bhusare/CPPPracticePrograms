#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main4()
{
	vector<int> vect;
//	vector<int> vect{19,28,34,12,18};
	int ch,no;
	cout<<"1.show elements 2.add elements 3.remove element 4.sort element 5.reverse element 6.count 7.exit"<<endl;
	do{
		cout<<"Enter the choice"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1:
				for(int i=0;i< vect.size();i++)
				{
					cout<<vect[i]<<endl;
				}
				break;
				
			case 2:
				cout<<"Enter the number"<<endl;
				cin>>no;
				vect.push_back(no);
				break;
			case 3:
				cout<<"pop number"<<endl;
				vect.pop_back();
				break;
			case 4:
				sort(vect.begin(),vect.end());
				for(int i=0;i<vect.size();i++)
				{
					cout<<vect[i]<<endl;
				}
				break;
			case 5:
				reverse(vect.begin(),vect.end());
				for(int i=0;i<vect.size();i++)
				{
					cout<<vect[i]<<endl;
				}
				break;
			case 6:
				cout<<"count"<<vect.size()<<endl;
				break;
				
			case 7:
				cout<<"Exit"<<endl;
				break;
				
			default:
				cout<<"Invalid choice"<<endl;
		}
	}while(ch!=7);
}
