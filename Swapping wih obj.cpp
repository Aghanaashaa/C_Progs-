#include<iostream>
using namespace std;
class Swap
{
int x;
public:
	swap()
	{
		x=1;
	}
void input();
void show();
void calc (swap s2);	
};
void Swap::input()
{
	cout<<"Enter the values :"<<endl;
	cin>>x;
}
void Swap ::show()
{
	cout<<"Swapped values:"<<s1.x<<s2.x;
}
void Swap::calc(swap s2)
{
	Swap s3;
	s3=s2;
	s2=s1;
	s1=s3;
	s3.show();
 } 
int main()
{
	Swap s1,s2;
	s1.input();
	s2.input();
	s1.show();
	s2.show();
	
}


