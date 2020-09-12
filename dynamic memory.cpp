#include<iostream>
#include<cstring>
using namespace std;
class A
{
	char *name;
	public:
		void fun(char*s)
		{
			int x;
			x=strlen(s)+1;
			name=new char[x];
			strcpy(name,s);
		}
		void show()
		{
			cout<<"Name:"<<name<<endl;
		}
};
main()
{
	char n[50];
	gets(n);
	A a;
	a.fun(n);
	a.show();
}
