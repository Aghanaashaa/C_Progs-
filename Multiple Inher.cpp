#include<iostream>
using namespace std;
class Academics
{
	protected:
		int ma;
		public:
			void input()
			{
				cout<<"Enter marks:";
				cin>>ma;
			}
			void show()
			{
				cout<<"Marks 1:"<<ma<<endl;
			}
};
class Games
{
	protected:
		int mg;
		public:
			void input()
			{
				cout<<"Enter marks:";
				cin>>mg;
			}
			void show()
			{
				
				cout<<"Marks 2:"<<mg<<endl;
			}
};
class Result:public Academics,public Games
{
	int t;
	float agg;
	public:
		void total()
		{
			t=ma+mg;
			agg=t/2.0;
			cout<<"Total marks:"<<agg<<endl;
		}
};
main()
{
	Result r;
	r.Academics::input();
	r.Academics::show();
	r.Games::input();
	r.Games::show();
	r.total();
}
