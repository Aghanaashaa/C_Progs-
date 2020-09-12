#include<iostream>
using namespace std;
class area
{
	double a,w;
	float q;
	public:
		area(double l,double b)
		{
			a=l*b;
	    }
		area(double s)
		{
			w=s*s;
		}
		area( float r)
		{
			q=3.14*r*r;
		}
			void show()
		{
		cout<<"Area of rectangle:"<<a<<endl;
	    }
	    void show1()
	    {
	    cout<<"Area of square:"<<w<<endl;
		}
		void show2()
		{
		cout<<"Area of circle:"<<q<<endl;
        }	

        };
int main()
{
	double a,b,s;
	float g;
	cout<<"Enter length and breadth"<<endl;
	cin>>a>>b;
	area ob(a,b);
	ob.show();
	cout<<"Enter the side of the square:"<<endl;
	cin>>s;
	area ob2(s);
	ob2.show1();
	cout<<"Enter the radius of circle:"<<endl;
	cin>>g;
	area ob3(g);
	ob3.show2();
	cout<<"Harsh Vardhan"<<endl<<"18BET1037"<<endl;
	return(0);
}
