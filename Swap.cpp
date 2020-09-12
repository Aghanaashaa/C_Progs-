#include<iostream>
using namespace std;
class Swap
{
	int a,b,c;
	public:
	void input();
	void show();
	void calc();
};
void Swap::input()
{
	cout<<"Enter the values of a and b"<<endl;
	cin>>a;
	cin>>b;
}
void Swap::calc()
{
	c=b;
	b=a;
	a=c;
}
void Swap::show()
{
	cout<<"Swapped values:"<<a<<endl<<b;
}
int main()
{
	Swap s;
	s.input();
	s.calc();
	s.show();
	return 0;
}

