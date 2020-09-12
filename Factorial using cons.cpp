#include<iostream>
using namespace std;
class factorial
{
	int n,f;
	public:
		factorial()
		{
			f=1;
		}
void input()
{
	cout<<"Enter number:";
	cin>>n;
}
void cac()
{
for(int i=1;i<=n;i++)
{
	f=f*i;
}
}
void show()
{
	cout<<"Factorial:"<<f;
}
~factorial()
{ cout<"";
}
};
int main()
{
	factorial ob;
	ob.input();
	ob.cac();
	ob.show();
	return (0);
}
