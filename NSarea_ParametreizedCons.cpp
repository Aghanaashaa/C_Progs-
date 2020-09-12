#include<iostream>
using namespace std;
class area
{
	double a;
	public:
		area(double l,double b)
		{
			a=l*b;
		}
		void show()
		{
		cout<<"Area of rectangle:"<<a;
		}	
};
int main()
{
	double a,b;
	cout<<"Enter length and breadth"<<endl;
	cin>>a>>b;
	area ob(a,b);
	ob.show();
	cout<<"\nHarsh Vardhan"<<endl<<"18BET1037"<<endl;
	return(0);
}
