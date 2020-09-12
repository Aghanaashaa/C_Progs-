#include<iostream>
using namespace std;
class Parent
{
private:
	int a;
protected:
	int b;
	public:
	int c;
	void fun_Parent()
	{
		//a=10;
		b=12;
		c=5;
	}
};
class Child:public Parent
{
	private:
	protected:
	public:
		void fun_Child()
		{
			//a=10;
			b=12;
			c=5;
		}
};
class Grandchild:public Child
{
	public:
		void fun_Grandchild()
		{
			//a=10;
			b=12;
			c=5;
		}
};
main()
{
	Grandchild c;
	//c.a;
	//c.b;
      c.c;
}
