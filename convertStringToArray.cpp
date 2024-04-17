#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string str ="shubhangi";
//	 int length = str.length();
//	char* arr = new char[length+1];    //+1 is for null terminator
char arr[str.length()];
	strcpy(arr,str.c_str());
	for(int i=0;i<str.length();i++)
	{
		cout<<arr[i]<<endl;
	}
	
}



//another way
//int main() 
//{ 
//    std::string s = "GeeksForGeeks"; 
//  
//    char* char_arr = s.data(); 
//  
//    std::cout << char_arr; 
//  
//    return 0; 
//}
