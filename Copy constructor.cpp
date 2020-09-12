#include<iostream>
using namespace std;
class copy1
{
	int a;
	public:
		copy1(int b)
		{
			a=b;
		}
		copy1(const copy1 & ob )
		{
			a=ob.a;
		}
		void show()
		{
			cout<<"a"<<a<<endl;
		}
	};
	int main()
	{
		copy1 ob1(5);
		copy1 ob2=ob1;
		ob1.show();
		ob2.show();
		return(0);
	}
