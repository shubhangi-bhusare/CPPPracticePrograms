#include<iostream>
#include<fstream>
using namespace std;

int main1(){
	cout<<"1:create file 2:write 3:read 4:exit"<<endl;
	int ch;
	string name,data;
	do{
		cout<<"Enter Choice"<<endl;
		cin>>ch;
	switch(ch){
		case 1:{  cout<<"Enter Name:"<<endl;
		         cin>>name; 
		        //ofstream outFile("MyData1.txt");
		        ofstream outFile(name.c_str());
		        //or
		        //ofstream out;
		        //outFile.open("MyData.txt")
		        if(outFile.is_open()){
		        	cout<<"open or Created  "<<endl;
				}
		        else{
		        	cout<<"Error "<<endl;
				}
				outFile.close();
			
			break;
		}
		case 2:{
			 cout<<"Enter Name of file to write data:"<<endl;
		         cin>>name; 
			ofstream outFile(name.c_str());
			if(outFile.is_open()){
			//write	
			cout<<"Enter Data To write into file"<<endl;
			outFile<<"This is Data From Program"<<endl;
		 cin.ignore();
	      	getline(cin,data);
			 outFile<<data;
			cout<<"data Stored !!!"<<endl;
				outFile.close();
			}
			else
			{
			cout<<" Some Error occur !!!!"<<endl;	
			}
		
			
			
			break;
		}
		case 3:{
			cout<<"Enter Name of file to write data:"<<endl;
		         cin>>name; 
			//to read data from file
			//ifstream
			ifstream inputFile(name.c_str());
			if(inputFile.is_open()){
				cout<<"Reading data from file   "<<endl;
				
			   while(getline(inputFile,data))
		      	{		 
				//inputFile>>line;
			     cout<<data<<endl;
				 }
			     
		    	inputFile.close();	
			}
			else
			{
				cout<<"Error:"<<endl;
			}
			
			
			break;
		}
		case 4:{
			
			break;
		}
	}	
	}while(ch!=4);
	
	
	return 0;
	
	
	
	
	 
}

