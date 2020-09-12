#include <iostream>
using namespace std;
int findGCD(int a, int b)
{
	if(a==0||b==0)
	{
	cout<<"GCD is 0";
	return 0;
	}
	else if (a==b)
	{
		cout<<"GCD is:"<<b;
	
	}
	else if(a>b)
	{
		 a -=b;
		 cout<<"GCD is:"<<a;
	
	}
	else
	{
		b-= a;
		cout<<"GCD is:"<<b;
	}
	
}
main()
{
    findGCD(12,24);
}
