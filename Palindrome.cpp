#include<iostream>
using namespace std;
main()
{
int n,r=0,t;
cout<<"Enter a number";
cin>>n;
t=n;
while(t!=0)
{
r=r*10;
r=r+t%10;
t=t/10;
}
if(n==r)
{
	cout<<"The number is a palindrome";
}
else
{
	cout<<"The number is not a palindrome ";
}
}
