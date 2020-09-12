#include<iostream>
using namespace std;

class Student{

	private:
		string name;
		int register_no;
		int VIT_Rank;
		double percentage;
		public:
		Student(string n,int reg,int v,double per)
		{
			name=n;
			register_no=reg;
			VIT_Rank=v;
			percentage=per;
		}

	
		void set()
		{
			cout<<"\n The details are:";
			cout<<"\n Name:"<<name;
			cout<<"\n Register number:"<<register_no;
			cout<<"\n Rank"<<VIT_Rank;
			cout<<"\n Percentage"<<percentage;
		}
};
main()
{
	Student s("Asdf",12245,223,76.8);
	Student s1("SSfgd",4456,234,98.2);
	s.set();
	s1.set();
}


