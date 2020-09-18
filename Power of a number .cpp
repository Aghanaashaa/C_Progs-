 
#include<iostream>
using namespace std; 
int power(int x, unsigned int y) 
{ 
    int res = 1; 
  
    while (y > 0) { 
        if (y == 1) 
            res = res * x; 
         y = y >> 1;
        x = x * x;
    } 
    return res; 
} 

 
int main() 
{ 
    int x = 3; 
    unsigned int y = 2; 
    cout<<" Iterative method\n";
    cout<<x<<"to the power"<<y <<"is : "<<power(x, y); 
  
    return 0; 
}
