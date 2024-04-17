//6. Accept two numbers and calculate GCD of them.
#include<iostream>
using namespace std;
int gcd(int a, int b) 
{ 
    
    int result = min(a, b); 
    while (result > 0) { 
        if (a % result == 0 && b % result == 0) { 
            break; 
        } 
        result--; 
    } 
  
    
    return result; 
} 
  

int main6() 
{ 
    int a = 10, b = 20; 
    cout << "GCD of " << a << " and " << b << " is "
         << gcd(a, b); 
    return 0; 
} 

