#include<iostream>
using namespace std;
class A
{
	public:
		void fun1()
		{
			cout<<"HELLO!"<<endl;
		}
};
class B:  virtual public A
{
	public:
		void fun2()
		{
			cout<<"HOLA!";
		}
}; 
class C: virtual public A
{
	public:
		void fun3()
		{
			cout<<":)";
		}
};
class D: public B, public C
{
	public:
        void fun4()
        {
		cout<<"EOM";
        }
};
main()
{
	D obj;
	obj.fun1();
}
