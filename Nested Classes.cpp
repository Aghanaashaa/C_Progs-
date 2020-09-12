#include<iostream>
using namespace std;
class A
{
	public:             
	class B
	{
		private:
		int num;
		public:
		void inline large(int x,int y)
		{
			num=x;
			if(num < y)
				num=y;
		}
		void inline showdata()
		{
			cout<< "\n Large = "<<num;
		}
	};
};
int main()
{
	A :: B b;
	b.large(78,89);
	b.showdata();
}7
7
