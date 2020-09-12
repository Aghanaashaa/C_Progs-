#include<iostream>
using namespace std;
class Vehicle
{   protected:
	int vno;
	public:
		void show1()
		{
			cout<<"This is a vehicle:)"<<endl;
		}
};
class Car: public Vehicle
{
	public:
		void show2()
		{
			cout<<"This is a car:)"<<endl;
		}
};
class Four_wheel:public Car
{
	public:
		void show3()
		{
			cout<<"This is a four wheeler:)";
		}
};
class Awesome:public Four_wheel
{
	public:
		void show4()
		{
			cout<<"Let it go......";
			cout<<"Let it go.........";
		}
		void display()
		{
		show1();
		show2();
		show3();
		show4();	
		}
		
};
main()
{
	Awesome w;
	w.display();
}
