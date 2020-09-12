#include<iostream>
using namespace std;
class complex
{
	float r,i;
	public:
	void input();
	void show();
	void add(complex c2);
};
void complex:: input()
{
	cout<<"Enter complex number:"<<endl;
	cin>>r>>i;
}
void complex::show()
{
	cout<<r<<"+"<<i<<"i"<<endl;
}
void complex::add(complex c2)
{
	complex c3;
	c3.r=r+c2.r;
	c3.i=i+c2.i;
	c3.show();
}
 int main()
{
	complex c1,c2;
	
	c1.input();
	c2.input();
	c1.show();
	c2.show();
	c1.add(c2);
	cout<<"Harsh Vardhan"<<endl<<"18BET1037"<<endl;
	return 0;
}
