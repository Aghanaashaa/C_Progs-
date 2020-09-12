#include<iostream>
using namespace std;
class Base
{
	public:
		Base()
		{
			cout<<"Default of Base class:)"<<endl;
		}
		Base(int x)
		{
			cout<<"Parametized of Base class"<<x<<endl;
		}
};
class Derived: public Base
{
	public:
		Derived()
		{
			cout<<"Default of Derived Class:)"<<endl;
		}
		Derived(int a)
		{
			cout<<"Parameterized of Derived Class:"<<a<<endl;
		}
		Derived(int x,int a):Base(x)
		{
			cout<<"Parameterized of Derived Class:"<<x<<a<<endl;
		}
};
main()
{
	Derived d(10,20);
	cout<<"A.Aghanaashaa"<<endl<<"18BET1027"<<endl;
}

 
