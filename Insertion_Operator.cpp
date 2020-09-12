#include<iostream>
using namespace std;
class Complex
{
	int real;
	int img;
	public:
		Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		friend ostream &operator<<(ostream&a,Complex&s1);
};
ostream&operator<<(ostream&a,Complex&s1)
{
	a<<s1.real<<"+i"<<s1.img<<endl;
	return a;
}
main()
{
	Complex s1(2,8);
	cout<<(cout,s1);
}
