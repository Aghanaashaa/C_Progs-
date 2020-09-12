#include<iostream>
using namespace std;
class Details
{
	protected:
		int roll_no;
		string name;
		public:
			void input1()
			{
				cout<<"Enter name:"<<endl;
				cin>>name;
				cout<<"Enter roll no:"<<endl;
				cin>>roll_no;
			}
			void show()
			{
				cout<<"Name:"<<name<<endl;
				cout<<"Roll No:"<<roll_no<<endl;
			}
};
class Academics:virtual public Details
{
	protected:
		int ma;
		public:
			void input()
			{
				cout<<"Enter marks:"<<endl;
				cin>>ma;
			}
			void show()
			{
				cout<<"Marks 1:"<<ma<<endl;
			}
};
class Games: virtual public Details
{
	protected:
		int mg;
		public:
			void input()
			{
				cout<<"Enter marks:"<<endl;
				cin>>mg;
			}
			void show()
			{
				
				cout<<"Marks 2:"<<mg<<endl;
			}
};
class Result:public Academics,public Games //public of Details//
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
	r.Details::input1();
	r.Details::show();
	r.Academics::input();
	r.Academics::show();
	r.Games::input();
	r.Games::show();
	r.total();
	return 0;

}
