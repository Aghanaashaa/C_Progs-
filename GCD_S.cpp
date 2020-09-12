#include <iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
	return a;
	if(a==0)
	return b;
	else
	return gcd(b,a%b);
}
main()
{
int a,b;
cin>>a>>b;
cout<<"GCD = "<<gcd(a,b);
return 0;
}
