#include<iostream>
using namespace std;
class Area
{
    private:
	int x;//for square
	int pi=3.14,r;//for circle
	int l,b;
	public:
		int area(int x)
		{
			int a;
			a=x*x;
			cout<<"Area of square:"<<a<<endl;
		}//for square
		int area(float r)
		{
			int a1;
			a1=2*3.14*r*r;
			cout<<"Area of circle:"<<a1<<endl;
		}//for circle
		int area(int l, int b)
		{
			int a3=l*b;
			cout<<"Area:"<<a3<<endl;
		}//for rectangle
};
main()
{
	int ch;
	Area a;
	cout<<"Enter your choice:"<<endl;
	cin>>ch;
	switch(ch)
   {
	case 1: a.area(3);
	break;
	case 2: a.area(6);
	break;
	case 3: a.area(3,8);
	break;
	default:cout<<"Invaid case";
	break;
   }	
}	
	
