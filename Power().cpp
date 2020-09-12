#include<iostream>
using namespace std;
int power(int n, int p=2)
{
int res  = 1;
for(int i=1; i<=p ; i++)
res = res * n;
                      
return res;
}

double power(double n, int p = 2)
{
double res = 1.0;
                   
for(int i = 1; i <= p ; i++)
res = res * n;
                         
return res;
}
 main()
{
int value, powr, result;
cout<< "\n Enter a value (any integer ) to find it's square:";
cin>> value;
result = power(value);
cout<< "The square of " << value << " is " << result;                                   
cout<< "\n Enter a value (any integer) :";
cin>> value;
cout<< "\n Enter its power (any integer) :";
cin>> powr;
                            

result = power(value, powr);
cout<< "\n The " << value << " to the power of " << powr <<" is " << result;

int p;
float val, r;
cout<< "\n Enter a value :";
cin>> val;
cout<< "\n Enter its power ( integer):";
cin>> p;
r = power(val, p);
cout<< "\n The " << val << " to the power of " << p <<" is " << r;
                        
cout<< "\n Enter a value :";
cin>> val;
r = power(val);
cout<< "\n The square of " << val <<" = " << r;
 return 0;             
}
